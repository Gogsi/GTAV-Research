#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	struct<3> Local_96 = { 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
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
	struct<6> Local_127 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_133 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	char[] cLocal_177[8] = 0;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	float fLocal_183 = 0f;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	struct<3> Local_189 = { 0, 0, 0 } ;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 16;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	uLocal_54 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_55 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_69 = { -3092.82f, 749.8f, 21.48f };
	Local_72 = { 181.8977f, 4415.152f, 73.463f };
	Local_75 = { 2743.461f, 4385.51f, 47.7521f };
	Local_78 = { -382.1346f, 2817.971f, 44.0671f };
	Local_96 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_127, "", 24);
	Local_62 = { ScriptParam_0.f_1[0 /*3*/] };
	func_261();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_84))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_84);
			}
		}
		func_240();
	}
	if (func_211(Local_62, 13, iLocal_81, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_110)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_240();
				}
			}
			RECORDING::_0x208784099002BC30("RE_HL", 0);
			switch (iLocal_56)
			{
				case 0:
					if (func_194())
					{
						func_240();
					}
					if (!iLocal_61)
					{
						func_193();
					}
					else
					{
						func_192();
					}
					if (bLocal_60)
					{
						iLocal_142 = 1;
						iLocal_56 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_57)
						{
							case 0:
								if ((func_191() && iLocal_58 != 8) && iLocal_58 != 10)
								{
									if (!GlobalFunc_6827())
									{
										GlobalFunc_9559(1);
									}
									iLocal_57 = 1;
								}
								switch (iLocal_58)
								{
									case 0:
										func_175();
										break;
									
									case 1:
										func_173();
										break;
									
									case 2:
										if (GlobalFunc_4716())
										{
										}
										iLocal_157 = MISC::GET_GAME_TIMER();
										if (iLocal_139 < 1 && !iLocal_140)
										{
											func_171();
										}
										if (iLocal_59 == 1)
										{
											func_170();
										}
										else if (iLocal_59 == 2)
										{
											func_169();
										}
										else if (iLocal_59 == 3)
										{
											func_168();
										}
										else if (iLocal_59 == 5)
										{
											func_165();
										}
										break;
									
									case 3:
										func_162();
										break;
									
									case 4:
										if (iLocal_59 == 1)
										{
											func_145();
											func_144();
										}
										else if (iLocal_59 == 3)
										{
											func_139();
											func_138();
										}
										else if (iLocal_59 == 5)
										{
											func_139();
											func_129();
										}
										if (!bLocal_113)
										{
											func_125();
											func_124();
											func_121();
											func_120();
											func_117();
											func_115();
											func_114();
											func_113();
										}
										func_105();
										break;
									
									case 6:
										func_62();
										if (iLocal_59 == 3)
										{
											func_138();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_59 == 3)
										{
											func_138();
										}
										break;
									
									case 8:
										if (iLocal_59 == 3)
										{
											func_57();
											func_138();
										}
										break;
									
									case 9:
										if (!PED::IS_PED_INJURED(iLocal_84))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												TASK::TASK_WANDER_STANDARD(iLocal_84, 1193033728, 0);
											}
											PED::SET_PED_KEEP_TASK(iLocal_84, 1);
											SYSTEM::WAIT(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((GlobalFunc_831() && !GlobalFunc_832()) && iLocal_58 != 10)
								{
									if (!PED::IS_PED_INJURED(iLocal_84))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_96, 5f, 5f, 5f, 0, 1, 0))
										{
											GlobalFunc_619(0);
											SYSTEM::WAIT(0);
											GlobalFunc_4956();
											iLocal_58 = 10;
										}
									}
								}
								if (GlobalFunc_6568())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
									{
										PED::DELETE_PED(&iLocal_84);
									}
									func_18();
								}
								break;
							
							case 1:
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								if (iLocal_59 == 1)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_59 == 2)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_59 == 3)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_85))
									{
										TASK::CLEAR_PED_TASKS(iLocal_85);
										TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										PED::SET_PED_KEEP_TASK(iLocal_85, 1);
									}
								}
								else if (iLocal_59 == 5)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_84))
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_84, 1);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_240();
		}
		if (iLocal_58 > 2)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
				{
					if (!PED::IS_PED_INJURED(iLocal_84))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_58 > 0 && iLocal_58 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(iLocal_84))
				{
					if (!GlobalFunc_6827())
					{
						GlobalFunc_9559(1);
					}
					func_53();
				}
				else if (!PED::IS_PED_RAGDOLL(iLocal_84))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_84);
						TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}


















void func_18()//Position - 0xD98
{
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_7754(GlobalFunc_8329(), 4, 5);
	func_22(13, iLocal_81);
	GlobalFunc_7068();
	func_240();
}




void func_22(int iParam0, int iParam1)//Position - 0xE4D
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}































void func_53()//Position - 0x2413
{
	GlobalFunc_5105();
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	func_240();
}




