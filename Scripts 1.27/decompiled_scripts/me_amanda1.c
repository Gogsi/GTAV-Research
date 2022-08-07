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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	struct<4> Local_51[10];
	bool bLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 16;
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
	int iLocal_260 = 0;
	struct<3> Local_261 = { 0, 0, 0 } ;
	struct<3> Local_264 = { 0, 0, 0 } ;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	char* sLocal_274 = NULL;
	char* sLocal_275 = NULL;
	char* sLocal_276 = NULL;
	int iLocal_277 = 0;
	struct<6> Local_278 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_293 = { 0, 0, 0 } ;
	char* sLocal_296[4] = { NULL, NULL, NULL, NULL };
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	char* sLocal_303 = NULL;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308 = 0;
	struct<6> Local_309 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	char* sLocal_317[4] = { NULL, NULL, NULL, NULL };
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	char* sLocal_325[3] = { NULL, NULL, NULL };
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	char* sLocal_332[3] = { NULL, NULL, NULL };
	int iLocal_336 = 0;
	bool bLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	char* sLocal_340[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_350 = 0;
	char* sLocal_351[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	char* sLocal_364[3] = { NULL, NULL, NULL };
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	var uLocal_370 = 0;
	char* sLocal_371[5] = { NULL, NULL, NULL, NULL, NULL };
	var uLocal_377 = 0;
	char* sLocal_378 = NULL;
	char* sLocal_379 = NULL;
	struct<3> Local_380 = { 0, 0, 0 } ;
	struct<3> Local_383 = { 0, 0, 0 } ;
	struct<3> Local_386 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	struct<3> Local_392 = { 0, 0, 0 } ;
	int iLocal_395 = 0;
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
	var uLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	struct<3> Local_411 = { 0, 0, 0 } ;
	float fLocal_414 = 0f;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	struct<3> Local_417 = { 0, 0, 0 } ;
	float fLocal_420 = 0f;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	struct<3> Local_423 = { 0, 0, 0 } ;
	float fLocal_426 = 0f;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	char* sLocal_431[3] = { NULL, NULL, NULL };
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	var uLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	struct<3> Local_449 = { 0, 0, 0 } ;
	struct<3> Local_452 = { 0, 0, 0 } ;
	float fLocal_455 = 0f;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	struct<3> Local_462 = { 0, 0, 0 } ;
	struct<3> Local_465 = { 0, 0, 0 } ;
	float fLocal_468 = 0f;
	struct<3> Local_469 = { 0, 0, 0 } ;
	float fLocal_472 = 0f;
	var uLocal_473 = 0;
	char* sLocal_474 = NULL;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	char[] cLocal_480[8] = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
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
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_261 = { -836.87f, -153.92f, 34.77f };
	Local_264 = { -1f, -2f, 114f };
	sLocal_267 = "stand_loop_cop";
	sLocal_268 = "stand_loop_owner";
	sLocal_269 = "stand_loop_ama";
	sLocal_270 = "stand_loop_car";
	sLocal_271 = "arrest_cop";
	sLocal_272 = "arrest_owner";
	sLocal_273 = "arrest_ama";
	sLocal_274 = "arrest_car";
	sLocal_275 = "pst_arrest_loop_cop";
	sLocal_276 = "pst_arrest_loop_owner";
	Local_284 = { -813.3679f, 179.4956f, 71.15919f };
	Local_287 = { -806.1814f, 184.2898f, 71.34769f };
	Local_290 = { -801.9036f, 182.9307f, 71.6055f };
	Local_293 = { -1368.279f, 355.9018f, 63.08109f };
	iLocal_301 = -1;
	iLocal_302 = -1;
	iLocal_304 = -1;
	iLocal_305 = -1;
	sLocal_378 = "rcmme_amanda1";
	sLocal_379 = "move_characters@amanda@bag";
	Local_380 = { -839.5436f, -161.1446f, 36.82166f };
	Local_383 = { -837.646f, -155.7491f, 37.94321f };
	Local_386 = { -839.0088f, -161.5691f, 36.8037f };
	Local_389 = { -825.5035f, 179.0266f, 70.36901f };
	Local_392 = { -1378.445f, 367.812f, 63.0445f };
	iLocal_399 = 1;
	iLocal_410 = joaat("police");
	Local_411 = { -840.28f, -153.57f, 37.41f };
	fLocal_414 = 298.55f;
	iLocal_416 = joaat("s_m_y_cop_01");
	Local_417 = { -839.05f, -158.35f, 37.88f };
	fLocal_420 = -163.87f;
	iLocal_422 = joaat("a_m_y_business_01");
	Local_423 = { -838.82f, -159.5f, 37.86f };
	fLocal_426 = 11.64f;
	iLocal_429 = -1;
	iLocal_430 = -1;
	iLocal_437 = 1;
	iLocal_438 = 1;
	iLocal_439 = 1;
	iLocal_440 = 1;
	iLocal_441 = 1;
	iLocal_448 = 1;
	Local_449 = { -784.1697f, -121.7809f, 35.8232f };
	Local_452 = { -847.7636f, -155.087f, 37.7937f };
	fLocal_455 = 6f;
	iLocal_459 = 1;
	iLocal_460 = -1;
	iLocal_461 = 1;
	Local_462 = { -826.6968f, 178.0209f, 69.18726f };
	Local_465 = { -817.7529f, 185.9504f, 72.3539f };
	fLocal_468 = 7f;
	Local_469 = { -826f, 157.66f, 69.06f };
	fLocal_472 = 273.51f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_470(1);
	}
	MISC::SET_MISSION_FLAG(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TGH", 0);
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
		{
			PED::SET_PED_RESET_FLAG(iLocal_407, 124, 1);
		}
		func_468();
		switch (iLocal_403)
		{
			case 0:
				func_410();
				break;
			
			case 1:
				func_402();
				break;
			
			case 2:
				func_267();
				break;
			
			case 3:
				func_253();
				break;
			
			case 4:
				func_224();
				break;
			
			case 5:
				func_201();
				break;
			
			case 6:
				func_187();
				break;
			
			case 7:
				func_35();
				break;
			
			case 8:
				func_3();
				break;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x37C
{
	if (iLocal_403 == 8)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_407) && PED::IS_PED_INJURED(iLocal_407))
	{
		func_2(2);
	}
	else if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_407, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_407, 0, 2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_407))
			{
				func_2(1);
			}
		}
	}
}

void func_2(int iParam0)//Position - 0x3F1
{
	iLocal_405 = iParam0;
	iLocal_403 = 8;
	iLocal_404 = 0;
}

void func_3()//Position - 0x407
{
	char* sVar0;
	
	switch (iLocal_404)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_406);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_407))
			{
				if (PED::IS_PED_INJURED(iLocal_407))
				{
					iLocal_405 = 2;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_407, PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_405 = 1;
				}
			}
			switch (iLocal_405)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "MEA1_FAIL4";
					break;
				
				case 2:
					sVar0 = "MEA1_FAIL1";
					break;
				
				case 3:
					sVar0 = "MEA1_FAIL2";
					break;
				
				case 4:
					sVar0 = "MEA1_FAIL3";
					break;
				
				case 5:
					sVar0 = "MEA1_FAIL5";
					break;
			}
			if (iLocal_405 == 0)
			{
				GlobalFunc_10616(0);
			}
			else
			{
				GlobalFunc_10835(sVar0);
			}
			iLocal_404 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_4(1, 0);
				func_470(1);
			}
			break;
	}
}

void func_4(bool bParam0, bool bParam1)//Position - 0x4E4
{
	int iVar0;
	
	if (bParam0)
	{
		GlobalFunc_881(&iLocal_407);
	}
	else
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407) && PED::IS_PED_IN_GROUP(iLocal_407))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_407);
		}
		if (bParam1)
		{
			GlobalFunc_2297(&iLocal_407, 1, 0, 1);
		}
		else if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407) && ENTITY::IS_ENTITY_AT_COORD(iLocal_407, Local_389, 50f, 50f, 50f, 0, 1, 0))
		{
			func_11(iLocal_407);
		}
		else
		{
			GlobalFunc_2297(&iLocal_407, 1, 0, 1);
		}
	}
	GlobalFunc_146(&iLocal_406);
	if (bParam0)
	{
		GlobalFunc_7517(&iLocal_409);
	}
	else
	{
		if (GlobalFunc_4947(iLocal_409))
		{
		}
		GlobalFunc_190(&iLocal_409);
	}
	if (bParam0)
	{
		GlobalFunc_7517(&iLocal_427);
	}
	else
	{
		if (GlobalFunc_4947(iLocal_427))
		{
		}
		GlobalFunc_190(&iLocal_427);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		GlobalFunc_200(&uLocal_94, 6);
		iVar0 = 1;
		if (!PED::IS_PED_INJURED(iLocal_415))
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_415, 0) && !GlobalFunc_1535(iLocal_415) == joaat("weapon_pistol"))
			{
				TASK::CLEAR_PED_TASKS(iLocal_415);
				TASK::TASK_WANDER_STANDARD(iLocal_415, 1193033728, 0);
			}
		}
		if (bParam0)
		{
			GlobalFunc_881(&iLocal_415);
		}
		else
		{
			GlobalFunc_2297(&iLocal_415, iVar0, 0, 1);
		}
	}
	if (bParam0)
	{
		GlobalFunc_881(&iLocal_421);
	}
	else
	{
		GlobalFunc_2297(&iLocal_421, 0, 0, 1);
	}
	AUDIO::STOP_AUDIO_SCENES();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 1, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}







int func_11(int iParam0)//Position - 0x7B0
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	iVar0 = GlobalFunc_7535(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_89749))
		{
			return 0;
		}
		Global_85373[iVar0] = 140;
		Global_89749 = iParam0;
		return 1;
	}
	Global_85373[iVar0] = 140;
	Global_85389 = 137;
	Global_89748 = iParam0;
	return 1;
}
























void func_35()//Position - 0x1A53
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		PED::SET_PED_RESET_FLAG(iLocal_407, 60, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_404)
		{
			case 0:
				GlobalFunc_5105();
				GlobalFunc_5744();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_AMANDA_DRIVE_HOME");
				}
				GlobalFunc_146(&iLocal_406);
				iLocal_456 = -1;
				iLocal_458 = -1;
				func_65(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0);
				uLocal_307 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1392.254f, 367.9411f, 75.0046f, -44.2648f, 0f, -119.873f, 48.4f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_307, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && GlobalFunc_540(iVar1))
					{
						iLocal_404 = 1;
					}
					else
					{
						iLocal_404 = 2;
					}
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_407, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_293, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_407, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					iLocal_404 = 2;
				}
				break;
			
			case 1:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HOME", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
				{
					iLocal_404 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HOME2", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
				{
					iLocal_404 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0) && GlobalFunc_4947(iVar0))
				{
					if (!GlobalFunc_6964(iLocal_407, -828834893))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_293, 1f, 20000, 1048576000, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_407, uVar3);
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						}
					}
				}
				else if (GlobalFunc_4568(iLocal_407, Local_293, 1.5f) || GlobalFunc_4569(&iLocal_458, 10000))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					func_39(1, 1, 1, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::DESTROY_CAM(uLocal_307, 0);
					func_36();
				}
				break;
			}
	}
}

void func_36()//Position - 0x1D85
{
	GlobalFunc_5103(0, 0);
	func_470(0);
}



void func_39(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1EAC
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


























void func_65(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2AED
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_9184(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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


























































































































void func_187()//Position - 0x1EEAF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		PED::SET_PED_RESET_FLAG(iLocal_407, 60, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_404)
		{
			case 0:
				GlobalFunc_5105();
				GlobalFunc_5744();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_AMANDA_DRIVE_HOME");
				}
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (GlobalFunc_115(iVar1) && FIRE::IS_ENTITY_ON_FIRE(iVar1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 1)
					{
						ENTITY::SET_ENTITY_HEALTH(iVar1, 1);
					}
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
					}
					if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
					}
					FIRE::STOP_ENTITY_FIRE(iVar1);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iVar1, 1), 2.5f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iVar1, 1), 2.5f);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
					}
					VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(iVar1, 1);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iVar1, 1);
					GlobalFunc_190(&iVar1);
				}
				GlobalFunc_146(&iLocal_406);
				iLocal_456 = -1;
				iLocal_458 = -1;
				func_65(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0);
				uLocal_307 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -840.7f, 185.3f, 78.4f, -14f, 0f, -110.4f, 48.4f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_307, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (GlobalFunc_4947(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iVar0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_407, 179, 1);
					}
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
					iVar2 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar2) && GlobalFunc_540(iVar2))
					{
						iLocal_404 = 1;
					}
					else
					{
						iLocal_404 = 2;
					}
				}
				else
				{
					GlobalFunc_9805(Local_462, Local_465, fLocal_468, Local_469, fLocal_472, GlobalFunc_625(), 1, 1, 1, 0, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_407);
					GlobalFunc_5724(iLocal_407, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 2f, 2f));
					ENTITY::SET_ENTITY_HEADING(iLocal_407, -155.84f);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -43.04f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_407, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_290, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_407, uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					FIRE::STOP_FIRE_IN_RANGE(Local_469, 2.5f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_469, 2.5f);
					iLocal_404 = 2;
				}
				break;
			
			case 1:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HOME", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
				{
					iLocal_404 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HOME2", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
				{
					iLocal_404 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_763(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0) && GlobalFunc_4947(iVar0))
				{
					if (!GlobalFunc_6964(iLocal_407, 242628503))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar4);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_290, 1f, 20000, 1048576000, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uVar4);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_407, uVar4);
							TASK::CLEAR_SEQUENCE_TASK(&uVar4);
						}
					}
				}
				else if ((GlobalFunc_4568(iLocal_407, Local_284, 1.5f) || GlobalFunc_4568(iLocal_407, Local_287, 1.5f)) || GlobalFunc_4569(&iLocal_458, 10000))
				{
					if (GlobalFunc_1720())
					{
						iLocal_458 = -1;
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_404 = 4;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						func_39(1, 1, 1, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::DESTROY_CAM(uLocal_307, 0);
						func_36();
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_4569(&iLocal_458, 300))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					func_39(1, 1, 1, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::DESTROY_CAM(uLocal_307, 0);
					func_36();
				}
				break;
			}
	}
}














void func_201()//Position - 0x1FDD7
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_473, &uLocal_94, "MEA1AUD", &sLocal_474, &cLocal_480);
	switch (iLocal_404)
	{
		case 0:
			GlobalFunc_146(&iLocal_406);
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
			{
				if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
				{
					iLocal_406 = GlobalFunc_4955(iLocal_407, 1, 1, 5);
					if (iLocal_438)
					{
						GlobalFunc_164("MEA1_05", 7500, 1);
						GlobalFunc_2370(&uLocal_473);
						iLocal_438 = 0;
					}
				}
				else
				{
					iLocal_406 = GlobalFunc_5743(iLocal_409, 1, 5);
					if (iLocal_438)
					{
						GlobalFunc_164("MEA1_06", 7500, 1);
						GlobalFunc_2370(&uLocal_473);
						iLocal_438 = 0;
					}
				}
			}
			iLocal_330 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_404 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
			{
				func_211();
				if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) < 5f)
					{
						func_208();
					}
				}
				else if (((GlobalFunc_4947(iLocal_409) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0)) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0)))
				{
					func_208();
				}
				func_206();
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) > 200f)
				{
					func_2(4);
				}
			}
			break;
	}
	func_202();
}

void func_202()//Position - 0x1FF47
{
	int iVar0;
	
	if (MISC::GET_GAME_TIMER() > iLocal_369)
	{
		if ((((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0)) && !GlobalFunc_111()) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) < 10f)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_407, 0);
			if (GlobalFunc_4947(iVar0) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
				{
					GlobalFunc_200(&uLocal_94, 4);
					GlobalFunc_5653(iLocal_407, "GENERIC_FRIGHTENED_HIGH", "AMANDA_NORMAL", 10);
					iLocal_369 = MISC::GET_GAME_TIMER() + 5000;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_409);
				}
			}
			else if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
			{
				GlobalFunc_200(&uLocal_94, 4);
				GlobalFunc_5653(iLocal_407, "GENERIC_FRIGHTENED_HIGH", "AMANDA_NORMAL", 10);
				iLocal_369 = MISC::GET_GAME_TIMER() + 5000;
			}
		}
	}
}