void func_57()//Position - 0x2488
{
	struct<6> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_85) && !PED::IS_PED_INJURED(iLocal_84))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 25f, 25f, 25f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 40f, 40f, 40f, 0, 1, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_85);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_85, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (GlobalFunc_111())
			{
				Var0 = { GlobalFunc_2209() };
				if ((MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_6"))
				{
					GlobalFunc_4956();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_85, PLAYER::PLAYER_PED_ID()))
			{
				iLocal_158 = 4;
			}
		}
	}
	if (!iLocal_112)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_112 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_84))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
		}
		if (PED::IS_PED_INJURED(iLocal_85) && ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ENTITY::GET_ENTITY_COORDS(iLocal_85, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_158 = 5;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_85))
	{
		TASK::TASK_COMBAT_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_167)
	{
		if (PED::IS_PED_INJURED(iLocal_85))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_121))
			{
				HUD::REMOVE_BLIP(&uLocal_121);
			}
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				iLocal_158 = 3;
			}
		}
	}
	if (!iLocal_169)
	{
		if (!PED::IS_PED_INJURED(iLocal_84) && !PED::IS_PED_INJURED(iLocal_85))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					iLocal_158 = 2;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_85))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_121))
			{
				HUD::REMOVE_BLIP(&uLocal_121);
			}
			GlobalFunc_200(&uLocal_194, 4);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_158 = 2;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, iLocal_85, 1))
			{
				iLocal_158 = 2;
			}
		}
	}
	switch (iLocal_158)
	{
		case 0:
			if (!iLocal_167)
			{
				if (!PED::IS_PED_INJURED(iLocal_84) && !PED::IS_PED_INJURED(iLocal_85))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0) && PED::IS_PED_IN_MELEE_COMBAT(iLocal_85))
					{
						if (!iLocal_168)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, -1, 2052, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_85, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
							iLocal_168 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_84, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_158 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_169)
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_84))
					{
						TASK::CLEAR_PED_TASKS(iLocal_84);
						TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_85))
						{
							AUDIO::PLAY_PAIN(iLocal_85, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_169 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::PLAY_PAIN(iLocal_84, 7, 0, 0);
				}
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_BAS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_84) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
				{
					TASK::CLEAR_PED_TASKS(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, -1, 2052, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_85, 0), 1f, -1, 3f, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_85, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					PED::SET_PED_KEEP_TASK(iLocal_84, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, 0);
					SYSTEM::WAIT(10000);
					iLocal_167 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_745())
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_158 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_158 = 0;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				GlobalFunc_5105();
				SYSTEM::WAIT(0);
				if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_158 = 0;
				}
			}
			break;
	}
}




void func_61()//Position - 0x2A73
{
	if (iLocal_59 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_84))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_84);
			}
			iLocal_58 = 8;
		}
	}
}

void func_62()//Position - 0x2A9E
{
	if (HUD::DOES_BLIP_EXIST(uLocal_82))
	{
		HUD::REMOVE_BLIP(&uLocal_82);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_83))
	{
		HUD::REMOVE_BLIP(&uLocal_83);
	}
	if (iLocal_59 == 1)
	{
		AUDIO::STOP_SOUND(uLocal_176);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (!iLocal_123)
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				GlobalFunc_10829(GlobalFunc_8329(), 1, 100, 0, 1);
				GlobalFunc_66(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 8000, 2052, 4);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				PED::SET_PED_KEEP_TASK(iLocal_84, 1);
				SYSTEM::SETTIMERB(0);
				iLocal_123 = 1;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CAM::STOP_GAMEPLAY_HINT(0);
			if (SYSTEM::TIMERB() > 8500 && !iLocal_125)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_125 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) || SYSTEM::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || SYSTEM::TIMERB() > 15000)
			{
				PED::DELETE_PED(&iLocal_84);
				func_18();
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_123)
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_123 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_84))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				PED::SET_PED_KEEP_TASK(iLocal_84, 1);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
				PED::REMOVE_PED_FROM_GROUP(iLocal_84);
				SYSTEM::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10824(9, 1, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10824(9, 1, 1);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10824(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_18();
			}
		}
	}
	else if (iLocal_59 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_85, 1);
					if (!HUD::DOES_BLIP_EXIST(uLocal_120))
					{
						HUD::REMOVE_BLIP(&uLocal_120);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_121))
					{
						uLocal_121 = GlobalFunc_7491(iLocal_85, 1, 145);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 1073741824, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					PED::SET_PED_KEEP_TASK(iLocal_85, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &iLocal_193);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_85, iLocal_193);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), iLocal_193);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -183807561, iLocal_193);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_193, -183807561);
					SYSTEM::SETTIMERA(0);
					iLocal_58 = 7;
				}
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_123)
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_THX", 4, 0, 0, 0);
			iLocal_123 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
			PED::SET_PED_KEEP_TASK(iLocal_84, 1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
			PED::REMOVE_PED_FROM_GROUP(iLocal_84);
		}
		SYSTEM::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		SYSTEM::WAIT(3000);
		func_18();
	}
}











































void func_105()//Position - 0x4864
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_112())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_84))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_84, 0, 0);
				}
				if (!iLocal_141)
				{
					func_107(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!GlobalFunc_111())
					{
						if (iLocal_59 == 1)
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 2)
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 3)
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 5)
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_141 = 1;
					}
				}
			}
			else
			{
				iLocal_141 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_84);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_84))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
		}
	}
}