void func_206()//Position - 0x20255
{
	if (((GlobalFunc_115(iLocal_409) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407)) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0)) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) < 10f)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_330)
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if ((GlobalFunc_663("MEA1_03", 0, 0) || GlobalFunc_663("MEA1_05", 0, 0)) || GlobalFunc_663("MEA1_06", 0, 0))
				{
					if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HELP", 7, 1, 0, 0))
					{
						iLocal_330 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
				else if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_HELP", 7, 0, 0, 0))
				{
					iLocal_330 = MISC::GET_GAME_TIMER() + 9000;
				}
			}
		}
	}
}


void func_208()//Position - 0x20347
{
	HUD::CLEAR_THIS_PRINT("MEA1_05");
	iLocal_404 = 0;
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_403 = 4;
	}
	else
	{
		iLocal_403 = 3;
	}
}



void func_211()//Position - 0x203E7
{
	if (iLocal_442)
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
		{
			iLocal_442 = 0;
		}
		else
		{
			func_212();
		}
	}
}

void func_212()//Position - 0x2040E
{
	PED::SET_PED_AS_GROUP_MEMBER(iLocal_407, GlobalFunc_468());
	PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_407, 0);
	PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_407, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_407, 0);
	PED::SET_PED_DIES_IN_WATER(iLocal_407, 0);
	PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_407, 0);
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
}












void func_224()//Position - 0x207DB
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_473, &uLocal_94, "MEA1AUD", &sLocal_474, &cLocal_480);
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_407, 1);
	}
	switch (iLocal_404)
	{
		case 0:
			GlobalFunc_146(&iLocal_406);
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415))
			{
				TASK::CLEAR_PED_TASKS(iLocal_415);
				TASK::TASK_WANDER_STANDARD(iLocal_415, 1193033728, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_ESCAPE_COPS"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_AMANDA_ESCAPE_COPS");
				AUDIO::START_AUDIO_SCENE("M_E_AMANDA_DRIVE_HOME");
			}
			PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
			if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
			{
				iLocal_437 = 0;
				iLocal_438 = 1;
			}
			if (func_248())
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379))
				{
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_407, sLocal_379, 1048576000);
				}
				iLocal_363 = MISC::GET_GAME_TIMER() + 20000;
				GlobalFunc_164("MEA1_04", 7500, 1);
				if (GlobalFunc_5899() == 1)
				{
					iLocal_406 = GlobalFunc_2324(Local_392, 5, 1);
				}
				else
				{
					iLocal_406 = GlobalFunc_2324(Local_389, 5, 1);
				}
				iLocal_404 = 1;
			}
			break;
		
		case 1:
			if (iLocal_437)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_306)
				{
					if (!GlobalFunc_111())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0))
						{
							if (GlobalFunc_10626(&uLocal_94, "MEA1AUD", "MEA1_LOSTCOP", "MEA1_LOSTCOP_5", 7, 0, 0))
							{
								iLocal_437 = 0;
								iLocal_438 = 1;
							}
						}
						else
						{
							iLocal_437 = 0;
							iLocal_438 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_428 = MISC::GET_GAME_TIMER() + 1000;
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				iLocal_404 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
			{
				func_243();
				func_241();
				func_239();
				func_238();
				func_237();
				func_235();
				func_234();
				func_231();
				if (!PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
				{
					if (GlobalFunc_4947(iLocal_409))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0))
						{
							func_248();
						}
					}
				}
				func_230();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_404 = 0;
					iLocal_403 = 3;
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				}
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) > 15f)
				{
					GlobalFunc_4956();
					iLocal_404 = 0;
					iLocal_403 = 5;
				}
			}
			break;
	}
	func_226();
	func_202();
	func_225();
}

void func_225()//Position - 0x20A1A
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_421) > 100f)
	{
		GlobalFunc_2297(&iLocal_421, 0, 0, 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_415) > 100f)
	{
		GlobalFunc_2297(&iLocal_415, 1, 0, 1);
	}
}

void func_226()//Position - 0x20A76
{
	int iVar0;
	
	if (((iLocal_461 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if ((GlobalFunc_4947(iVar0) && !PED::IS_PED_IN_VEHICLE(iLocal_407, iVar0, 1)) && !GlobalFunc_4273(iVar0))
			{
				GlobalFunc_164("MEA1_07", 7500, 1);
				GlobalFunc_2370(&uLocal_473);
				iLocal_461 = 0;
			}
		}
	}
}




void func_230()//Position - 0x20B75
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (GlobalFunc_5899() == 1)
	{
		Var0 = { Local_392 };
	}
	else
	{
		Var0 = { Local_389 };
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 1f, 2f, 1, 1, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 2.75f)
	{
		bVar3 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iVar4))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar4))
				{
					bVar3 = true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			iLocal_404 = 0;
			if (GlobalFunc_5899() == 1)
			{
				iLocal_403 = 7;
			}
			else
			{
				iLocal_403 = 6;
			}
		}
	}
}

void func_231()//Position - 0x20C2A
{
	if ((iLocal_429 < 3 && GlobalFunc_4947(iLocal_427)) && func_233())
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_427, 0) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_427, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_427, 2, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_427, 3, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_427, 0, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_427, 1, 5000))
			{
				if (iLocal_430 == iLocal_429)
				{
					iLocal_429++;
					iLocal_435 = MISC::GET_GAME_TIMER() + 5000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_435 && !GlobalFunc_111())
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_ROOF", sLocal_431[iLocal_429], 7, 0, 0))
					{
						iLocal_430 = iLocal_429;
					}
				}
			}
		}
	}
}


int func_233()//Position - 0x20D68
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		return 1;
	}
	return 0;
}

void func_234()//Position - 0x20D8B
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && MISC::GET_GAME_TIMER() > iLocal_428)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar0 != iLocal_427)
			{
				if (iVar0 == iLocal_409)
				{
					iLocal_427 = iVar0;
				}
				else
				{
					if (GlobalFunc_4947(iLocal_427))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_427);
					}
					iLocal_427 = iVar0;
				}
			}
		}
		iLocal_428 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_235()//Position - 0x20DFA
{
	if ((((iLocal_368 < 3 && !GlobalFunc_111()) && func_233()) && func_236()) && PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_363)
		{
			GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
			if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_NOHOME", sLocal_364[iLocal_368], 7, 0, 0))
			{
				iLocal_363 = MISC::GET_GAME_TIMER() + 20000;
				iLocal_368++;
			}
		}
	}
}

int func_236()//Position - 0x20E7E
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0) && PED::IS_PED_IN_VEHICLE(iLocal_407, iVar0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_237()//Position - 0x20EBA
{
	int iVar0;
	int iVar1;
	
	if ((((iLocal_336 < 3 && MISC::GET_GAME_TIMER() > iLocal_331) && func_233()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_236())
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0) && GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			bLocal_337 = VEHICLE::IS_VEHICLE_SIREN_ON(iVar0);
			if (bLocal_337)
			{
				if (!GlobalFunc_111() && bLocal_338 == 0)
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_SIREN", sLocal_332[iLocal_336], 7, 0, 0))
					{
						iLocal_336++;
						bLocal_338 = bLocal_337;
						iLocal_331 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
			else
			{
				bLocal_338 = bLocal_337;
			}
		}
	}
	else if (bLocal_338 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar1) && GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iVar1)))
		{
			bLocal_338 = VEHICLE::IS_VEHICLE_SIREN_ON(iVar1);
		}
	}
}

void func_238()//Position - 0x20FCB
{
	if (((iLocal_329 < 3 && MISC::GET_GAME_TIMER() > iLocal_323) && func_233()) && func_236())
	{
		if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_324++;
			if (iLocal_324 > 180)
			{
				if (!GlobalFunc_111() && !GlobalFunc_663("MEA1_04", 0, 0))
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (iLocal_329 == 2 && !func_236())
					{
						iLocal_329++;
					}
					else if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_STILL", sLocal_325[iLocal_329], 7, 0, 0))
					{
						iLocal_329++;
						iLocal_324 = 0;
						iLocal_323 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
		}
		else
		{
			iLocal_324 = 0;
		}
	}
}

void func_239()//Position - 0x21093
{
	int iVar0;
	
	if (((iLocal_322 < 4 && MISC::GET_GAME_TIMER() > iLocal_316) && func_233()) && func_236())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iVar0))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
				{
					if (!GlobalFunc_111())
					{
						if (((((iLocal_322 == 0 && GlobalFunc_4947(iLocal_409)) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0)) && GlobalFunc_708(iLocal_407) == 2) || (((iLocal_322 == 1 || iLocal_322 == 2) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0)) && (GlobalFunc_708(iLocal_407) == 2 || GlobalFunc_708(iLocal_407) == 1))) || (iLocal_322 == 3 && PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
							if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_CRASH", sLocal_317[iLocal_322], 7, 0, 0))
							{
								iLocal_322++;
								iLocal_316 = MISC::GET_GAME_TIMER() + 9000;
							}
						}
						else
						{
							iLocal_322++;
						}
					}
				}
			}
		}
	}
}


void func_241()//Position - 0x21251
{
	if ((((iLocal_301 < 4 && !GlobalFunc_111()) && func_233()) && (func_236() || func_242())) && PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
	{
		if (iLocal_302 == iLocal_301)
		{
			iLocal_301++;
			iLocal_306 = MISC::GET_GAME_TIMER() + 2000;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_306)
		{
			GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
			if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", sLocal_296[iLocal_301], 7, 0, 0, 0))
			{
				iLocal_302 = iLocal_301;
			}
		}
	}
}

int func_242()//Position - 0x212EE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0))
	{
		return 0;
	}
	return 1;
}

void func_243()//Position - 0x21315
{
	if (iLocal_444)
	{
		if (GlobalFunc_111())
		{
			if (MISC::GET_GAME_TIMER() > iLocal_447)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_446, "MICHAEL_EVENT_AMANDA_REMOVE_HANDCUFFS_MASTER", iLocal_407, 0, 0, 0);
				iLocal_444 = 0;
			}
		}
	}
}





int func_248()//Position - 0x2144E
{
	var uVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
		{
			if (GlobalFunc_111())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else if (GlobalFunc_7191(iLocal_409))
		{
			return 1;
		}
		else if (!GlobalFunc_111())
		{
			GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0) && PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0))
			{
				if (func_249(&uLocal_94, "MEA1AUD", "MEA1_LOSTCOP", "MEA1_LOSTCOP_1", "MEA1_LOSTCOP", "MEA1_LOSTCOP_2", "MEA1_LOSTCOP", "MEA1_LOSTCOP_3", "MEA1_LOSTCOP", "MEA1_LOSTCOP_4", 7, 1, 0) || GlobalFunc_4569(&iLocal_456, 5000))
				{
					func_212();
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_409, 2f, 2f, 0f), 2000, 2050, 4);
					TASK::TASK_PAUSE(0, 1000);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_409, -2f, 2f, 0f), 2000, 2050, 4);
					TASK::TASK_PAUSE(0, 1000);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_409, 2f, 2f, 0f), 2000, 2050, 4);
					TASK::TASK_PAUSE(0, 1000);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_409, -2f, 2f, 0f), 2000, 2050, 4);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_407, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_447 = MISC::GET_GAME_TIMER() + 9000;
					iLocal_444 = 1;
					return 1;
				}
			}
			else
			{
				func_212();
				return 1;
			}
		}
	}
	return 0;
}

int func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x215C0
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
	GlobalFunc_559(4, &uVar0, &uVar11, sParam2, sParam3, sParam4, sParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam10, 0);
}




void func_253()//Position - 0x21A7B
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_473, &uLocal_94, "MEA1AUD", &sLocal_474, &cLocal_480);
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_407, 1);
	}
	switch (iLocal_404)
	{
		case 0:
			GlobalFunc_146(&iLocal_406);
			GlobalFunc_164("MEA1_03", 7500, 1);
			GlobalFunc_2370(&uLocal_473);
			iLocal_404 = 1;
			iLocal_402 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_456 = -1;
			break;
		
		case 1:
			func_266();
			if (iLocal_445)
			{
				if (AUDIO::REQUEST_MISSION_AUDIO_BANK("MICHAEL_EVENT_AMANDA_1", 0))
				{
					uLocal_446 = AUDIO::GET_SOUND_ID();
					iLocal_445 = 0;
				}
			}
			func_259();
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
			{
				func_256();
				func_239();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_248())
					{
						iLocal_404 = 0;
						iLocal_403 = 4;
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_407) > (15f * 2f))
					{
						GlobalFunc_4956();
						iLocal_404 = 0;
						iLocal_403 = 5;
					}
				}
				else if (((GlobalFunc_4947(iLocal_409) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_407, iLocal_409)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0)) && !GlobalFunc_7191(iLocal_409))
				{
					GlobalFunc_4956();
					iLocal_404 = 0;
					iLocal_403 = 5;
				}
			}
			func_255();
			break;
	}
	func_225();
	func_254();
	func_226();
	func_202();
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -806.21f, 165.83f, 68.98f, 52f, 36f, 16.25f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_407, -806.21f, 165.83f, 68.98f, 52f, 36f, 16.25f, 0, 1, 0))
	{
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
	}
}

void func_254()//Position - 0x21C3E
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407) && !PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
	{
		if (GlobalFunc_4947(iLocal_409))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_409, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_409, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_409, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_409, 1, 40000))
			{
				func_2(5);
			}
		}
		else if (iLocal_403 == 2)
		{
			func_2(5);
		}
	}
}

void func_255()//Position - 0x21CC1
{
	if (((((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_415)) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_415)) && !TASK::IS_PED_GETTING_UP(iLocal_415)) && !PED::IS_PED_PRONE(iLocal_415)) && !PED::IS_PED_RAGDOLL(iLocal_415))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_402)
		{
			if (!GlobalFunc_1535(iLocal_415) == joaat("weapon_pistol"))
			{
				PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_415, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_415, joaat("weapon_pistol"), -1, 0, 1);
			}
			if (!PED::IS_PED_IN_COMBAT(iLocal_415, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_415);
				TASK::TASK_ARREST_PED(iLocal_415, PLAYER::PLAYER_PED_ID());
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
		}
	}
}

void func_256()//Position - 0x21D8C
{
	if (((((iLocal_350 < 9 && !GlobalFunc_111()) && func_233()) && func_236()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && !GlobalFunc_630(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_339)
		{
			GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
			iLocal_361 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iLocal_361 == iLocal_362)
			{
				iLocal_361++;
				if (iLocal_361 >= 4)
				{
					iLocal_361 = 0;
				}
			}
			if (func_257(&uLocal_94, "MEA1AUD", "MEA1_LOSEGEN", sLocal_340[iLocal_350], "MEA1_GOTTHIS", sLocal_351[iLocal_361], 7, 0, 0))
			{
				iLocal_339 = MISC::GET_GAME_TIMER() + 9000;
				iLocal_350++;
				iLocal_362 = iLocal_361;
			}
		}
	}
}

bool func_257(var uParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8)//Position - 0x21E55
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	GlobalFunc_559(2, &uVar0, &uVar11, sParam2, uParam3, sParam4, uParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam6, 0);
}


void func_259()//Position - 0x21EE5
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && !GlobalFunc_6964(iLocal_421, 1805844857))
	{
		if ((func_261(iLocal_421, 1090519040, 1097859072) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && PED::IS_PED_SHOOTING(iLocal_415)))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_272, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_276, 2))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -8f, 1);
			}
			TASK::TASK_SMART_FLEE_PED(iLocal_421, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			func_260(1);
		}
	}
}