void func_107(bool bParam0)//Position - 0x4A3B
{
	if (bParam0)
	{
		if (iLocal_126)
		{
			if (GlobalFunc_10699(&uLocal_194, cLocal_177, &Local_133, &Local_127, 8, 0, 0))
			{
				iLocal_126 = 0;
			}
		}
	}
	else if ((!iLocal_126 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_109())
	{
		Local_133 = { GlobalFunc_560() };
		Local_127 = { GlobalFunc_2209() };
		GlobalFunc_5105();
		iLocal_126 = 1;
	}
}


int func_109()//Position - 0x4ABA
{
	if (((((((((((((((((((((((((((((((((((((((((((((GlobalFunc_5672("REHH1_VEH") || GlobalFunc_5672("REHH2_VEH")) || GlobalFunc_5672("REHH3_VEH")) || GlobalFunc_5672("REHH4_VEH")) || GlobalFunc_5672("REHH5_VEH")) || GlobalFunc_5672("REHH1_VEH2")) || GlobalFunc_5672("REHH2_VEH2")) || GlobalFunc_5672("REHH3_VEH2")) || GlobalFunc_5672("REHH4_VEH2")) || GlobalFunc_5672("REHH5_VEH2")) || GlobalFunc_5672("REHH1_WLK")) || GlobalFunc_5672("REHH2_WLK")) || GlobalFunc_5672("REHH3_WLK")) || GlobalFunc_5672("REHH4_WLK")) || GlobalFunc_5672("REHH5_WLK")) || GlobalFunc_5672("REHH1_SLR")) || GlobalFunc_5672("REHH4_SLR")) || GlobalFunc_5672("REHH1_SLW")) || GlobalFunc_5672("REHH2_SLW")) || GlobalFunc_5672("REHH3_SLW")) || GlobalFunc_5672("REHH4_SLW")) || GlobalFunc_5672("REHH5_SLW")) || GlobalFunc_5672("REHH1_OUT")) || GlobalFunc_5672("REHH2_GETOUT")) || GlobalFunc_5672("REHH3_GETOUT")) || GlobalFunc_5672("REHH5_GETOUT")) || GlobalFunc_5672("REHH1_JACK")) || GlobalFunc_5672("REHH2_JACK")) || GlobalFunc_5672("REHH3_JACK")) || GlobalFunc_5672("REHH5_JACK")) || GlobalFunc_5672("REHH1_GUN")) || GlobalFunc_5672("REHH2_SHOOT")) || GlobalFunc_5672("REHH3_SHOOT")) || GlobalFunc_5672("REHH5_SHOO")) || GlobalFunc_5672("REHH1_1HOUR")) || GlobalFunc_5672("REHH2_1HOUR")) || GlobalFunc_5672("REHH1_HHOUR")) || GlobalFunc_5672("REHH2_HHOUR")) || GlobalFunc_5672("REHH1_CRASH")) || GlobalFunc_5672("REHH1_WAY")) || GlobalFunc_5672("REHH2_NEAR")) || GlobalFunc_5672("REHH3_NEAR")) || GlobalFunc_5672("REHH5_NEAR")) || GlobalFunc_5672("REHH2_CULT")) || GlobalFunc_5672("REHH3_CULT")) || GlobalFunc_5672("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}



int func_112()//Position - 0x4DC4
{
	if (iLocal_59 == 5)
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_113()//Position - 0x4ED7
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_149)
		{
			iLocal_151 = MISC::GET_GAME_TIMER();
			iLocal_149 = 1;
		}
		else
		{
			iLocal_153 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_153 = 0;
		iLocal_152 = 0;
		iLocal_149 = 0;
		iLocal_150 = 0;
	}
	if ((iLocal_153 - iLocal_151) > 3000 && (iLocal_153 - iLocal_152) > 6000)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_152 = iLocal_153;
		}
	}
	if ((iLocal_153 - iLocal_151) > 50000 && !iLocal_150)
	{
		func_107(0);
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (!GlobalFunc_111())
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 2)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
					}
				}
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 5)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_150 = 1;
		}
	}
	if ((iLocal_153 - iLocal_151) > 60000 && iLocal_150)
	{
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_84, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_84))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_84, 1193033728, 0);
					}
					if (iLocal_59 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_84, 1);
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					func_53();
				}
			}
		}
	}
}

void func_114()//Position - 0x50A1
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_84))
		{
			if (!iLocal_146)
			{
				iLocal_147 = MISC::GET_GAME_TIMER();
				iLocal_146 = 1;
			}
			else
			{
				iLocal_148 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_146 = 0;
		}
	}
	if ((iLocal_148 - iLocal_147) > 90000)
	{
		func_107(0);
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (iLocal_59 == 1)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 2)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_84, 1);
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_84, 1193033728, 0);
			}
			if (iLocal_59 == 1)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_84, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_84))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_84);
			}
			func_53();
		}
	}
}

void func_115()//Position - 0x51E1
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_84, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_120))
				{
					uLocal_120 = GlobalFunc_7491(iLocal_84, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_82))
				{
					HUD::REMOVE_BLIP(&uLocal_82);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_82))
				{
					uLocal_82 = GlobalFunc_5104(Local_92, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_120))
				{
					HUD::REMOVE_BLIP(&uLocal_120);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_120))
		{
			uLocal_120 = GlobalFunc_7491(iLocal_84, 0, 145);
		}
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 50f, 50f, 50f, 0, 1, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_82))
			{
				uLocal_82 = GlobalFunc_5104(Local_92, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 50f, 50f, 50f, 0, 1, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_82))
			{
				HUD::REMOVE_BLIP(&uLocal_82);
			}
		}
	}
}


void func_117()//Position - 0x5343
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5f, 5f, 5f, 0, 1, 0))
		{
			if (GlobalFunc_620())
			{
				GlobalFunc_619(0);
				iLocal_124 = 0;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
		{
			if (GlobalFunc_111() && !iLocal_124)
			{
				GlobalFunc_619(1);
				iLocal_124 = 1;
			}
		}
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_84, 0);
		}
		if (GlobalFunc_6569("REHH3_CHT3_7"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_84, 1, 1);
		}
		if (GlobalFunc_6569("REHH3_CHT6_5"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_84, 0, 1);
		}
		if (GlobalFunc_6569("REHH3_CHT8_3"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_84, 1, 1);
		}
		if ((GlobalFunc_5672("REHH3_CHT8M") || GlobalFunc_5672("REHH3_CHT8F")) || GlobalFunc_5672("REHH3_CHT8T"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_84, 0, 1);
		}
	}
}



void func_120()//Position - 0x546D
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (iLocal_59 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!GlobalFunc_5672("REHH1_CRASH"))
						{
							func_107(0);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_143)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_107(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!GlobalFunc_111())
					{
						if (iLocal_59 == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 3)
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
								}
							}
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 5)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_143 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_143 = 0;
			}
		}
		if (!iLocal_144)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_107(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_144 = 1;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_144 = 0;
		}
		if (!iLocal_145)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_107(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						if (!PED::IS_PED_INJURED(iLocal_84))
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
							}
						}
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
					}
					iLocal_145 = 1;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_145 = 0;
		}
	}
}

void func_121()//Position - 0x572E
{
	if (func_123(Local_92))
	{
		func_107(0);
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (iLocal_59 == 1)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 2)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
				}
			}
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (GlobalFunc_9562())
	{
		func_107(0);
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (iLocal_59 == 1)
		{
		}
		else if (iLocal_59 == 2)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_84))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
				}
			}
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}


int func_123(struct<3> Param0)//Position - 0x58CC
{
	if (GlobalFunc_8329() == 2)
	{
		if (GlobalFunc_831() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_46 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_124()//Position - 0x5959
{
	if (!func_109())
	{
		func_107(1);
	}
	if (!GlobalFunc_111())
	{
		switch (iLocal_107)
		{
			case 0:
				if (iLocal_59 == 1)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = MISC::GET_GAME_TIMER() + 2000;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				iLocal_107++;
				break;
			
			case 1:
				if (iLocal_109 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_107++;
				}
				break;
			
			case 2:
				if (iLocal_109 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_59 == 1)
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 2)
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 3)
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 5)
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							if (!bLocal_111)
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_107++;
				}
				break;
			
			case 3:
				if (iLocal_59 == 1)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = MISC::GET_GAME_TIMER() + 500;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = MISC::GET_GAME_TIMER();
				}
				iLocal_107++;
				break;
			
			case 4:
				if (iLocal_109 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 3)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 5)
					{
						if (bLocal_111 && !bLocal_113)
						{
							if (GlobalFunc_8329() == 0)
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8329() == 1)
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8329() == 2)
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_107++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_59 == 1)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 6:
				if (iLocal_59 == 1)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 7:
				if (iLocal_59 == 1)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 8:
				if (iLocal_59 == 1)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 9:
				if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 10:
				if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 11:
				if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 12:
				if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 13:
				if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 14:
				if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 15:
				if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 16:
				if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 17:
				if (iLocal_59 == 3)
				{
					iLocal_109 = MISC::GET_GAME_TIMER() + 700;
				}
				iLocal_107++;
				break;
			
			case 18:
				if (iLocal_59 == 2)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 19:
				if (iLocal_59 == 2)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 20:
				if (iLocal_59 == 3)
				{
					iLocal_109 = MISC::GET_GAME_TIMER() + 300;
				}
				iLocal_107++;
				break;
			
			case 21:
				if (iLocal_109 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_59 == 3)
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_107++;
				}
				break;
			
			case 22:
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					TASK::TASK_PLAY_ANIM(iLocal_84, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_107++;
				break;
			}
	}
}

void func_125()//Position - 0x6814
{
	if (iLocal_59 != 3)
	{
		if (func_128())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 3f, 3f, 2f, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_92, Global_18, 0, 1, 0))
				{
					if (GlobalFunc_552(1, 0, 1))
					{
						GlobalFunc_4935();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 3, 0);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
						iLocal_58 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_111)
	{
		if (PED::IS_PED_INJURED(iLocal_85))
		{
			iLocal_58 = 7;
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, 824.8886f, 1275.671f, 359.4312f, Global_18, 1, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0)))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_CHT10", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_84) && !PED::IS_PED_INJURED(iLocal_85))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, -1, 2052, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_85, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 2, 0);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_58 = 6;
			}
		}
	}
}