void func_260(bool bParam0)//Position - 0x21F8F
{
	if (((((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_415)) && !TASK::IS_PED_GETTING_UP(iLocal_415)) && !PED::IS_PED_PRONE(iLocal_415)) && !PED::IS_PED_RAGDOLL(iLocal_415))
	{
		if (!GlobalFunc_1535(iLocal_415) == joaat("weapon_pistol"))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_415, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_415, joaat("weapon_pistol"), -1, 0, 1);
		}
		if (bParam0)
		{
			if (!PED::IS_PED_IN_COMBAT(iLocal_415, 0))
			{
				TASK::TASK_ARREST_PED(iLocal_415, PLAYER::PLAYER_PED_ID());
			}
		}
		else if (!GlobalFunc_6964(iLocal_415, 1392476864))
		{
			TASK::TASK_ARREST_PED(iLocal_415, PLAYER::PLAYER_PED_ID());
		}
	}
	if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && !PED::IS_PED_FLEEING(iLocal_421)) && !PED::IS_PED_IN_COMBAT(iLocal_421, 0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_272, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_276, 2))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -8f, 1);
		}
		TASK::TASK_SMART_FLEE_PED(iLocal_421, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
	}
	GlobalFunc_4956();
	iLocal_260 = 5;
	iLocal_277 = 5;
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 1, 0);
}

int func_261(int iParam0, float fParam1, float fParam2)//Position - 0x220DA
{
	if (GlobalFunc_115(iParam0))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam1, 0))
		{
			return 1;
		}
		if (GlobalFunc_7636(iParam0, fParam2, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}





void func_266()//Position - 0x22362
{
	if ((iLocal_440 && MISC::GET_GAME_TIMER() > iLocal_436) && func_236())
	{
		GlobalFunc_200(&uLocal_94, 4);
		GlobalFunc_5653(iLocal_407, "MEA1_BFAA", "AMANDA", 6);
		iLocal_440 = 0;
	}
}

void func_267()//Position - 0x223A1
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_421))
	{
		GlobalFunc_10868(&uLocal_473, &uLocal_94, "MEA1AUD", &sLocal_474, &cLocal_480);
	}
	switch (iLocal_404)
	{
		case 0:
			GlobalFunc_146(&iLocal_406);
			if (GlobalFunc_4947(iLocal_409))
			{
				iLocal_406 = GlobalFunc_5743(iLocal_409, 1, 5);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_GO_TO_AMANDA"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_AMANDA_GO_TO_AMANDA");
			}
			AUDIO::START_AUDIO_SCENE("M_E_AMANDA_ENTER_COP_CAR");
			iLocal_440 = 1;
			iLocal_459 = 1;
			iLocal_461 = 1;
			iLocal_315 = 0;
			GlobalFunc_Checkpoint1(1, "Rescue Amanda", 0, 0, 0, 1);
			func_352();
			iLocal_308 = MISC::GET_GAME_TIMER() + 7000;
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (GlobalFunc_4947(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) != iLocal_410)
			{
				func_305(-823f, 181f, 71f, 71f, 1, 0);
			}
			iLocal_404 = 1;
			GlobalFunc_2198(Global_85405[0 /*10*/].f_7, 1, 0);
			func_297();
			break;
		
		case 1:
			func_295();
			func_294();
			func_293();
			func_289();
			if (((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(iLocal_409)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_409, PLAYER::PLAYER_PED_ID(), 1)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
				func_260(1);
			}
			func_297();
			break;
		
		case 2:
			if (GlobalFunc_4947(iLocal_409))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415))
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_COP", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 2000))
					{
						func_288();
						iLocal_436 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_260 = 4;
						iLocal_277 = 5;
					}
				}
				else
				{
					func_288();
				}
			}
			break;
		
		case 3:
			func_266();
			if (!GlobalFunc_111())
			{
				func_288();
			}
			break;
	}
	func_272();
	func_202();
	func_254();
	func_259();
	func_268();
}

void func_268()//Position - 0x22586
{
	struct<6> Var0;
	char* sVar6;
	
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, 100f))
	{
		if (iLocal_443)
		{
			GlobalFunc_619(0);
			iLocal_443 = 0;
		}
	}
	else if (GlobalFunc_111())
	{
		if (!iLocal_443)
		{
			Var0 = { GlobalFunc_560() };
			sVar6 = GlobalFunc_217(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(sVar6, "MEA1_SCENE"))
			{
				GlobalFunc_619(1);
				iLocal_443 = 1;
			}
		}
	}
}




void func_272()//Position - 0x2261D
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((PED::IS_PED_INJURED(iLocal_415) || PED::IS_PED_INJURED(iLocal_421)) || func_274(iLocal_415, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_274(iLocal_421, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || ((GlobalFunc_4947(iVar0) && GlobalFunc_4947(iLocal_409)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_409))) || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 1) < 30f))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_407, iLocal_409, 0))
		{
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_407, GlobalFunc_468()))
			{
				GlobalFunc_4956();
				iLocal_260 = 5;
				iLocal_277 = 5;
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_259))
				{
					fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_259);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_407, -1000f, 1);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_409, -1000f, 1);
					if (fVar1 > 0.75f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_407, -1000f, 0);
						func_273(iLocal_407, iLocal_409, 2);
					}
					else
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_407, -1000f, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_407, 1, 0);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_415, -1000f, 1);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_421))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -1000f, 1);
					}
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_407, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
				if ((GlobalFunc_4947(iVar0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 0))
				{
					if (!GlobalFunc_6964(iLocal_407, -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_407, iVar0, 20000, 0, 3f, 1, 0);
					}
				}
				else if (GlobalFunc_4951(iLocal_407, PLAYER::PLAYER_PED_ID()) > 10f)
				{
					if (!GlobalFunc_6964(iLocal_407, 1227113341))
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_407, PLAYER::PLAYER_PED_ID(), 20000, 7f, 1073741824, 1073741824, 0);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_407);
				}
				func_212();
				GlobalFunc_146(&iLocal_406);
				iLocal_442 = 1;
			}
			func_288();
		}
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0x22848
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (GlobalFunc_115(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
	}
}

int func_274(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2288A
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
		else if (func_275(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_275(int iParam0, float fParam1)//Position - 0x22945
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
				if (func_276(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_276(int iParam0, float fParam1)//Position - 0x229BB
{
	return func_277(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_277(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x229D3
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_283(iParam0, iParam1);
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
		iVar4 = func_280();
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



int func_280()//Position - 0x22C85
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



int func_283(int iParam0, int iParam1)//Position - 0x22D7B
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





void func_288()//Position - 0x22F6C
{
	var uVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		}
		else
		{
			PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 0);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 1, 0);
			AUDIO::DISTANT_COP_CAR_SIRENS(1);
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_407);
			}
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_449, Local_452, fLocal_455, 1);
			iLocal_445 = 1;
			iLocal_440 = 1;
			iLocal_456 = -1;
			if ((((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_415)) && !TASK::IS_PED_GETTING_UP(iLocal_415)) && !PED::IS_PED_PRONE(iLocal_415)) && !PED::IS_PED_RAGDOLL(iLocal_415))
			{
				if (!GlobalFunc_6964(iLocal_415, 1392476864))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_271, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_275, 2))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_415, -8f, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
					TASK::TASK_ARREST_PED(0, PLAYER::PLAYER_PED_ID());
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_415, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && !PED::IS_PED_FLEEING(iLocal_421))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_272, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_276, 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -8f, 1);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_421, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_ENTER_COP_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_AMANDA_ENTER_COP_CAR");
			}
			AUDIO::START_AUDIO_SCENE("M_E_AMANDA_ESCAPE_COPS");
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_MIC_AMANDA_01", 0f);
			iLocal_260 = 5;
			iLocal_277 = 5;
			iLocal_404 = 0;
			iLocal_403 = 3;
		}
	}
}

void func_289()//Position - 0x23169
{
	struct<6> Var0;
	char* sVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	
	if (((GlobalFunc_4947(iLocal_409) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_415)) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_421))
	{
		switch (iLocal_315)
		{
			case 0:
				if (GlobalFunc_111())
				{
					Var0 = { GlobalFunc_560() };
					sVar6 = GlobalFunc_217(&Var0);
					if (MISC::ARE_STRINGS_EQUAL(sVar6, "MEA1_SCENE"))
					{
						Local_309 = { GlobalFunc_2209() };
						if ((((((((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_409, 5f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_415, 5f)) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_1")) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_2")) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_3")) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_4")) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_5")) && !MISC::ARE_STRINGS_EQUAL(&Local_309, "MEA1_SCENE_6")) && func_276(iLocal_415, 1126825984))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_308)
							{
								GlobalFunc_4956();
								iLocal_315 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				fVar7 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_415, 1);
				fVar8 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_409, 1);
				bVar9 = false;
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (fVar7 < fVar8)
				{
					bVar9 = GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_GRIEF", 7, GlobalFunc_4570(), 0, 0);
				}
				else
				{
					bVar9 = GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_MESS", 7, GlobalFunc_4570(), 0, 0);
				}
				if (bVar9)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), 2000, 2048, 4);
					iLocal_315 = 2;
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (!MISC::ARE_STRINGS_EQUAL(&Local_309, "") && !MISC::ARE_STRINGS_EQUAL(&Local_309, "NULL"))
					{
						GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
						if (GlobalFunc_10626(&uLocal_94, "MEA1AUD", "MEA1_SCENE", &Local_309, 7, GlobalFunc_4570(), 0))
						{
							iLocal_308 = MISC::GET_GAME_TIMER() + 7000;
							iLocal_315 = 0;
						}
					}
				}
				break;
			}
	}
}




void func_293()//Position - 0x233F8
{
	bool bVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && iLocal_260 != 5)
	{
		bVar0 = false;
		if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_415)) || (((GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_421)) && !((func_274(iLocal_415, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_274(iLocal_421, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_415) || PED::IS_PED_RAGDOLL(iLocal_421))
			{
				bVar0 = true;
			}
			else if (iLocal_459)
			{
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_GRIEF", 7, GlobalFunc_4570(), 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), 2000, 2048, 4);
					iLocal_459 = 0;
					iLocal_460 = -1;
				}
			}
			else if (!GlobalFunc_111())
			{
				if (GlobalFunc_4569(&iLocal_460, 2000))
				{
					bVar0 = true;
				}
			}
		}
		if (((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_415) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), 1)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_415) && PED::IS_PED_INJURED(iLocal_415))) || GlobalFunc_8324(iLocal_415, 1, 0, 0, 0)) || func_275(iLocal_415, 1126825984)) || func_275(iLocal_421, 1126825984)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_421) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_421, PLAYER::PLAYER_PED_ID(), 1))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_421) && PED::IS_PED_INJURED(iLocal_421))) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || bVar0) || func_261(iLocal_421, 1090519040, 1097859072)) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 0);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 1, 0);
			if (bVar0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				AUDIO::DISTANT_COP_CAR_SIRENS(1);
			}
			if ((((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_415)) && !TASK::IS_PED_GETTING_UP(iLocal_415)) && !PED::IS_PED_PRONE(iLocal_415)) && !PED::IS_PED_RAGDOLL(iLocal_415))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_271, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_275, 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_415, -8f, 1);
				}
				if (!PED::IS_PED_IN_COMBAT(iLocal_415, 0) && !GlobalFunc_6964(iLocal_415, 1392476864))
				{
					GlobalFunc_4956();
					PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_415, 1);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_415, joaat("weapon_pistol"), -1, 0, 1);
					if (bVar0)
					{
						TASK::TASK_ARREST_PED(iLocal_415, PLAYER::PLAYER_PED_ID());
					}
					else
					{
						TASK::TASK_ARREST_PED(iLocal_415, PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_421) && !PED::IS_PED_FLEEING(iLocal_421))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_272, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_276, 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -8f, 1);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_421, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			iLocal_260 = 5;
			iLocal_277 = 5;
		}
	}
}

void func_294()//Position - 0x237AD
{
	if ((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(iLocal_409)) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 0) || GlobalFunc_7191(iLocal_409))
		{
			GlobalFunc_4956();
			GlobalFunc_146(&iLocal_406);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
			iLocal_441 = 0;
			iLocal_456 = -1;
			GlobalFunc_200(&uLocal_94, 4);
			iLocal_404 = 2;
		}
		else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_409, 6.5f))
		{
			if (iLocal_441)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
				iLocal_441 = 0;
			}
		}
		else if (!iLocal_441)
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 1);
			iLocal_441 = 1;
		}
	}
}

void func_295()//Position - 0x23858
{
	if ((((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_421)) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407)) && GlobalFunc_4947(iLocal_409)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_378))
	{
		switch (iLocal_260)
		{
			case 0:
				func_296();
				uLocal_259 = PED::CREATE_SYNCHRONIZED_SCENE(Local_261, Local_264, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_259, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_259, 0);
				iLocal_448 = 1;
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_415, uLocal_259, sLocal_378, sLocal_267, 1000f, -4f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_421, uLocal_259, sLocal_378, sLocal_268, 1000f, -4f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_407, uLocal_259, sLocal_378, sLocal_269, 1000f, -4f, 1, 16, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_409, uLocal_259, sLocal_270, sLocal_378, 1000f, -8f, 1, 1148846080);
				iLocal_457 = -1;
				iLocal_277 = 1;
				iLocal_260 = 2;
				break;
			
			case 2:
				func_296();
				break;
			
			case 1:
				func_296();
				uLocal_259 = PED::CREATE_SYNCHRONIZED_SCENE(Local_261, Local_264, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_259, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_259, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_415, uLocal_259, sLocal_378, sLocal_271, 1000f, -4f, 4, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_421, uLocal_259, sLocal_378, sLocal_272, 1000f, -4f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_407, uLocal_259, sLocal_378, sLocal_273, 1000f, -4f, 4, 16, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_409, uLocal_259, sLocal_274, sLocal_378, 1000f, -8f, 1, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_259, 0.622f);
				iLocal_260 = 3;
				break;
			
			case 3:
				func_296();
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_259))
				{
					uLocal_259 = PED::CREATE_SYNCHRONIZED_SCENE(Local_261, Local_264, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_259, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_415, uLocal_259, sLocal_378, sLocal_275, 1000f, -4f, 1, 16, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_421, uLocal_259, sLocal_378, sLocal_276, 1000f, -4f, 1, 16, 1148846080, 0);
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_409, 2))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_407, iLocal_409, 2);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_409, 3, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_409, 1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_407, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_409, 1))
					{
						GlobalFunc_164("MEA1_02", 7500, 1);
					}
					GlobalFunc_2370(&uLocal_473);
					iLocal_260 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_259) >= 0.9f)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_407, sLocal_378, sLocal_273, 2))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_407, -1000f, 0);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_409, 2))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_407, iLocal_409, 2);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_409, 3, 1);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_409, 1);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_407, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
						}
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_259) >= 0.85f)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_409, sLocal_378, sLocal_274, 2))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_407, 0, 0);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_409, -4f, 1);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_409, 3, 1);
					}
				}
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_272, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_421, sLocal_378, sLocal_276, 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_421, -8f, 1);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_271, 2) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_415, sLocal_378, sLocal_275, 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_415, -8f, 1);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), -1);
				}
				iLocal_260 = 5;
				break;
			}
	}
}