int func_128()//Position - 0x6AEA
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 50f, 50f, 50f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_84))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129()//Position - 0x6B6B
{
	if (bLocal_113)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if ((((PED::IS_PED_INJURED(iLocal_85) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_92) < 250f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_96) < 250f) || iLocal_115)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_121))
				{
					HUD::REMOVE_BLIP(&uLocal_121);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_122))
				{
					HUD::REMOVE_BLIP(&uLocal_122);
				}
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					AUDIO::PLAY_PAIN(iLocal_85, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_85);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_85);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_170);
				}
				bLocal_113 = false;
			}
			else
			{
				if (!iLocal_116)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_116 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					func_137(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_136(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_130(iLocal_170, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_184, &uLocal_187, &Local_189, &uLocal_188, &uLocal_192, 0f, 0f, 0f, 1500, 0f);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_108 < MISC::GET_GAME_TIMER())
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_745())
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_108 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!GlobalFunc_5672("REHH5_SHO"))
							{
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_85))
						{
							if ((PED::IS_PED_ON_FOOT(iLocal_85) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								iLocal_115 = 1;
							}
						}
					}
					if (!iLocal_114 && !PED::IS_PED_INJURED(iLocal_85))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 0, 16);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_114 = 1;
						}
					}
				}
			}
		}
	}
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x6E4C
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && GlobalFunc_2905(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				*uParam3 = GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1));
				GlobalFunc_2525(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (GlobalFunc_156(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!GlobalFunc_105(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_189, uLocal_188, Param7) };
							if (!GlobalFunc_105(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iParam0, uLocal_188);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}






void func_136(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x7187
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
				{
					if (HUD::DOES_BLIP_EXIST(*uParam1))
					{
						HUD::REMOVE_BLIP(uParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = GlobalFunc_7491(*iParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(*iParam2, 1), 0);
					HUD::SET_BLIP_COLOUR(*uParam3, 1);
					HUD::SET_BLIP_PRIORITY(*uParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*uParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*iParam2, 1) };
				Var1.x = (Var1.x + (((Var4.x - Var1.x) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*uParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = GlobalFunc_7491(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_137(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x72D2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*uParam3))
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
		}
	}
}

void func_138()//Position - 0x73C3
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_85, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_139()//Position - 0x751B
{
	if (!bLocal_111)
	{
		if (iLocal_59 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_103, 200f, 200f, 200f, 0, 1, 0))
			{
				STREAMING::REQUEST_MODEL(iLocal_100);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
				if (STREAMING::HAS_MODEL_LOADED(iLocal_100) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					iLocal_85 = PED::CREATE_PED(26, iLocal_100, Local_103, fLocal_106, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 3, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_85, 42, 1);
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_85, 1);
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_85, "move_m@brave", 1048576000);
					PED::SET_PED_CONFIG_FLAG(iLocal_85, 137, 1);
					GlobalFunc_173(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
					TASK::TASK_PLAY_ANIM(iLocal_85, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
					bLocal_111 = true;
				}
			}
		}
		else if (iLocal_59 == 5)
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_78, 1) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_84, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &Local_65, 1, 1077936128, 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_65, 7f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65) < 110f)
							{
								STREAMING::REQUEST_MODEL(iLocal_100);
								if (STREAMING::HAS_MODEL_LOADED(iLocal_100))
								{
									GlobalFunc_5105();
									SYSTEM::WAIT(0);
									if (GlobalFunc_10726(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(iLocal_84))
									{
										iLocal_170 = VEHICLE::CREATE_VEHICLE(iLocal_101, Local_65, GlobalFunc_1695(Local_65, GlobalFunc_271(PLAYER::PLAYER_ID()), 1), 1, 1);
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_170, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_170, 0f);
										iLocal_85 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_170, 26, iLocal_100, -1, 1, 1);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 2, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(iLocal_85, 42, 1);
										AUDIO::STOP_PED_SPEAKING(iLocal_85, 1);
										GlobalFunc_173(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_85, iLocal_170, iLocal_84, 6, 60f, 786468, -1f, -1f, 1);
										TASK::TASK_COMBAT_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(iLocal_85, 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_170, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f));
										if (HUD::DOES_BLIP_EXIST(uLocal_82))
										{
											HUD::REMOVE_BLIP(&uLocal_82);
										}
										GlobalFunc_5105();
										while (GlobalFunc_111())
										{
											SYSTEM::WAIT(0);
										}
										GlobalFunc_10699(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_113 = true;
										bLocal_111 = true;
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





void func_144()//Position - 0x793C
{
	if (!iLocal_175 && !GlobalFunc_111())
	{
		if (iLocal_173 == 6 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 6 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 7 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 7 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 8 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 8 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 9 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 9 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 10 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 10 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 11 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 11 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 12 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 12 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 13 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 13 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 14 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 14 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 15 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 15 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 16 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 16 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 17 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 17 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 18 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 18 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 19 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 19 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 20 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 20 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 21 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 21 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 22 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 22 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 23 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
	}
}

void func_145()//Position - 0x7F42
{
	iLocal_154 = GlobalFunc_207(GlobalFunc_7719()) * 1000;
	iLocal_154 = (iLocal_154 + GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60);
	if (!iLocal_163)
	{
		if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
		{
			GlobalFunc_5277((((iLocal_173 * 1000 * 60 - GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60) + (iLocal_172 * 1000 - GlobalFunc_207(GlobalFunc_7719()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5277(((iLocal_173 * 1000 * 60 - GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60) + (iLocal_172 * 1000 - GlobalFunc_207(GlobalFunc_7719()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
	{
		GlobalFunc_5277((((iLocal_173 * 1000 * 60 - GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60) + (iLocal_172 * 1000 - GlobalFunc_207(GlobalFunc_7719()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5277(((iLocal_173 * 1000 * 60 - GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60) + (iLocal_172 * 1000 - GlobalFunc_207(GlobalFunc_7719()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	if ((iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 1 && iLocal_172 == GlobalFunc_207(GlobalFunc_7719())) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 25) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719())))
	{
		if (!iLocal_162)
		{
			if (!GlobalFunc_5672("REHH1_1HOUR") && !GlobalFunc_5672("REHH4_1HOUR"))
			{
				func_107(0);
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!GlobalFunc_111())
			{
				if (iLocal_59 == 1)
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_162 = 1;
			}
		}
	}
	if (iLocal_172 == 30)
	{
		if ((iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()) + 30) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 24) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()) + 30))
		{
			if (!iLocal_163)
			{
				if (!GlobalFunc_5672("REHH1_HHOUR") && !GlobalFunc_5672("REHH4_HHOUR"))
				{
					func_107(0);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_163 = 1;
				}
				if (!iLocal_164)
				{
					uLocal_176 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(uLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_176, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()) + 5) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 24) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()) + 5))
		{
			if (!iLocal_165)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_172 == 0)
	{
		if ((iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 1 && iLocal_172 == (GlobalFunc_207(GlobalFunc_7719()) - 30)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 25) && iLocal_172 == (GlobalFunc_207(GlobalFunc_7719()) - 30)))
		{
			if (!iLocal_163)
			{
				if (!GlobalFunc_5672("REHH1_HHOUR") && !GlobalFunc_5672("REHH4_HHOUR"))
				{
					func_107(0);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (iLocal_59 == 1)
					{
						GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_163 = 1;
				}
				if (!iLocal_164)
				{
					iLocal_176 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_176, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 1 && iLocal_172 == (GlobalFunc_207(GlobalFunc_7719()) - 55)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 25) && iLocal_172 == (GlobalFunc_207(GlobalFunc_7719()) - 55)))
		{
			if (!iLocal_165)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_173 >= 24 && iLocal_154 < 150000)
	{
		if (iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) + 24 && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()))
		{
			bLocal_174 = true;
		}
	}
	else if (iLocal_173 == GlobalFunc_208(GlobalFunc_7719()) && iLocal_172 == GlobalFunc_207(GlobalFunc_7719()))
	{
		bLocal_174 = true;
	}
	if (bLocal_174)
	{
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_176);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (iLocal_59 == 1)
		{
			GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_84, 0), (10.5f + 2f), 2, 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_84, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_84);
				if (HUD::DOES_BLIP_EXIST(uLocal_82))
				{
					HUD::REMOVE_BLIP(&uLocal_82);
				}
			}
		}
		iLocal_58 = 9;
	}
}

















void func_162()//Position - 0x894F
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_120))
				{
					HUD::REMOVE_BLIP(&uLocal_120);
				}
				if (!PED::IS_PED_IN_GROUP(iLocal_84))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_82))
				{
					uLocal_82 = GlobalFunc_5104(Local_92, 1);
				}
				if (((GlobalFunc_8329() == 2 && !GlobalFunc_832()) && iLocal_59 != 1) && iLocal_59 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_83))
					{
						uLocal_83 = GlobalFunc_5104(Local_96, 0);
						HUD::SET_BLIP_SPRITE(uLocal_83, 269);
						GlobalFunc_9564();
					}
				}
				if (iLocal_59 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_59 == 1)
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_173 = GlobalFunc_208(GlobalFunc_7719()) + 2;
						if (GlobalFunc_207(GlobalFunc_7719()) >= 30)
						{
							iLocal_172 = 0;
							iLocal_173++;
						}
						else
						{
							iLocal_172 = 30;
						}
						iLocal_110 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 2)
				{
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 3)
				{
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 5)
				{
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_58 = 4;
					}
				}
			}
		}
	}
}



void func_165()//Position - 0x8B23
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (iLocal_109 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0);
					iLocal_109 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
				}
				if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 24f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_183, 2f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
				{
					fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_183, 2f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_86, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_86, -1, 0, 2f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
				{
					if (GlobalFunc_156(iLocal_84, iLocal_86, 1) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8329() == 0)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 1)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 2)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_112())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0);
								GlobalFunc_9563();
								iLocal_139++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (func_112())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}