void func_296()//Position - 0x23C4D
{
	switch (iLocal_277)
	{
		case 0:
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, 90f))
					{
						GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
						if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_SCENE", 7, GlobalFunc_4570(), 0, 0) || GlobalFunc_4569(&iLocal_457, 2000))
						{
							iLocal_260 = 1;
							if (MISC::GET_PROFILE_SETTING(203) == 0)
							{
								iLocal_277 = 5;
							}
							else
							{
								iLocal_277 = 4;
							}
						}
					}
				}
				else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, (90f * 2f)))
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_SCENE", 7, 1, 0, 0) || GlobalFunc_4569(&iLocal_457, 2000))
					{
						iLocal_260 = 1;
						iLocal_277 = 3;
					}
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				if ((GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, 90f) && !GlobalFunc_663("MEA1_02", 0, 0)) && !GlobalFunc_663("MEA1_03", 0, 0))
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (GlobalFunc_10626(&uLocal_94, "MEA1AUD", "MEA1_SCENE", &Local_278, 7, 0, 0))
					{
						iLocal_277 = 4;
					}
				}
				else
				{
					GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
					if (GlobalFunc_10626(&uLocal_94, "MEA1AUD", "MEA1_SCENE", &Local_278, 7, 1, 0))
					{
						iLocal_277 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_111())
			{
				if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, 90f))
				{
					Local_278 = { GlobalFunc_514() };
					if (MISC::ARE_STRINGS_EQUAL(&Local_278, "") || MISC::ARE_STRINGS_EQUAL(&Local_278, "NULL"))
					{
						iLocal_277 = 5;
					}
					else
					{
						GlobalFunc_4935();
						iLocal_277 = 2;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_111())
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_261, 91f))
				{
					Local_278 = { GlobalFunc_514() };
					if (MISC::ARE_STRINGS_EQUAL(&Local_278, "") || MISC::ARE_STRINGS_EQUAL(&Local_278, "NULL"))
					{
						iLocal_277 = 5;
					}
					else
					{
						GlobalFunc_4935();
						iLocal_277 = 2;
					}
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_297()//Position - 0x23EAC
{
	int iVar0;
	
	if (func_303() > (iLocal_396 - 1000))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415))
		{
			func_302();
			func_301();
		}
		else if (iLocal_403 == 1)
		{
			func_2(3);
		}
		if (iLocal_403 != 2 && iLocal_399)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_399 = 0;
		}
	}
	else if (iLocal_403 != 2)
	{
		iLocal_398 = (iLocal_396 - func_303());
		iVar0 = func_303();
		HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
		if (iLocal_398 > 11000)
		{
			GlobalFunc_5277(iLocal_398, "MEA1_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else if (iLocal_398 > 6000)
		{
			GlobalFunc_5277(iLocal_398, "MEA1_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			if (!iLocal_401)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_400 = func_303();
				iLocal_401 = 1;
			}
			else if ((iVar0 - iLocal_400) > 1000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_400 = func_303();
			}
		}
		else
		{
			GlobalFunc_5277(iLocal_398, "MEA1_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			if ((iVar0 - iLocal_400) > 500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_400 = func_303();
			}
		}
	}
}




void func_301()//Position - 0x24134
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_4947(iLocal_409))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_415, iLocal_409, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
			if (GlobalFunc_6964(iLocal_415, -258271821))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_397)
				{
					func_2(3);
				}
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_415, iLocal_409, 30f, 786469);
				iLocal_397 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
	}
}

void func_302()//Position - 0x241A6
{
	var uVar0;
	
	if (iLocal_439)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 1, 0);
		if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_415) && GlobalFunc_4947(iLocal_409)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_409, -1))
		{
			GlobalFunc_4956();
			GlobalFunc_173(&uLocal_94, 4, iLocal_407, "AMANDA", 1, 1);
			if (GlobalFunc_10618(&uLocal_94, "MEA1AUD", "MEA1_LEAVE", 7, GlobalFunc_4570(), 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_409, 20000, -1, 1f, 1, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_409, 50f, 786597);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_415, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 0);
				iLocal_260 = 5;
				iLocal_277 = 5;
				iLocal_439 = 0;
			}
		}
	}
}

int func_303()//Position - 0x24271
{
	return MISC::GET_GAME_TIMER();
}


void func_305(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x24386
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (GlobalFunc_104(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				GlobalFunc_10241(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam3, 24, 0);
			}
		}
	}
}















































void func_352()//Position - 0x27647
{
	float fVar0;
	float fVar1;
	
	fVar0 = (SYSTEM::TO_FLOAT(iLocal_396) - SYSTEM::TO_FLOAT(func_303()));
	fVar1 = (SYSTEM::TO_FLOAT(25000) / fVar0);
	fVar1 = (fVar1 * SYSTEM::TO_FLOAT(iLocal_395));
	iLocal_396 = (25000 + func_303());
	iLocal_395 = SYSTEM::ROUND(fVar1);
}


















































void func_402()//Position - 0x2DA41
{
	GlobalFunc_10868(&uLocal_473, &uLocal_94, "MEA1AUD", &sLocal_474, &cLocal_480);
	switch (iLocal_404)
	{
		case 0:
			GlobalFunc_146(&iLocal_406);
			iLocal_406 = GlobalFunc_2324(Local_411, 7, 0);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_406, "MEA1_AMA");
			HUD::SET_BLIP_COLOUR(iLocal_406, 3);
			HUD::SET_BLIP_ROUTE(iLocal_406, 1);
			GlobalFunc_4502(&iLocal_406, -838.47f, -177.11f, 36.92f, 31.44f);
			func_407();
			iLocal_306 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_304 = -1;
			iLocal_305 = -1;
			iLocal_442 = 0;
			iLocal_443 = 0;
			GlobalFunc_164("MEA1_01", 7500, 1);
			iLocal_404 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 1) < 200f)
				{
					iLocal_404 = 2;
				}
			}
			func_297();
			break;
		
		case 2:
			func_404();
			if ((((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_407)) && ENTITY::DOES_ENTITY_EXIST(iLocal_421)) && ENTITY::DOES_ENTITY_EXIST(iLocal_415)) && GlobalFunc_4947(iLocal_409))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 1) < 30f)
				{
					iLocal_456 = -1;
					iLocal_404 = 0;
					iLocal_403 = 2;
				}
				func_272();
			}
			func_202();
			func_297();
			func_293();
			break;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_AMANDA_GO_TO_AMANDA"))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::START_AUDIO_SCENE("M_E_AMANDA_GO_TO_AMANDA");
		}
	}
	func_403();
	func_295();
	func_268();
}

void func_403()//Position - 0x2DBCB
{
	if ((((iLocal_304 < 1 && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_111()) && !GlobalFunc_663("MEA1_01", 0, 0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_386, 1) > (30f * 3f))
	{
		if (iLocal_305 == iLocal_304)
		{
			iLocal_304++;
			iLocal_306 = MISC::GET_GAME_TIMER() + 10000;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_306)
		{
			if (GlobalFunc_10630(&uLocal_94, "MEA1AUD", "MEA1_MICHAEL", sLocal_303, 7, 0, 0))
			{
				iLocal_305 = iLocal_304;
			}
		}
	}
}

void func_404()//Position - 0x2DC67
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_410))
		{
			iLocal_409 = VEHICLE::CREATE_VEHICLE(iLocal_410, Local_411, fLocal_414, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_409, 1, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, 1);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_409, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_409, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_409, 2, true);
			iLocal_441 = 1;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_410);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_449, Local_452, fLocal_455, 0, 0, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_407))
	{
		if (GlobalFunc_4947(iLocal_409) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(17)))
		{
			func_405(&iLocal_407, 17, iLocal_409, 2, 1);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 2, 4, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 3, 5, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 4, 5, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 8, 1, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 1, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_407, 10, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 4, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_407, 1, 0, 0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_407, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_407, 29, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_407, 116, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_407, 104, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_408);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_407, uLocal_408);
			PED::SET_PED_DIES_IN_WATER(iLocal_407, 1);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_407, 1);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_407, 1);
			iLocal_260 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_416))
		{
			iLocal_415 = PED::CREATE_PED(6, iLocal_416, Local_417, fLocal_420, 1, 1);
			GlobalFunc_173(&uLocal_94, 6, iLocal_415, "MEAmandaCop", 1, 1);
			PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_415, 0);
			PED::SET_PED_PROP_INDEX(iLocal_415, 1, 0, 0, false);
			PED::SET_PED_ACCURACY(iLocal_415, 25);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_415, Local_417, 0, 0, 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_415, 110);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_416);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_421))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_422))
		{
			iLocal_421 = PED::CREATE_PED(4, iLocal_422, Local_423, fLocal_426, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_421, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_421, Local_423, 0, 0, 1);
			GlobalFunc_173(&uLocal_94, 5, iLocal_421, "MEAmandaShop", 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_422);
			MISC::CLEAR_AREA_OF_PEDS(Local_417, 50f, 0);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(Local_380, Local_383, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_380, Local_383, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(Local_380, Local_383);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_380, Local_383, 0, 1, 1, 1);
		}
	}
}