void func_168()//Position - 0x918D
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
				{
					fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_183, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_86, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_86, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
				{
					if (GlobalFunc_156(iLocal_84, iLocal_86, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_84))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8329() == 0)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 1)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 2)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_112())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								GlobalFunc_9563();
								iLocal_139++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_169()//Position - 0x97A9
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_183, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
				{
					fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_183, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_86, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_86, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					TASK::CLEAR_PED_TASKS(iLocal_84);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
				{
					if (GlobalFunc_156(iLocal_84, iLocal_86, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_84))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8329() == 0)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 1)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
								else if (GlobalFunc_8329() == 2)
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_112())
					{
						iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								GlobalFunc_9563();
								iLocal_139++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_4716())
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!iLocal_102)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_102 = 1;
							}
						}
					}
				}
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139 = 4;
				}
				if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_170()//Position - 0x9E02
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 30f))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 5000, 2052, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, 30000, 2054, 2);
							TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
						}
						iLocal_139++;
					}
					else if (!iLocal_140)
					{
						TASK::CLEAR_PED_TASKS(iLocal_84);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_120))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, 1);
			}
			if (func_112())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 10f)
					{
						if (!PED::IS_PED_INJURED(iLocal_84))
						{
							if (PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_183 = GlobalFunc_156(iLocal_84, PLAYER::PLAYER_PED_ID(), 1);
								if (fLocal_183 > 5f)
								{
									fLocal_183 = (fLocal_183 - 0.5f);
								}
								else
								{
									fLocal_183 = (fLocal_183 - 0.25f);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, 10000, 2054, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_86, 0))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_86, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
								iLocal_139++;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, iLocal_86, 10000, 2054, 2);
								iLocal_139++;
							}
						}
					}
				}
			}
			else if (!iLocal_140)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_4716())
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
				{
					GlobalFunc_4935();
					iLocal_139++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
				{
					if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
						SYSTEM::SETTIMERA(0);
						iLocal_139++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_84))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				}
				if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_86) < 2.5f)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_8329() == 0)
									{
										GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_139++;
									}
									else if (GlobalFunc_8329() == 1)
									{
										GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_139++;
									}
									else if (GlobalFunc_8329() == 2)
									{
										GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_139++;
									}
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_112())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								iLocal_139++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_84, 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_84, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
						else if (!iLocal_141)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_4716())
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_141 = 1;
							}
						}
					}
					else if (!iLocal_140)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (func_112())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
					iLocal_139 = 5;
				}
				if (GlobalFunc_4951(iLocal_84, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_171()//Position - 0xA43E
{
	int iVar0;
	
	if ((iLocal_157 - iLocal_156) > 1000)
	{
		iLocal_171 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_84, 0), 18f, 0, 4);
	}
	if (iLocal_171 != 0)
	{
		iLocal_155++;
		iLocal_156 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_155 > iVar0)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_171, 1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_171, 0))
				{
					if (iLocal_59 == 1)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = MISC::GET_GAME_TIMER();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 2)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = MISC::GET_GAME_TIMER();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 3)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = MISC::GET_GAME_TIMER();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 5)
					{
						if (GlobalFunc_10652(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_84))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = MISC::GET_GAME_TIMER();
						iLocal_155 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_182 = MISC::GET_GAME_TIMER();
			if ((iLocal_182 - iLocal_181) > 3500)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_171);
			}
			iLocal_171 = 0;
		}
	}
}