int func_405(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2DF22
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
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 0, 0);
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


void func_407()//Position - 0x2DFE8
{
	STREAMING::REQUEST_MODEL(iLocal_410);
	STREAMING::REQUEST_MODEL(iLocal_416);
	GlobalFunc_356(GlobalFunc_4946(17));
	STREAMING::REQUEST_MODEL(iLocal_422);
	STREAMING::REQUEST_ANIM_DICT(sLocal_378);
	STREAMING::REQUEST_ANIM_DICT(sLocal_379);
}



void func_410()//Position - 0x2E065
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	HUD::REQUEST_ADDITIONAL_TEXT("MEA1", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_94, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		}
		GlobalFunc_173(&uLocal_94, 4, 0, "AMANDA", 0, 1);
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			uLocal_408 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		}
		AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", 1);
		sLocal_296[0] = "MEA1_DRIVE1";
		sLocal_296[1] = "MEA1_DRIVE2";
		sLocal_296[2] = "MEA1_DRIVE3";
		sLocal_296[3] = "MEA1_CHAT";
		sLocal_303 = "MEA1_MICHAEL_1";
		sLocal_317[0] = "MEA1_CRASH_1";
		sLocal_317[1] = "MEA1_CRASH_2";
		sLocal_317[2] = "MEA1_CRASH_3";
		sLocal_325[0] = "MEA1_STILL_1";
		sLocal_325[1] = "MEA1_STILL_2";
		sLocal_325[2] = "MEA1_STILL_3";
		sLocal_332[0] = "MEA1_SIREN_1";
		sLocal_332[1] = "MEA1_SIREN_2";
		sLocal_332[2] = "MEA1_SIREN_3";
		sLocal_431[0] = "MEA1_ROOF_1";
		sLocal_431[1] = "MEA1_ROOF_2";
		sLocal_431[2] = "MEA1_ROOF_3";
		sLocal_340[0] = "MEA1_LOSEGEN_1";
		sLocal_340[1] = "MEA1_LOSEGEN_2";
		sLocal_340[2] = "MEA1_LOSEGEN_3";
		sLocal_340[3] = "MEA1_LOSEGEN_4";
		sLocal_340[4] = "MEA1_LOSEGEN_5";
		sLocal_340[5] = "MEA1_LOSEGEN_6";
		sLocal_340[6] = "MEA1_LOSEGEN_7";
		sLocal_340[7] = "MEA1_LOSEGEN_8";
		sLocal_340[8] = "MEA1_LOSEGEN_9";
		sLocal_351[0] = "MEA1_GOTTHIS_1";
		sLocal_351[1] = "MEA1_GOTTHIS_2";
		sLocal_351[2] = "MEA1_GOTTHIS_3";
		sLocal_351[3] = "MEA1_GOTTHIS_4";
		sLocal_364[0] = "MEA1_NOHOME_1";
		sLocal_364[1] = "MEA1_NOHOME_2";
		sLocal_364[2] = "MEA1_NOHOME_3";
		sLocal_371[0] = "MEA1_BEAA_01";
		sLocal_371[1] = "MEA1_BEAA_02";
		sLocal_371[2] = "MEA1_BEAA_03";
		sLocal_371[3] = "MEA1_BEAA_04";
		sLocal_371[4] = "MEA1_BEAA_05";
		func_466();
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar4 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			GlobalFunc_10757(&iVar0, Var1, fVar4, 1, 0, 1, 1, 1, joaat("asterope"), 0, 145);
			MISC::CLEAR_AREA_OF_VEHICLES(Var1, 100f, 0, 0, 0, 0, 0);
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			iVar5 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				iVar5++;
			}
			switch (iVar5)
			{
				case 0:
					func_425(&iVar6, 1, 1, 1, 1, joaat("tailgater"), 0, 145);
					if (GlobalFunc_775(iVar6, -811.3438f, 187.4367f, 71.47861f, 6f))
					{
						ENTITY::SET_ENTITY_COORDS(iVar6, -822.4044f, 182.6078f, 71.37809f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar6, 135.6541f);
					}
					GlobalFunc_190(&iVar6);
					func_424();
					iLocal_404 = 0;
					iLocal_403 = 1;
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, 0);
					GlobalFunc_79(500, 1);
					break;
				
				case 1:
					if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
					{
						func_422(1, 1);
						func_418();
						func_424();
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						SYSTEM::WAIT(500);
						func_417(1, 1, 1);
					}
					break;
				
				case 2:
					GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_79(500, 1);
					func_417(1, 1, 1);
					func_36();
					break;
				
				default:
					break;
			}
		}
		else
		{
			GlobalFunc_79(500, 1);
			func_424();
			iLocal_404 = 0;
			iLocal_403 = 1;
		}
	}
}







void func_417(int iParam0, int iParam1, int iParam2)//Position - 0x2E5CF
{
	func_39(0, 0, iParam2, 1);
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

void func_418()//Position - 0x2E603
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -832.1946f, -178.313f, 36.5807f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 41.9602f);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4947(iVar0))
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, -836.72f, -179.78f, 37.1f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar0, 32.61f);
		}
		else
		{
			GlobalFunc_10757(&iVar1, -836.72f, -179.78f, 37.1f, 32.61f, 0, 1, 1, 1, 1, joaat("tailgater"), 0, 145);
		}
		MISC::CLEAR_AREA_OF_VEHICLES(-836.72f, -179.78f, 37.1f, 100f, 0, 0, 0, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		AUDIO::DISTANT_COP_CAR_SIRENS(0);
		GlobalFunc_4956();
		func_4(1, 0);
		func_419();
		GlobalFunc_Checkpoint1(1, "Rescue Amanda", 0, 0, 0, 1);
		iLocal_404 = 0;
		iLocal_403 = 2;
	}
}

void func_419()//Position - 0x2E702
{
	int iVar0;
	
	iVar0 = -1;
	func_407();
	while (!func_421(&iVar0))
	{
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	func_404();
	while (!func_420(&iVar0))
	{
		func_404();
		SYSTEM::WAIT(0);
	}
}

int func_420(int iParam0)//Position - 0x2E740
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 2000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_407))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_421))
	{
		return 0;
	}
	return 1;
}

int func_421(int iParam0)//Position - 0x2E7A7
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 2000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_410))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_416))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(17)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_422))
	{
		return 0;
	}
	return 1;
}

void func_422(bool bParam0, bool bParam1)//Position - 0x2E811
{
	if (bParam0)
	{
		func_423(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_65(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_423(bool bParam0, int iParam1, int iParam2)//Position - 0x2E844
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
			func_39(iParam1, iParam2, 1, 1);
		}
	}
}

void func_424()//Position - 0x2E8A3
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar1, 1);
		}
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2E8DA
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_3004() && GlobalFunc_9009(iParam1, iParam2, iParam3))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		GlobalFunc_10757(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
	else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Var0, &fVar3, 1, 1077936128, 0))
	{
		GlobalFunc_10757(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
}









































void func_466()//Position - 0x331A5
{
	var uVar0;
	
	uVar0 = GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), Local_386, 1);
	iLocal_395 = SYSTEM::ROUND(uVar0) * 180;
	if (iLocal_395 < 30000)
	{
		iLocal_395 = 30000;
	}
	iLocal_396 = (func_303() + iLocal_395);
}


void func_468()//Position - 0x3321B
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_407))
	{
		if (iLocal_448)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 0))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 8, 0, 0, 0);
				iLocal_448 = 0;
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_407, 1))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_407, 8, 1, 0, 0);
			iLocal_448 = 1;
		}
	}
}


void func_470(bool bParam0)//Position - 0x3328D
{
	func_4(0, bParam0);
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_449, Local_452, fLocal_455, 1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_5105();
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", 0);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