void func_173()//Position - 0xA631
{
	if (iLocal_59 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_84)) || GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 12f)
				{
					func_174();
					iLocal_58 = 2;
				}
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_166)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89, 100f, 100f, 100f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_166)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89, 200f, 200f, 200f, 0, 1, 0) && !PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_88);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_88);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uLocal_88);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_59 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 95f, 95f, 50f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_84)) || GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_84) < 12f)
				{
					func_174();
					iLocal_58 = 2;
				}
			}
		}
	}
}

void func_174()//Position - 0xA928
{
	if (HUD::DOES_BLIP_EXIST(uLocal_119))
	{
		HUD::REMOVE_BLIP(&uLocal_119);
	}
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_120))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
			{
				uLocal_120 = GlobalFunc_7491(iLocal_84, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120, 0);
			}
		}
		if (!GlobalFunc_6827())
		{
			GlobalFunc_9559(1);
		}
		GlobalFunc_173(&uLocal_194, 3, iLocal_84, sLocal_178, 0, 1);
	}
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_173(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_173(&uLocal_194, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_173(&uLocal_194, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
}

void func_175()//Position - 0xA9DB
{
	func_177(39, 1);
	func_177(40, 1);
	func_177(41, 1);
	func_177(42, 1);
	func_177(43, 1);
	iLocal_84 = PED::CREATE_PED(26, iLocal_99, Local_89, fLocal_95, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_84, 0);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_84, sLocal_180);
	PED::SET_PED_CONFIG_FLAG(iLocal_84, 137, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_84, 206, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 1024, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 65536, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 2, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_84, 17, 1);
	PED::SET_PED_MAX_TIME_IN_WATER(iLocal_84, 60f);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_84, 5f);
	if (iLocal_59 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 4, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_101, 1);
		iLocal_170 = VEHICLE::CREATE_VEHICLE(iLocal_101, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_170, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_170, 4, 0, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_170, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
		TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_59 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 10, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		GlobalFunc_563(1);
	}
	else if (iLocal_59 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_59 == 5)
	{
	}
	iLocal_58 = 1;
}


void func_177(int iParam0, bool bParam1)//Position - 0xAC62
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 2, 1))
		{
			GlobalFunc_7834(iParam0, 2, 1);
		}
	}
	else if (GlobalFunc_7782(iParam0, 2, 1))
	{
		GlobalFunc_7833(iParam0, 2, 1);
	}
}














int func_191()//Position - 0xB5B8
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_113)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_84, 1), 10f, 1) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_INJURED(iLocal_85) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::PLAY_PAIN(iLocal_84, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!PED::IS_PED_IN_GROUP(iLocal_84) && PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 90f)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_84) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_84))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()//Position - 0xB70C
{
	STREAMING::REQUEST_MODEL(iLocal_99);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	if (iLocal_59 == 1 || iLocal_59 == 5)
	{
		STREAMING::REQUEST_MODEL(iLocal_101);
	}
	if (iLocal_59 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", 0);
	}
	else if (iLocal_59 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_99) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_101))
			{
				bLocal_60 = true;
			}
		}
		else if (iLocal_59 == 3)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
			{
				bLocal_60 = true;
			}
		}
		else
		{
			bLocal_60 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_99);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_101);
		}
		else if (iLocal_59 == 3)
		{
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
		}
	}
}

void func_193()//Position - 0xB7E5
{
	if (iLocal_59 == 1)
	{
		Local_89 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_95 = 17.9234f;
		Local_92 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_99 = joaat("a_m_m_business_01");
		cLocal_177 = "REHH1AU";
		sLocal_178 = "BUSINESSMAN";
		sLocal_180 = "BUSINESSMAN";
		iLocal_101 = joaat("schafter2");
	}
	else if (iLocal_59 == 2)
	{
		Local_89 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_95 = 75.9173f;
		Local_92 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_99 = joaat("a_f_y_hiker_01");
		cLocal_177 = "REHH2AU";
		sLocal_178 = "REHH2Hiker";
		sLocal_180 = "REHH2Hiker";
	}
	else if (iLocal_59 == 3)
	{
		Local_89 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_95 = 19.4143f;
		Local_92 = { 814.455f, 1274.797f, 359.5112f };
		Local_103 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_106 = 340.7372f;
		iLocal_99 = joaat("a_f_y_hipster_03");
		iLocal_100 = joaat("s_m_m_security_01");
		cLocal_177 = "REHH3AU";
		sLocal_178 = "REHH3Hipster";
		sLocal_180 = "REHH3Hipster";
		sLocal_179 = "REHH3Security";
	}
	else if (iLocal_59 == 5)
	{
		Local_89 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_95 = 56.5422f;
		Local_92 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_99 = joaat("ig_bride");
		iLocal_100 = joaat("a_m_y_business_01");
		cLocal_177 = "REHH5AU";
		sLocal_178 = "REHH5Bride";
		sLocal_180 = "REHH5Bride";
		sLocal_179 = "REHH5Groom";
		iLocal_101 = joaat("patriot");
	}
	iLocal_61 = 1;
}

int func_194()//Position - 0xB96B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

















int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xD61C
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10550())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_8988(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8329() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}





























void func_240()//Position - 0xE92B
{
	if (iLocal_142)
	{
		func_260(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		GlobalFunc_563(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		if (CAM::_0xBF72910D0F26F025())
		{
			CAM::_0x247ACBC4ABBC9D1C(0);
		}
		Global_24709[0 /*7*/].f_6 = 0;
		GlobalFunc_8316(0, 1, 1, 0);
		GlobalFunc_5105();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_84, 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_84);
				}
				if (iLocal_59 != 2)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_84);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 1805844857) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, 0);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_84, 1);
				if (PED::IS_PED_IN_GROUP(iLocal_84))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (!PED::IS_PED_FLEEING(iLocal_85))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 0);
				}
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (GlobalFunc_6827())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}




















void func_260(bool bParam0)//Position - 0xF4BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_177(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_261()//Position - 0xF4DF
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_69, 1);
		iLocal_68 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1);
			iLocal_68 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_75, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_75, 1);
			iLocal_68 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_78, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_78, 1);
			iLocal_68 = 5;
		}
		if (iLocal_68 == 1)
		{
			iLocal_81 = 1;
			iLocal_59 = 1;
			return Local_69;
		}
		else if (iLocal_68 == 2)
		{
			iLocal_81 = 2;
			iLocal_59 = 2;
			return Local_72;
		}
		else if (iLocal_68 == 3)
		{
			iLocal_81 = 3;
			iLocal_59 = 3;
			return Local_75;
		}
		else if (iLocal_68 == 5)
		{
			iLocal_81 = 4;
			iLocal_59 = 5;
			return Local_78;
		}
	}
	return 0f, 0f, 0f;
}

