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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_42[2] = { 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95[2] = { 0, 0 };
	int iLocal_98[2] = { 0, 0 };
	int iLocal_101[2] = { 0, 0 };
	int iLocal_104[2] = { 0, 0 };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124[2];
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_134 = 0f;
	char* sLocal_135 = NULL;
	var uLocal_136 = 16;
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
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_329[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_337 = 0;
	int iLocal_338[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_346[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_354[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_362[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_370[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_378[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403[2] = { 0, 0 };
	int iLocal_406[2] = { 0, 0 };
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432[2] = { 0, 0 };
	int iLocal_435[2] = { 0, 0 };
	int iLocal_438[2] = { 0, 0 };
	int iLocal_441[2] = { 0, 0 };
	int iLocal_444[2] = { 0, 0 };
	int iLocal_447[2] = { 0, 0 };
	int iLocal_450[2] = { 0, 0 };
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458[2] = { 0, 0 };
	int iLocal_461[2] = { 0, 0 };
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483[2] = { 0, 0 };
	int iLocal_486 = 0;
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
	Local_115 = { 27.7189f, -608.7927f, 30.6293f };
	Local_131 = { 903.1f, -1548.8f, 29.8f };
	fLocal_134 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_187();
		func_186();
	}
	if (func_185(0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_301);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_302);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_302, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, iLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, iLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_302, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_301, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_301);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_FINPRB", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
		}
		func_183();
		if (iLocal_316 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_182(27, 1);
				iLocal_316 = 1;
			}
		}
		if (iLocal_395 == 1)
		{
			func_178();
		}
		func_175();
		func_168();
		func_160();
		func_155();
		func_152();
		switch (iLocal_27)
		{
			case 0:
				func_151();
				break;
			
			case 1:
				func_148();
				break;
			
			case 2:
				func_124();
				break;
			
			case 3:
				func_122();
				break;
			
			case 4:
				func_99();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1E9
{
	switch (iLocal_61)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 4:
					sLocal_135 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_135 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_135 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_135 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_135 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_135 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_135 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_135 = "FPB_FAIL11";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_135);
			}
			iLocal_61 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_186();
			}
			break;
	}
}

int func_2()//Position - 0x2CA
{
	if (Global_89962 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x2DF
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)//Position - 0x30C
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)//Position - 0x31F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_6(int iParam0)//Position - 0x35E
{
	int iVar0;
	
	if (Global_SAVE_DATA.isGameflowActive || func_185(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 5);
		Global_89998 = iParam0;
	}
}

int func_7(int iParam0)//Position - 0x3A3
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_81119[iParam0 /*5*/];
	iVar1 = Global_68514.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_8(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iVar1);
	if (Global_84542 == Global_89999)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_84542 = Global_89999;
	if (iParam0 == -1)
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_81119[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_81119[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)//Position - 0x4BA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_10(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0], &Var2, &fVar5))
			{
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0] = 318;
				func_9(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)//Position - 0x683
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)//Position - 0x691
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)//Position - 0x1000
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_12()//Position - 0x103E
{
	Global_89997 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68477))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		MISC::SET_BIT(&(Global_89962.f_20), 25);
	}
}

int func_13()//Position - 0x1125
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()//Position - 0x115A
{
	func_15();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_15()//Position - 0x1173
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_16(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_17(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_16(int iParam0)//Position - 0x1270
{
	return Global_34913 == iParam0;
}

bool func_17(int iParam0)//Position - 0x127E
{
	return iParam0 < 3;
}

int func_18(int iParam0)//Position - 0x128A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)//Position - 0x12C7
{
	if (func_17(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()//Position - 0x12F1
{
	func_152();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_317 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		if (func_33(iLocal_45, 0))
		{
			if (!func_32(iLocal_45))
			{
				while (!func_31(iLocal_45, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_47, 0))
		{
			if (!func_32(iLocal_47))
			{
				while (!func_31(iLocal_47, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_46, 0))
		{
			if (!func_32(iLocal_46))
			{
				while (!func_31(iLocal_46, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			func_27(iLocal_32, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_47);
							PED::REMOVE_PED_FROM_GROUP(iLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_47, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_46);
							PED::REMOVE_PED_FROM_GROUP(iLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_46, iLocal_32, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_45);
							PED::REMOVE_PED_FROM_GROUP(iLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_45, iLocal_32, 0);
						}
					}
					if (func_33(iLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_47);
							PED::REMOVE_PED_FROM_GROUP(iLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::TASK_LEAVE_VEHICLE(iLocal_47, iLocal_32, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (iLocal_319 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_47, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
							{
								if (func_32(iLocal_45))
								{
									if (func_24(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_46, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_46, iLocal_32, 0))
							{
								if (func_32(iLocal_46))
								{
									if (func_24(iLocal_46))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_45, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_45, iLocal_32, 0))
							{
								if (func_32(iLocal_45))
								{
									if (func_24(iLocal_45))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_317 = 1;
						}
						if (func_33(iLocal_47, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_47, iLocal_32, 0))
							{
								if (func_32(iLocal_47))
								{
									if (func_24(iLocal_47))
									{
										iLocal_319 = 1;
									}
								}
								else
								{
									iLocal_319 = 1;
								}
							}
						}
						else
						{
							iLocal_318 = 1;
						}
					}
					if (iLocal_317 == 1 && iLocal_318 == 1)
					{
						iLocal_319 = 1;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_32, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, 1);
			}
		}
		iLocal_61 = 4;
	}
	if (iLocal_61 == 4)
	{
		func_21();
	}
}

void func_21()//Position - 0x177E
{
	func_22(0, 0);
	func_186();
}

void func_22(bool bParam0, int iParam1)//Position - 0x1790
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54752)
	{
		Global_54752 = iParam1;
	}
	if (bParam0)
	{
		if ((func_185(0) && Global_68491.f_1 == 1) && func_23(Global_68491))
		{
		}
		else
		{
			Global_54750 = 1;
		}
	}
	if (Global_SAVE_DATA.isGameflowActive || func_185(0))
	{
		iVar0 = func_13();
		iVar1 = Global_81119[iVar0 /*5*/];
		uVar2 = Global_68514.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_SAVE_DATA.isGameflowActive)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_68493, 1);
		Global_68509 = uVar2;
		Global_68510 = MISC::GET_GAME_TIMER();
	}
}

int func_23(int iParam0)//Position - 0x1866
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x18A4
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_86221, iVar0);
		return 1;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x18FC
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_87845[func_26(iParam0)];
}

int func_26(int iParam0)//Position - 0x192D
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x1968
{
	if (func_29() && func_30())
	{
		while (Global_89957 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_28(0);
	}
}

void func_28(int iParam0)//Position - 0x1A2C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_89962.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_89962.f_20), 13);
	}
}

int func_29()//Position - 0x1A55
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()//Position - 0x1A79
{
	return MISC::IS_BIT_SET(Global_89962.f_20, 13);
}

int func_31(int iParam0, int iParam1)//Position - 0x1A8D
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_86220, iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0);
			MISC::SET_BIT(&Global_86221, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1B13
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (MISC::IS_BIT_SET(Global_86221, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x1B5C
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (MISC::IS_BIT_SET(Global_86220, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()//Position - 0x1BB8
{
	iLocal_395 = 0;
	iLocal_455 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_97();
	HUD::CLEAR_PRINTS();
	func_96();
	func_95();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_35()//Position - 0x1C0D
{
	switch (iLocal_27)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, -1);
					}
				}
			}
			break;
	}
}

void func_36()//Position - 0x1CEA
{
	switch (iLocal_27)
	{
		case 3:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_85();
				while (!func_84())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_33 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_417 = 0;
			iLocal_418 = 0;
			iLocal_419 = 0;
			func_91();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 161.1163f);
				}
			}
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_417 = 1;
			iLocal_418 = 1;
			iLocal_419 = 1;
			func_91();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_32, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_32, 70.7778f);
				}
			}
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
			{
				iLocal_48 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				PED::SET_PED_CONFIG_FLAG(iLocal_48, 324, 1);
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)//Position - 0x1E93
{
	return func_38(&(Global_91351.f_2167), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1EAD
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_83(uParam0))
	{
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_81(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_80(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_75(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_74(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_74(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_73(iVar0, uParam0->f_11);
				}
				else if ((!func_70(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_69(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_62(iVar8);
					}
				}
				if (((Global_89962 != 13 && Global_89962 != 10) && Global_89962 != 11) && Global_89962 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_89962.f_3)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							func_59(24, 0);
							func_62(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)//Position - 0x2157
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_44(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	func_40(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}

void func_40(int iParam0, var uParam1)//Position - 0x2358
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_41(int iParam0)//Position - 0x2602
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x26B2
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)//Position - 0x278C
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_44(int iParam0)//Position - 0x283C
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) != 145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_45(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_54(iParam0))
		{
		}
		if (func_54(iParam0))
		{
		}
		if (func_57(iParam0, 0, 0))
		{
		}
		if (func_57(iParam0, 1, 0))
		{
		}
		if (func_57(iParam0, 2, 0))
		{
		}
		if (func_56(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_45(int iParam0)//Position - 0x2919
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_46(int iParam0)//Position - 0x2AC9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_51())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_50() && !func_49()) && !func_48()) && !func_47()) && !func_51())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_48())
		{
			return 0;
		}
	}
	return 1;
}

int func_47()//Position - 0x2C98
{
	return 0;
}

int func_48()//Position - 0x2CA1
{
	return 1;
}

int func_49()//Position - 0x2CAA
{
	return 1;
}

int func_50()//Position - 0x2CB3
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x2CCC
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x2D4F
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x2D94
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x2DCF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x2E4B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x2F33
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x2F96
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_58(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3007
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_59(int iParam0, bool bParam1)//Position - 0x30DF
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_61(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x313C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

bool func_61(int iParam0, int iParam1)//Position - 0x3177
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0], iParam1);
}

void func_62(int iParam0)//Position - 0x319A
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_67138.f_139[iParam0]));
			}
		}
		Global_67138[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_61(iParam0, 0)) && Global_68047.f_42 == 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] != 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] > 3) && (!func_64(0, Global_67138.f_555[0 /*21*/].f_12) || !func_64(1, Global_67138.f_555[0 /*21*/].f_12)))
			{
				func_63(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/], &Global_68047);
				Global_68101 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799;
			}
			func_59(iParam0, 0);
		}
	}
}

void func_63(struct<54> Param0, var uParam54)//Position - 0x330F
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

int func_64(int iParam0, int iParam1)//Position - 0x33DA
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_65(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_46(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_65(var uParam0)//Position - 0x344B
{
	return *uParam0;
}

int func_66(var uParam0, int iParam1)//Position - 0x3456
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_67(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_67(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_67(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_67(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_51())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_82(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_82(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_82(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)//Position - 0x4B4C
{
	struct<58> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_68(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_68(int iParam0, var uParam1, int iParam2)//Position - 0x4B8E
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_69(int iParam0)//Position - 0x4E06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_67138.f_484[iVar0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_67138.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_67138.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_67138.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_70(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x4EC8
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_72(iParam0, Global_67138.f_139[38], 0))
			{
				func_62(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_72(iParam0, Global_67138.f_139[43], 1))
			{
				func_62(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_72(iParam0, uVar1[iVar6], 1) && func_71(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam4 || func_82(Param1, 0f, 0f, 0f)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_67138.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_67138.f_484[14]))
				{
					func_62(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_67138.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_67138.f_484[20]))
				{
					func_62(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x50CE
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)//Position - 0x511A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1)//Position - 0x517A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			Global_87698[iVar0] = iParam0;
			Global_87708[iVar0] = iParam1;
			Global_87718[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_87746[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87746[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x51FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (iParam0 == 145 || Global_87708[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == func_67(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_87698[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_87698[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_87698[iVar0]));
						Global_87708[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x529D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || func_79(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_78())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_53, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_53, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_53, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_53, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_53, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_53, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, func_41(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_53, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_76(int iParam0, var uParam1, var uParam2)//Position - 0x5688
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_77(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x57BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_78()//Position - 0x5896
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_79(int iParam0)//Position - 0x58A7
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_80(struct<3> Param0, float fParam3, int iParam4)//Position - 0x58F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_66(&(Global_67138.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_67138.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_62(iVar0);
			}
		}
		iVar0++;
	}
}

int func_81(var uParam0)//Position - 0x5942
{
	if (func_83(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_42))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_82(struct<3> Param0, struct<3> Param3)//Position - 0x5977
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_83(var uParam0)//Position - 0x59A0
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_84()//Position - 0x59C9
{
	return func_81(&(Global_91351.f_2167));
}

void func_85()//Position - 0x59DC
{
	func_86(&(Global_91351.f_2167));
}

void func_86(var uParam0)//Position - 0x59EF
{
	if (func_83(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_42);
	}
}

int func_87(struct<3> Param0, int iParam3)//Position - 0x5A0D
{
	return func_88(Global_91351.f_2167.f_12.f_42, Param0, iParam3);
}

int func_88(int iParam0, struct<3> Param1, int iParam4)//Position - 0x5A2A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_89() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	if ((Var3.x - Var0.x) > Param1.x)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_89()//Position - 0x5A94
{
	return 2.55f, 5.59f, 2.55f;
}

int func_90()//Position - 0x5AAB
{
	return func_83(&(Global_91351.f_2167));
}

void func_91()//Position - 0x5ABE
{
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("bison2"));
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
			iLocal_31 = Global_86864[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
		else
		{
			iLocal_31 = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_31);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
			iLocal_32 = Global_86864[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
		else
		{
			iLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_32, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_32, 7);
			func_94(iLocal_32, -1);
			func_93(iLocal_32, -1);
		}
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_32, iLocal_31, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			iLocal_34[0] = Global_86864.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_301);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
		}
		else
		{
			iLocal_34[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
			func_92(iLocal_34[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
			iLocal_34[1] = Global_86864.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_301);
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
		else
		{
			iLocal_34[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_92(iLocal_34[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
			iLocal_34[2] = Global_86864.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_301);
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
		else
		{
			iLocal_34[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[2], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_92(iLocal_34[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
			iLocal_34[3] = Global_86864.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_301);
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
		else
		{
			iLocal_34[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[3], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_92(iLocal_34[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[4], 1, 1);
			iLocal_34[4] = Global_86864.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_301);
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
		else
		{
			iLocal_34[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[4], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_92(iLocal_34[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[5], 1, 1);
			iLocal_34[5] = Global_86864.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_301);
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
		else
		{
			iLocal_34[5] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[5], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_92(iLocal_34[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[8], 1, 1);
			iLocal_34[6] = Global_86864.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_301);
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
		else
		{
			iLocal_34[6] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[6], iLocal_301);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_34[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_92(iLocal_34[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[6], 1, 1);
			iLocal_42[0] = Global_86864.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[0], iLocal_302);
			func_92(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_42[0] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[0], iLocal_302);
			func_92(iLocal_42[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[0], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[7], 1, 1);
			iLocal_42[1] = Global_86864.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[1], iLocal_302);
			func_92(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_42[1] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_42[1], iLocal_302);
			func_92(iLocal_42[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_42[1], joaat("weapon_pistol"), 100, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_42[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}

void func_92(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)//Position - 0x65AA
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, iParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, iParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, iParam5);
	}
}

void func_93(int iParam0, int iParam1)//Position - 0x65E6
{
	Global_54761 = iParam0;
	Global_54762 = iParam1;
}

void func_94(int iParam0, int iParam1)//Position - 0x65F8
{
	int iVar0;
	
	Global_54763 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (iParam1 == -1 || Global_66846[iVar0 /*9*/] == iParam1)
		{
			if (Global_66846[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66846[iVar0 /*9*/].f_6 = iParam0;
				Global_66846[iVar0 /*9*/].f_7 = 1;
				Global_66846[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_95()//Position - 0x6663
{
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_62]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_34[iLocal_62], 1))
		{
			PED::DELETE_PED(&(iLocal_34[iLocal_62]));
		}
		iLocal_62++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_42[0], 1))
	{
		PED::DELETE_PED(&(iLocal_42[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_42[1], 1))
	{
		PED::DELETE_PED(&(iLocal_42[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, 1))
	{
		PED::DELETE_PED(&iLocal_45);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, 1))
	{
		PED::DELETE_PED(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_47, 1))
	{
		PED::DELETE_PED(&iLocal_47);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_48, 1))
	{
		PED::DELETE_PED(&iLocal_48);
	}
	if (!func_30())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_31, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 0);
		VEHICLE::DELETE_VEHICLE(&(Global_86864[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_32);
	}
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_96()//Position - 0x683B
{
	if (HUD::DOES_BLIP_EXIST(uLocal_57))
	{
		HUD::REMOVE_BLIP(&uLocal_57);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_58))
	{
		HUD::REMOVE_BLIP(&uLocal_58);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_59))
	{
		HUD::REMOVE_BLIP(&uLocal_59);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_60))
	{
		HUD::REMOVE_BLIP(&uLocal_60);
	}
}

void func_97()//Position - 0x687F
{
	Global_14558 = 0;
	func_98();
}

void func_98()//Position - 0x688F
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_99()//Position - 0x68E6
{
	func_116();
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_304 = 0;
		iLocal_313 = 0;
		iLocal_468 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		func_115(&uLocal_136, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_115(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_115(&uLocal_136, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_115(&uLocal_136, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_61 = 2;
	}
	if (iLocal_61 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_105(&uLocal_136, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_61 = 3;
				}
			}
		}
	}
	if (iLocal_61 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			if (!func_104())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					uLocal_58 = func_102(Local_115, 1);
				}
			}
		}
		if (func_104())
		{
			iLocal_61 = 4;
		}
	}
	if (iLocal_61 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_115, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_101(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
								if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_100(0, -1);
								iLocal_61 = 0;
								iLocal_27 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_100(bool bParam0, int iParam1)//Position - 0x6B23
{
	int iVar0;
	
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	if (bParam0)
	{
		Global_54759 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66846[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] > 0)
			{
				if (Global_66846[iVar0 /*9*/] == iParam1)
				{
					Global_66846[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_101(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x6BBD
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_28) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

var func_102(struct<3> Param0, int iParam3)//Position - 0x6D3F
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)//Position - 0x6D6B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_104()//Position - 0x6D82
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_105(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x6D99
{
	func_114(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_106(sParam3, iParam4, bParam8);
}

int func_106(char* sParam0, int iParam1, bool bParam2)//Position - 0x6DF8
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
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
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
					func_98();
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
		if (func_113(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_112();
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
				func_111();
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
				if (func_110())
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
			if (func_109())
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
			func_108();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_107();
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
		func_98();
	}
	return 0;
}

void func_107()//Position - 0x70C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_108()//Position - 0x70F5
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_109()//Position - 0x718A
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_110()//Position - 0x71B1
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_111()//Position - 0x724A
{
	if (func_16(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_14();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_112()//Position - 0x72EB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_113(int iParam0, int iParam1)//Position - 0x7342
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x737D
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x73D3
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_116()//Position - 0x746E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
			{
				if (func_121("HELP_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					if (iLocal_394 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					HUD::REMOVE_BLIP(&uLocal_60);
				}
				if (iLocal_27 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_468 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_468 = 1;
						}
						if (iLocal_313 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_109 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_313 = 0;
						}
						if (iLocal_61 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_58))
							{
								uLocal_58 = func_102(Local_115, 1);
							}
							if (iLocal_304 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									func_120("GOD_2", 7500, 1);
									iLocal_304 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_58))
						{
							HUD::REMOVE_BLIP(&uLocal_58);
						}
						if (iLocal_313 == 0)
						{
							HUD::CLEAR_PRINTS();
							func_120("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_109 = MISC::GET_GAME_TIMER();
							iLocal_313 = 1;
							iLocal_468 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					HUD::REMOVE_BLIP(&uLocal_58);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_60))
					{
						uLocal_60 = func_118(iLocal_31, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_60, 1);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_PRINTS();
						}
						if (iLocal_394 == 0)
						{
							func_120("GOD_6", 7500, -1);
							iLocal_108 = MISC::GET_GAME_TIMER();
							iLocal_394 = 1;
						}
						if (!func_121("HELP_1"))
						{
							func_117("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_60))
			{
				HUD::REMOVE_BLIP(&uLocal_60);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = func_118(iLocal_32, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
				}
			}
			if (iLocal_314 == 0)
			{
				HUD::CLEAR_PRINTS();
				func_120("GOD_5", 7500, -1);
				iLocal_314 = 1;
			}
		}
	}
}

void func_117(char* sParam0)//Position - 0x7683
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_118(int iParam0, bool bParam1, bool bParam2)//Position - 0x7699
{
	return func_119(iParam0, !bParam1, bParam2);
}

int func_119(int iParam0, bool bParam1, bool bParam2)//Position - 0x76AC
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_103(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_120(char* sParam0, int iParam1, int iParam2)//Position - 0x7750
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_121(char* sParam0)//Position - 0x7769
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_122()//Position - 0x777C
{
	if (iLocal_61 > 1)
	{
		func_116();
	}
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		iLocal_396 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403[0] = 0;
		iLocal_403[1] = 0;
		iLocal_406[0] = 0;
		iLocal_406[1] = 0;
		iLocal_409 = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_422 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432[0] = 0;
		iLocal_432[1] = 0;
		iLocal_435[0] = 0;
		iLocal_435[1] = 0;
		iLocal_438[0] = 0;
		iLocal_438[1] = 0;
		iLocal_441[0] = 0;
		iLocal_441[1] = 0;
		iLocal_444[0] = 0;
		iLocal_444[1] = 0;
		iLocal_447[0] = 0;
		iLocal_447[1] = 0;
		iLocal_450[0] = 0;
		iLocal_450[1] = 0;
		iLocal_454 = 0;
		iLocal_457 = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_481 = 0;
		iLocal_314 = 0;
		iLocal_315 = 0;
		iLocal_320 = 0;
		iLocal_386 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_416 = 0;
		iLocal_464 = 0;
		iLocal_482 = 0;
		iLocal_486 = 0;
		iLocal_453 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
		iLocal_62 = 0;
		while (iLocal_62 <= 6)
		{
			iLocal_305[iLocal_62] = 0;
			iLocal_354[iLocal_62] = 0;
			iLocal_370[iLocal_62] = 0;
			iLocal_378[iLocal_62] = 0;
			iLocal_362[iLocal_62] = 0;
			iLocal_62++;
		}
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				uLocal_57 = func_118(iLocal_32, 0, 0);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, true);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_30())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
			{
				func_27(iLocal_33, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_33);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		if (iLocal_464 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				func_120("GOD_1", 7500, 1);
				iLocal_464 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
				if (HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					HUD::REMOVE_BLIP(&uLocal_57);
				}
				func_123(656, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_61 = 2;
			}
		}
	}
	if (iLocal_61 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
				{
					if (func_121("HELP_1"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_60))
					{
						HUD::REMOVE_BLIP(&uLocal_60);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_118, Local_131, 1) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_315 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_109 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_315 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
								func_120("GOD_7", 7500, -1);
								iLocal_416 = 1;
							}
						}
						else if (iLocal_315 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_109 = MISC::GET_GAME_TIMER();
							func_120("GOD_4", 7500, -1);
							iLocal_315 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_61 = 0;
						iLocal_27 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::REMOVE_BLIP(&uLocal_57);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_60))
						{
							uLocal_60 = func_118(iLocal_31, 0, 0);
							HUD::SET_BLIP_AS_FRIENDLY(uLocal_60, true);
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_394 == 0)
							{
								func_120("GOD_6", 7500, -1);
								iLocal_394 = 1;
							}
							if (!func_121("HELP_1"))
							{
								func_117("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					HUD::REMOVE_BLIP(&uLocal_60);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						uLocal_57 = func_118(iLocal_32, 0, 0);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, true);
					}
				}
				if (iLocal_314 == 0)
				{
					HUD::CLEAR_PRINTS();
					func_120("GOD_5", 7500, -1);
					iLocal_314 = 1;
				}
			}
		}
	}
}

void func_123(int iParam0, bool bParam1)//Position - 0x7C18
{
	int iVar0;
	
	Global_54760 = iParam0;
	if (!Global_54758)
	{
		Global_54758 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] == iParam0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_124()//Position - 0x7C62
{
	if (iLocal_61 == 0)
	{
		if (iLocal_303 == 1)
		{
			func_34();
			iLocal_303 = 0;
		}
		func_147();
		func_91();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[3], 0))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_86864[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 1);
					func_126(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_86864[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_86864[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 1);
					func_126(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_125(79);
		iLocal_395 = 1;
		iLocal_61 = 1;
	}
	if (iLocal_61 == 1)
	{
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
}

void func_125(int iParam0)//Position - 0x7D8F
{
	if (Global_87289 != -1)
	{
		if (iParam0 == Global_87289)
		{
			Global_87293 = 1;
			return;
		}
	}
}

void func_126(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x7DB3
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_91351.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91351.f_4, 0))
		{
			if (func_146(24) != Global_91351.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_143(ENTITY::GET_ENTITY_COORDS(Global_91351.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_127(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_127(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)//Position - 0x7E2E
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_142(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_40(iParam0, &Var0);
		if (func_82(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			uParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_140(iParam5, Var0, Param1, uParam4, func_56(iParam0));
		func_128(iParam5, iParam0, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x7F59
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_66(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = func_129();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_146(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

var func_129()//Position - 0x8079
{
	var uVar0;
	
	func_139(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_138(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_137(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_132(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_131(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_130(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_130(var uParam0, int iParam1)//Position - 0x80BF
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_131(var uParam0, int iParam1)//Position - 0x8145
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_132(var uParam0, int iParam1)//Position - 0x8178
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_133(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_133(int iParam0, int iParam1)//Position - 0x81C9
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_134(var uParam0)//Position - 0x826B
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_135(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)//Position - 0x8290
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(var uParam0)//Position - 0x82A7
{
	return uParam0 & 15;
}

void func_137(var uParam0, int iParam1)//Position - 0x82B4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_138(var uParam0, int iParam1)//Position - 0x82EE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_139(var uParam0, int iParam1)//Position - 0x8329
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_140(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)//Position - 0x8365
{
	if (func_66(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_141(iParam0);
			func_63(Param1, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_141(int iParam0)//Position - 0x8467
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_66(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

void func_142(int iParam0)//Position - 0x84E1
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_141(iParam0);
	func_59(iParam0, 0);
}

int func_143(struct<3> Param0, int iParam3, var uParam4, var uParam5)//Position - 0x8508
{
	int iVar0;
	
	iVar0 = func_144(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_144(struct<3> Param0, int iParam3, int iParam4)//Position - 0x861E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_85405[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85405[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_145(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_85405[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_145(int iParam0)//Position - 0x86AD
{
	return MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0], 0);
}

int func_146(int iParam0)//Position - 0x86C5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

void func_147()//Position - 0x86E1
{
	Global_84545 = 1;
}

void func_148()//Position - 0x86EE
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	uLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_55 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_50 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_51 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_84544 == 1)
		{
			func_150(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_482 = 1;
			iLocal_303 = 1;
			iLocal_61 = 0;
			iLocal_27 = 5;
		}
		else if (func_149() == 0)
		{
			if (func_90() && func_87(7f, 7f, 7f, 1))
			{
				func_150(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_150(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_303 = 1;
			iLocal_482 = 1;
			iLocal_61 = 0;
			iLocal_27 = 3;
		}
	}
	else if (func_185(0))
	{
		iLocal_303 = 1;
		iLocal_482 = 1;
		iLocal_61 = 0;
		iLocal_27 = 3;
	}
	else
	{
		iLocal_61 = 0;
		iLocal_27 = 2;
	}
}

int func_149()//Position - 0x88B5
{
	if (!Global_89962 == 10 && !Global_89962 == 9)
	{
		return 0;
	}
	return Global_89962.f_2;
}

void func_150(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x88DF
{
	if (func_29())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_89958 = { Param0 };
		Global_89961 = fParam3;
		Global_89957 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_89962.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_89962.f_20), 24);
		}
		func_28(1);
	}
}

void func_151()//Position - 0x8974
{
	if (!func_29())
	{
		iLocal_27 = 1;
	}
	else
	{
		iLocal_27 = 1;
	}
}

void func_152()//Position - 0x898D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_48 = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_48, 324, 1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (!PED::IS_PED_INJURED(iLocal_48))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_455 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_48))
					{
						TASK::CLEAR_PED_TASKS(iLocal_48);
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_48);
					}
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_48, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_48, 1);
					iLocal_112 = MISC::GET_GAME_TIMER();
					iLocal_455 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_112 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_48))
					{
						iLocal_455 = 0;
					}
				}
			}
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_48, 1) < 20f)
			{
				if (iLocal_420 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_420 = 1;
				}
			}
			else if (iLocal_420 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_420 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_456 == 0)
		{
			iLocal_113 = 498972213;
			iLocal_114 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_113, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_114, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_456 = 1;
		}
		if (iLocal_456 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (Local_118.x > 35f)
				{
					if (fLocal_134 < 1f)
					{
						fLocal_134 = (fLocal_134 + 0.02f);
					}
					else
					{
						fLocal_134 = 1f;
					}
					if (fLocal_134 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
				if (Local_118.x < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 0;
					}
				}
			}
			else if (iLocal_421 == 0)
			{
				if (Local_118.x < 35f)
				{
					if (fLocal_134 > 0f)
					{
						fLocal_134 = (fLocal_134 - 0.02f);
					}
					else
					{
						fLocal_134 = 0f;
					}
					if (fLocal_134 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_113, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_114, fLocal_134, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_113, 4, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_114, 4, 0, 1);
						iLocal_421 = 1;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
			{
				if (!PED::IS_PED_INJURED(iLocal_48))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_418 == 0)
						{
							if (iLocal_417 == 0)
							{
								func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
								if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_417 = 1;
								}
							}
						}
						else if (iLocal_419 == 0)
						{
							func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
							if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_419 = 1;
							}
						}
					}
					else if (iLocal_418 == 0)
					{
						func_115(&uLocal_136, 4, iLocal_48, "FHPBSecGuard", 0, 1);
						if (func_153(&uLocal_136, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_418 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_153(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8D61
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_106(sParam2, iParam3, 0);
}

float func_154(int iParam0, int iParam1, int iParam2)//Position - 0x8DAF
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_155()//Position - 0x8E0B
{
	int iVar0;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_159() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_27 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_30 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 0)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_111 = MISC::GET_GAME_TIMER();
										iLocal_391 = 1;
									}
								}
							}
						}
						if (iLocal_28 == 1)
						{
							if (iLocal_391 == 1 && MISC::GET_GAME_TIMER() > iLocal_111 + 7000)
							{
								if (func_157() && func_156())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_111 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_28 == 2)
					{
						if (iLocal_429 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_94 = MISC::GET_GAME_TIMER();
									iLocal_429 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_30 == 2 && iLocal_28 == 1)
				{
					if (iLocal_454 == 0)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = MISC::GET_GAME_TIMER();
								iLocal_454 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_107 + 8000)
					{
						if (func_157() && func_156())
						{
							if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_107 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_390 == 0)
					{
						func_97();
						if (func_157())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_76 = MISC::GET_GAME_TIMER();
									iLocal_386 = 1;
									iLocal_390 = 1;
								}
							}
							else
							{
								iLocal_76 = MISC::GET_GAME_TIMER();
								iLocal_386 = 1;
								iLocal_390 = 1;
							}
						}
					}
					if (iLocal_390 == 1)
					{
						if (iLocal_386 == 0)
						{
							iLocal_76 = MISC::GET_GAME_TIMER();
							iLocal_386 = 1;
						}
						if (iLocal_386 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_76 + 9000)
							{
								if (func_157())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_386 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (iLocal_426 == 1)
					{
						if (iLocal_388 == 0)
						{
							if (iLocal_389 == 1)
							{
								if (func_157())
								{
									if (func_153(&uLocal_136, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_388 = 1;
									}
								}
							}
						}
					}
					if (iLocal_387 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = MISC::GET_GAME_TIMER();
											iLocal_388 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 10000)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 0))
								{
									if (func_157())
									{
										if (func_153(&uLocal_136, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_77 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_427 == 1)
					{
						if (iLocal_428 == 0)
						{
							if (func_157())
							{
								if (func_153(&uLocal_136, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_156()//Position - 0x9149
{
	if (func_14() == 0)
	{
		func_115(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_115(&uLocal_136, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_115(&uLocal_136, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x91A9
{
	int iVar0;
	
	iLocal_65 = 0;
	while (iLocal_65 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_65]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_65]))
			{
				iVar0 = func_158(PLAYER::PLAYER_PED_ID(), iLocal_301, 0, 0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_34[iLocal_65] && func_154(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f)
				{
					func_115(&uLocal_136, 5, iLocal_34[iLocal_65], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_65++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x923B
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_159()//Position - 0x9342
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x9364
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_167();
	if (iLocal_403[0])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_432[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_432[0] = 1;
			}
			if (iLocal_432[0] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[0], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[0], 150319005) != 1)
				{
					iLocal_432[0] = 0;
				}
			}
		}
		else if (iLocal_432[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_432[0] = 0;
		}
	}
	if (iLocal_403[1])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_432[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
				iLocal_432[1] = 1;
			}
			if (iLocal_432[1] == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[1], 150319005) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_42[1], 150319005) != 1)
				{
					iLocal_432[1] = 0;
				}
			}
		}
		else if (iLocal_432[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			iLocal_432[1] = 0;
		}
	}
	if (iLocal_403[0] && iLocal_403[1])
	{
		if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		else
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	else
	{
		if (iLocal_403[0] && !iLocal_403[1])
		{
			iLocal_398 = 1;
			iLocal_399 = 0;
		}
		if (iLocal_403[1] && !iLocal_403[0])
		{
			iLocal_398 = 0;
			iLocal_399 = 1;
		}
	}
	switch (iLocal_30)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
				}
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_42[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_104[0] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_42[0]))
									{
										if (iLocal_461[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_458[0] = 0;
											iLocal_461[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_104[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_42[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_458[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[0] = 0;
											iLocal_458[0] = 1;
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_42[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_104[1] = MISC::GET_GAME_TIMER();
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_42[1]))
									{
										if (iLocal_461[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_458[1] = 0;
											iLocal_461[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_104[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_42[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_458[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_461[1] = 0;
											iLocal_458[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[0]))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
					{
						if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_450[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_42[0]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_101[0] = MISC::GET_GAME_TIMER();
											func_164(iLocal_42[0]);
											iLocal_450[0] = 1;
										}
									}
									if (iLocal_450[0] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_101[0] + 5000)
										{
											iLocal_450[0] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_81 = MISC::GET_GAME_TIMER();
											iLocal_402 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_81 + 15000)
										{
											func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_81 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_406[0] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_162(iLocal_42[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_406[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_162(iLocal_42[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[1]))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
					{
						if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_450[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
											}
											else
											{
												TASK::CLEAR_PED_TASKS(iLocal_42[1]);
											}
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 5000);
											iLocal_101[1] = MISC::GET_GAME_TIMER();
											func_164(iLocal_42[1]);
											iLocal_450[1] = 1;
										}
									}
									if (iLocal_450[1] == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_101[1] + 5000)
										{
											iLocal_450[1] = 0;
										}
									}
									if (iLocal_406[0] == 0 && iLocal_406[1] == 0)
									{
										if (iLocal_402 == 0)
										{
											func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_81 = MISC::GET_GAME_TIMER();
											iLocal_402 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_81 + 15000)
										{
											func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_81 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_406[1] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
										if (iLocal_406[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_162(iLocal_42[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (func_161() || iLocal_397 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_42[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_98[0] = MISC::GET_GAME_TIMER();
							iLocal_444[0] = 1;
							if (iLocal_441[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_42[0], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_42[0]);
								iLocal_441[0] = 1;
							}
						}
						else if (iLocal_447[0] == 0)
						{
							if (iLocal_444[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[0]);
								iLocal_447[0] = 1;
							}
							if (iLocal_444[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_98[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_42[0]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[0]);
									iLocal_447[0] = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_42[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_98[1] = MISC::GET_GAME_TIMER();
							iLocal_444[1] = 1;
							if (iLocal_441[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_42[1], 50, 1);
								TASK::TASK_COMBAT_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_164(iLocal_42[1]);
								iLocal_441[1] = 1;
							}
						}
						else if (iLocal_447[1] == 0)
						{
							if (iLocal_444[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_164(iLocal_42[1]);
								iLocal_447[1] = 1;
							}
							if (iLocal_444[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_98[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_42[1]);
									}
									else
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
									}
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_164(iLocal_42[1]);
									iLocal_447[1] = 1;
								}
							}
						}
					}
				}
				if (func_161())
				{
					if (iLocal_411 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_411 = 1;
						}
					}
					if (iLocal_398 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
								{
									func_162(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_86 = MISC::GET_GAME_TIMER();
									iLocal_400 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
								{
									func_162(iLocal_42[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_399 == 1)
					{
						if (iLocal_400 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
								{
									func_162(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
									iLocal_400 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
								{
									func_162(iLocal_42[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_86 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_457 == 0)
					{
						iLocal_49 = func_158(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
						if (iLocal_49 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
							{
								if (!PED::IS_PED_INJURED(iLocal_49))
								{
									if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_49, 1) < 35f)
									{
										iLocal_457 = 1;
									}
								}
							}
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_457 == 0)
					{
						if (iLocal_398 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
										iLocal_401 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_399 == 1)
						{
							if (iLocal_401 == 0)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
										iLocal_401 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_85 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_161())
			{
				if (iLocal_413 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_42[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_80 = MISC::GET_GAME_TIMER();
									iLocal_413 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_42[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_80 = MISC::GET_GAME_TIMER();
									iLocal_413 = 1;
								}
							}
						}
					}
				}
				if (iLocal_397 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_435[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_42[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[0]);
										iLocal_435[0] = 1;
									}
									iLocal_95[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_95[0] + 500)
								{
									if (iLocal_438[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[0]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[0]);
										iLocal_438[0] = 1;
									}
								}
							}
							else if (iLocal_483[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[0]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[0]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_56, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_42[0], uLocal_56);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
								func_164(iLocal_42[0]);
								iLocal_483[0] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_80 = MISC::GET_GAME_TIMER();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_82 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
											{
												func_162(iLocal_42[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[0]))
									{
										func_162(iLocal_42[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_83 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_435[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
										}
										TASK::TASK_GO_TO_ENTITY(iLocal_42[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
										func_164(iLocal_42[1]);
										iLocal_435[1] = 1;
									}
									iLocal_95[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_95[1] + 500)
								{
									if (iLocal_438[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_42[1]);
										}
										else
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_42[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_164(iLocal_42[1]);
										iLocal_438[1] = 1;
									}
								}
							}
							else if (iLocal_483[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_42[1]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_42[1]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_42[1]);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(uLocal_56, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_42[1], uLocal_56);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
								func_164(iLocal_42[1]);
								iLocal_483[1] = 1;
							}
							if (iLocal_453 == 0)
							{
								if (iLocal_430 == 0 || iLocal_402 == 1)
								{
									if (iLocal_396 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_84 = MISC::GET_GAME_TIMER();
												iLocal_80 = MISC::GET_GAME_TIMER();
												iLocal_413 = 1;
												iLocal_396 = 1;
												iLocal_406[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_82 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_402 == 0)
								{
									if (iLocal_431 == 0)
									{
										if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
											{
												func_162(iLocal_42[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_396 = 1;
												iLocal_431 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_42[1]))
									{
										func_162(iLocal_42[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_453 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_80 + 22000)
							{
								iLocal_453 = 1;
							}
						}
					}
					if (iLocal_413 == 1)
					{
						if (iLocal_397 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_80 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								iLocal_397 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_397 = 1;
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_397 = 1;
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[0]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_397 = 1;
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_42[1]))
						{
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
									{
										iLocal_397 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_161()//Position - 0xAA2C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_79 = 0;
		while (iLocal_79 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_79]))
			{
				if (!PED::IS_PED_INJURED(iLocal_34[iLocal_79]))
				{
					if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_79], PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_79++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_42[0]))
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_42[1]))
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_162(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xAB32
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_163(iParam3), 0);
}

int func_163(int iParam0)//Position - 0xAB4B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_164(int iParam0)//Position - 0xAD40
{
	if (iParam0 == iLocal_42[0])
	{
		iLocal_432[0] = 0;
		iLocal_458[0] = 0;
		iLocal_461[0] = 0;
		iLocal_450[0] = 0;
		iLocal_441[0] = 0;
		iLocal_447[0] = 0;
		iLocal_435[0] = 0;
		iLocal_438[0] = 0;
		iLocal_483[0] = 0;
	}
	if (iParam0 == iLocal_42[1])
	{
		iLocal_432[1] = 0;
		iLocal_458[1] = 0;
		iLocal_461[1] = 0;
		iLocal_450[1] = 0;
		iLocal_441[1] = 0;
		iLocal_447[1] = 0;
		iLocal_435[1] = 0;
		iLocal_438[1] = 0;
		iLocal_483[1] = 0;
	}
}

int func_165(int iParam0)//Position - 0xADDA
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0xAE34
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_167()//Position - 0xAE48
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_118 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[0]))
		{
			Local_124[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_42[0], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[1]))
		{
			Local_124[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_42[1], 1) };
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[0]))
		{
			iLocal_403[0] = 1;
		}
		else
		{
			iLocal_403[0] = 0;
		}
	}
	else
	{
		iLocal_403[0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_42[1]))
		{
			iLocal_403[1] = 1;
		}
		else
		{
			iLocal_403[1] = 0;
		}
	}
	else
	{
		iLocal_403[1] = 0;
	}
	if (iLocal_30 != 0)
	{
		if (iLocal_30 == 1)
		{
			if (iLocal_403[0] == 1)
			{
				if (iLocal_403[1] == 1)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
					{
						if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
						{
							if (((Local_118.x < Local_124[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_118.x < Local_124[0 /*3*/])
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
					{
						if ((Local_118.x > Local_124[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_118.x > Local_124[1 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1))
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 15f)
					{
						if ((Local_118.x < Local_124[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (Local_118.x < Local_124[0 /*3*/])
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_403[1] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
				{
					if ((Local_118.x > Local_124[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_30 = 0;
						iLocal_458[0] = 0;
						iLocal_461[0] = 0;
						iLocal_458[1] = 0;
						iLocal_461[1] = 0;
						iLocal_104[0] = MISC::GET_GAME_TIMER();
						iLocal_104[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (Local_118.x > Local_124[1 /*3*/])
				{
					iLocal_30 = 0;
					iLocal_458[0] = 0;
					iLocal_461[0] = 0;
					iLocal_458[1] = 0;
					iLocal_461[1] = 0;
					iLocal_104[0] = MISC::GET_GAME_TIMER();
					iLocal_104[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_30 == 2)
		{
			if (iLocal_397 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_118.x > 942f)
				{
					if (!PED::IS_PED_INJURED(iLocal_42[1]))
					{
						if (Local_118.x > Local_124[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_118.x > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_118.x < 860f)
				{
					if (!PED::IS_PED_INJURED(iLocal_42[0]))
					{
						if (Local_118.x < Local_124[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
							{
								iLocal_30 = 0;
								iLocal_458[0] = 0;
								iLocal_461[0] = 0;
								iLocal_458[1] = 0;
								iLocal_461[1] = 0;
								iLocal_104[0] = MISC::GET_GAME_TIMER();
								iLocal_104[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (Local_118.x < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
						{
							iLocal_30 = 0;
							iLocal_458[0] = 0;
							iLocal_461[0] = 0;
							iLocal_458[1] = 0;
							iLocal_461[1] = 0;
							iLocal_104[0] = MISC::GET_GAME_TIMER();
							iLocal_104[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 1)
	{
		if (iLocal_30 != 2)
		{
			if (iLocal_403[0] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
				{
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_118.x > Local_124[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 90f))
							{
								iLocal_30 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_30 = 1;
						}
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 15f)
				{
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_165(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_118.x < Local_124[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 90f))
							{
								iLocal_30 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_30 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (iLocal_481 == 1)
		{
			iLocal_30 = 2;
			iLocal_397 = 1;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_42[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
						iLocal_397 = 1;
					}
				}
			}
		}
		if (iLocal_430 == 0)
		{
			if (iLocal_429 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_94 + 4000)
				{
					iLocal_93 = 0;
					while (iLocal_93 <= 6)
					{
						if (func_159())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_93]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[iLocal_93]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_34[iLocal_93]))
									{
										iLocal_30 = 2;
										iLocal_430 = 1;
									}
								}
							}
						}
						iLocal_93++;
					}
				}
			}
		}
		if ((iLocal_28 == 4 || iLocal_28 == 3) || iLocal_429 == 1)
		{
			iLocal_30 = 2;
			iLocal_426 = 1;
			iLocal_397 = 1;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_403[0] == 1)
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (func_166(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && !func_165(0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_118, Local_131, 1) < 36f)
		{
			if (iLocal_403[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()))
				{
					iLocal_30 = 2;
				}
				if (func_154(iLocal_42[0], PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
			if (iLocal_403[1] == 1)
			{
				if (Local_118.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_30 = 2;
					}
					if (func_154(iLocal_42[1], PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[1]))
						{
							iLocal_30 = 2;
						}
					}
				}
			}
		}
		if (iLocal_403[0] == 1)
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[0], 1) < 20f)
			{
				if (Local_118.x > Local_124[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[0]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
		if (iLocal_403[1] == 1)
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_42[1], 1) < 20f)
			{
				if (Local_118.x < Local_124[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_42[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_42[1]))
					{
						iLocal_30 = 2;
					}
				}
			}
		}
	}
}

void func_168()//Position - 0xBA3D
{
	iLocal_63 = 0;
	while (iLocal_63 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_63]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_63]))
			{
				if (iLocal_329[iLocal_63] == 0)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_63], 1) > 20f)
					{
						iLocal_329[iLocal_63] = 1;
					}
				}
				if (iLocal_329[iLocal_63] == 1)
				{
					if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_63], 1) < 20f)
					{
						iLocal_329[iLocal_63] = 0;
					}
				}
			}
			else if (iLocal_329[iLocal_63] == 0)
			{
				iLocal_329[iLocal_63] = 1;
			}
		}
		else if (iLocal_329[iLocal_63] == 0)
		{
			iLocal_329[iLocal_63] = 1;
		}
		iLocal_63++;
	}
	if (((((iLocal_329[0] == 1 && iLocal_329[1] == 1) && iLocal_329[2] == 1) && iLocal_329[3] == 1) && iLocal_329[4] == 1) && iLocal_329[5] == 1)
	{
		iLocal_337 = 1;
	}
	else
	{
		iLocal_337 = 0;
	}
	iLocal_62 = 0;
	while (iLocal_62 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_62]))
		{
			if (!PED::IS_PED_INJURED(iLocal_34[iLocal_62]))
			{
				func_173(iLocal_34[iLocal_62]);
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_30 == 2 && iLocal_28 == 0)
					{
						func_172(1);
						if (iLocal_415 == 1)
						{
							func_97();
						}
					}
					if (PED::HAS_PED_RECEIVED_EVENT(iLocal_34[iLocal_62], 18))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
							iLocal_481 = 1;
						}
					}
					if (iLocal_28 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
						}
					}
					if ((((((((func_169(iLocal_34[iLocal_62], iLocal_34[0]) || func_169(iLocal_34[iLocal_62], iLocal_34[1])) || func_169(iLocal_34[iLocal_62], iLocal_34[2])) || func_169(iLocal_34[iLocal_62], iLocal_34[3])) || func_169(iLocal_34[iLocal_62], iLocal_34[4])) || func_169(iLocal_34[iLocal_62], iLocal_34[5])) || func_169(iLocal_34[iLocal_62], iLocal_34[6])) || func_169(iLocal_34[iLocal_62], iLocal_42[0])) || func_169(iLocal_34[iLocal_62], iLocal_42[1]))
					{
						if (iLocal_28 != 4)
						{
							func_172(4);
							if (iLocal_415 == 1)
							{
								func_170();
							}
							iLocal_481 = 1;
						}
					}
					if ((func_166(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || func_165(0))
					{
						if (iLocal_397 == 0)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) > 20f)
							{
								if (iLocal_321[iLocal_62] == 1)
								{
									iLocal_321[iLocal_62] = 0;
								}
								if (((((iLocal_337 == 1 && iLocal_28 != 0) && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4) && iLocal_30 != 2)
								{
									func_172(0);
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
								{
									if (iLocal_430 == 0 && iLocal_397 == 0)
									{
										func_172(1);
										if (iLocal_415 == 1)
										{
											func_97();
										}
									}
									else
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_321[iLocal_62] == 0)
								{
									iLocal_68[iLocal_62] = MISC::GET_GAME_TIMER();
									iLocal_321[iLocal_62] = 1;
								}
								if (iLocal_321[iLocal_62] == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_68[iLocal_62] + 24000)
									{
										if ((iLocal_28 != 2 && iLocal_28 != 3) && iLocal_28 != 4)
										{
											func_172(2);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (iLocal_397 == 1)
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_28 != 3 && iLocal_28 != 4)
								{
									func_172(3);
									if (iLocal_415 == 1)
									{
										func_170();
									}
								}
							}
						}
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_412 == 0)
							{
								iLocal_89 = MISC::GET_GAME_TIMER();
								iLocal_412 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_89 + 3000)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_28 != 3 && iLocal_28 != 4)
									{
										func_172(3);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
						else if (iLocal_412 == 1)
						{
							iLocal_412 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 3 && iLocal_28 != 4)
										{
											iLocal_389 = 1;
											func_172(3);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
										{
											if (!PED::IS_PED_INJURED(iLocal_34[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_28 != 3 && iLocal_28 != 4)
													{
														iLocal_389 = 1;
														func_172(3);
														if (iLocal_415 == 1)
														{
															func_170();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[6]))
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 20f)
								{
									if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[6], PLAYER::PLAYER_PED_ID()))
										{
											if (Local_118.f_2 > 31f)
											{
												if (iLocal_28 != 3 && iLocal_28 != 4)
												{
													iLocal_427 = 1;
													func_172(3);
													if (iLocal_415 == 1)
													{
														func_170();
													}
												}
											}
											else if (((iLocal_28 != 1 && iLocal_28 != 2) && iLocal_28 != 3) && iLocal_28 != 4)
											{
												func_172(1);
												if (iLocal_415 == 1)
												{
													func_97();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_320 == 0)
						{
							iLocal_67 = MISC::GET_GAME_TIMER();
							iLocal_320 = 1;
						}
						if (iLocal_320 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_67 + 4000 || iLocal_28 == 3)
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_28 != 4)
										{
											func_172(4);
											if (iLocal_415 == 1)
											{
												func_170();
											}
										}
									}
								}
							}
						}
						if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_62], 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_62], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[iLocal_62]))
								{
									if (iLocal_28 != 4)
									{
										func_172(4);
										if (iLocal_415 == 1)
										{
											func_170();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_62++;
	}
}

int func_169(int iParam0, int iParam1)//Position - 0xC2A1
{
	if (((func_154(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_170()//Position - 0xC2E9
{
	Global_14558 = 0;
	func_171();
}

void func_171()//Position - 0xC2F9
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_172(int iParam0)//Position - 0xC31A
{
	iLocal_28 = iParam0;
	iLocal_66 = 0;
}

void func_173(int iParam0)//Position - 0xC329
{
	iLocal_64 = 0;
	while (iLocal_64 <= 6)
	{
		if (iParam0 == iLocal_34[iLocal_64])
		{
			if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_338[iLocal_64] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
					iLocal_338[iLocal_64] = 1;
				}
			}
			else if (iLocal_338[iLocal_64] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
				iLocal_338[iLocal_64] = 0;
			}
		}
		iLocal_64++;
	}
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_66 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				if (iParam0 == iLocal_34[0])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[1])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[2])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[3])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[4])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[5])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[4]))
				{
					if (!PED::IS_PED_INJURED(iLocal_34[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[5]))
							{
								if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[4], 1) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_118.f_1 > -1573f)
									{
										if (iLocal_415 == 0)
										{
											func_115(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
											func_115(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
											if (!func_159())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_153(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_415 = 1;
													}
												}
											}
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_422 == 0)
									{
										iLocal_91 = MISC::GET_GAME_TIMER();
										iLocal_422 = 1;
									}
									if (iLocal_422 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_91 + 4000)
										{
											if (iLocal_415 == 0)
											{
												func_115(&uLocal_136, 3, iLocal_34[4], "CONSTRUCTION2", 0, 1);
												func_115(&uLocal_136, 5, iLocal_34[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[4], iLocal_34[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_34[5], iLocal_34[4], -1, 0, 2);
												if (!func_159())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_153(&uLocal_136, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_415 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_415 == 1 && !func_159())
								{
									if (iLocal_414 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[4]);
											TASK::TASK_CLEAR_LOOK_AT(iLocal_34[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_414 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_34[6])
				{
					if (iLocal_423 == 0)
					{
						if (iLocal_424 == 0)
						{
							iLocal_92 = MISC::GET_GAME_TIMER();
							iLocal_424 = 1;
						}
						if (MISC::GET_GAME_TIMER() > iLocal_92 + 30000)
						{
							if (iLocal_423 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_423 = 1;
									iLocal_424 = 0;
								}
							}
						}
					}
					if (iLocal_423 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[6], 1) < 15f && Local_118.f_2 < 40f)
							{
								if (iLocal_425 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_425 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_66 == 0)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_30 == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
							{
								if (iLocal_346[iLocal_64] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
										TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
										iLocal_338[iLocal_64] = 0;
										iLocal_346[iLocal_64] = 1;
									}
								}
								if (iLocal_346[iLocal_64] == 1)
								{
									if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
										iLocal_346[iLocal_64] = 0;
									}
								}
							}
							else
							{
								if (iLocal_346[iLocal_64] == 1)
								{
									iLocal_346[iLocal_64] = 0;
								}
								if (iParam0 == iLocal_34[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_34[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_34[iLocal_64])
					{
						if (func_154(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f)
						{
							if (iLocal_346[iLocal_64] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_338[iLocal_64] = 0;
									iLocal_346[iLocal_64] = 1;
								}
							}
							if (iLocal_346[iLocal_64] == 1)
							{
								if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
									iLocal_346[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iLocal_346[iLocal_64] == 1)
							{
								iLocal_346[iLocal_64] = 0;
							}
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 2:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iParam0 == iLocal_34[iLocal_64])
					{
						if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f)
						{
							if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_56);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
									iLocal_338[iLocal_64] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_34[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[2], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[3], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[4], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[5], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_34[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], 1647992574) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[6], -1680762137) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[6], 1);
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 3:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = MISC::GET_GAME_TIMER();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_78 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				if (iLocal_27 == 3)
				{
					iLocal_64 = 0;
					while (iLocal_64 <= 6)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								if (iLocal_354[iLocal_64] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_354[iLocal_64] = 1;
								}
								if (iLocal_362[iLocal_64] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_338[iLocal_64] = 0;
									iLocal_362[iLocal_64] = 1;
								}
							}
						}
						iLocal_64++;
					}
					if (iLocal_467 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_32, 1) && ENTITY::IS_ENTITY_AT_COORD(iLocal_32, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[0]);
											}
											TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_34[0], uLocal_56);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
											iLocal_467 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_467 == 1 && iLocal_486 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_34[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_34[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_115(&uLocal_136, 3, iLocal_34[0], "FHPrepBWorker", 0, 1);
									func_162(iLocal_34[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_486 = 1;
								}
							}
						}
					}
					if (iLocal_466 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_78 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::TASK_PLAY_ANIM(iLocal_34[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_110 = MISC::GET_GAME_TIMER();
									iLocal_466 = 1;
								}
							}
						}
					}
					else if (iLocal_465 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_110 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[5]))
							{
								if (!PED::IS_PED_INJURED(iLocal_34[5]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[5]);
									TASK::TASK_COMBAT_PED(iLocal_34[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_465 = 1;
								}
							}
						}
					}
				}
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
									{
										if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
											{
												TASK::CLEAR_PED_TASKS(iParam0);
											}
											TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											iLocal_305[iLocal_64] = 1;
										}
									}
									else if (func_154(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
										}
										TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										iLocal_305[iLocal_64] = 1;
									}
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			if (iLocal_27 == 4)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (iLocal_305[iLocal_64] == 0)
					{
						if (iParam0 == iLocal_34[iLocal_64])
						{
							if (ENTITY::DOES_ENTITY_EXIST(iParam0))
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iParam0, 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_305[iLocal_64] = 1;
								}
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
		
		case 4:
			if (iLocal_482 == 0)
			{
				iLocal_482 = 1;
			}
			if (iLocal_392 == 0)
			{
				if (iLocal_393 == 0)
				{
					iLocal_78 = MISC::GET_GAME_TIMER();
					iLocal_393 = 1;
				}
				if (iLocal_393 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_78 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_392 = 1;
					}
				}
			}
			if (iLocal_66 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_301, 1862763509);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				iLocal_66++;
			}
			if (iLocal_66 == 1)
			{
				iLocal_64 = 0;
				while (iLocal_64 <= 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_34[iLocal_64]))
					{
						if (!PED::IS_PED_INJURED(iLocal_34[iLocal_64]))
						{
							if (func_154(PLAYER::PLAYER_PED_ID(), iLocal_34[iLocal_64], 1) < 15f)
							{
								if (func_174(iLocal_34[iLocal_64], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_378[iLocal_64] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
											{
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
											}
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
											}
											TASK::TASK_HANDS_UP(iLocal_34[iLocal_64], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											iLocal_378[iLocal_64] = 1;
											iLocal_370[iLocal_64] = 0;
											iLocal_338[iLocal_64] = 0;
											iLocal_90 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_90 + 300)
									{
										iLocal_370[iLocal_64] = 0;
									}
								}
								else if (iLocal_370[iLocal_64] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
									}
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
									{
										TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
									}
									TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
									iLocal_370[iLocal_64] = 1;
									iLocal_378[iLocal_64] = 0;
								}
							}
							else if (iLocal_370[iLocal_64] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[iLocal_64]);
								}
								if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[iLocal_64]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_34[iLocal_64]);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_34[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
								iLocal_370[iLocal_64] = 1;
								iLocal_378[iLocal_64] = 0;
							}
						}
					}
					iLocal_64++;
				}
			}
			break;
	}
}

int func_174(int iParam0, int iParam1)//Position - 0xDD19
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()//Position - 0xDD65
{
	iLocal_45 = func_25(0);
	iLocal_46 = func_25(1);
	iLocal_47 = func_25(2);
	if (func_33(iLocal_45, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_45))
		{
			if (!func_32(iLocal_45))
			{
				if (!func_177())
				{
					if (func_176(iLocal_45))
					{
						if (func_31(iLocal_45, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_45, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, 1);
							TASK::CLEAR_PED_TASKS(iLocal_45);
							iLocal_472 = 0;
							iLocal_475 = 0;
							iLocal_478 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_472 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_472 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_45, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_472 = 1;
						}
					}
				}
				if (iLocal_472 == 0)
				{
					if (func_177())
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_469 == 1)
				{
					if ((func_176(iLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_45, 1)) && iLocal_472 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_45, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_475 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_478 = 0;
									iLocal_475 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_478 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_475 = 0;
								iLocal_478 = 1;
							}
						}
						else if (iLocal_475 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_45, PED::GET_VEHICLE_PED_IS_IN(iLocal_45, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_478 = 0;
								iLocal_475 = 1;
							}
						}
					}
					else
					{
						iLocal_472 = 1;
					}
				}
				if (iLocal_472 == 1)
				{
					if (func_24(iLocal_45))
					{
						iLocal_472 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_47, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_47))
		{
			if (!func_32(iLocal_47))
			{
				if (!func_177())
				{
					if (func_176(iLocal_47))
					{
						if (func_31(iLocal_47, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_47, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_47, 1);
							TASK::CLEAR_PED_TASKS(iLocal_47);
							iLocal_474 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_474 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_47, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_474 = 1;
						}
					}
				}
				if (iLocal_474 == 0)
				{
					if (func_177())
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_470 == 1)
				{
					if ((func_176(iLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_47, 1)) && iLocal_474 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_47, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_47, PED::GET_VEHICLE_PED_IS_IN(iLocal_47, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
				if (iLocal_474 == 1)
				{
					if (func_24(iLocal_47))
					{
						iLocal_474 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_46))
		{
			if (!func_32(iLocal_46))
			{
				if (!func_177())
				{
					if (func_176(iLocal_46))
					{
						if (func_31(iLocal_46, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_46, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, 1);
							TASK::CLEAR_PED_TASKS(iLocal_46);
							iLocal_473 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_473 = 1;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_46, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							iLocal_473 = 1;
						}
					}
				}
				if (iLocal_473 == 0)
				{
					if (func_177())
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_471 == 1)
				{
					if ((func_176(iLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_46, 1)) && iLocal_473 == 0)
					{
						Local_121 = { ENTITY::GET_ENTITY_COORDS(iLocal_46, 1) };
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_121, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_121.x, Local_121.f_1, Local_115.x, Local_115.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_46, PED::GET_VEHICLE_PED_IS_IN(iLocal_46, 0), Local_115, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
				if (iLocal_473 == 1)
				{
					if (func_24(iLocal_46))
					{
						iLocal_473 = 0;
					}
				}
			}
		}
	}
}

int func_176(int iParam0)//Position - 0xE38E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == iParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
					{
						if ((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_32, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_32, -1) == iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_32, Local_115, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_45)
							{
								iLocal_469 = 1;
							}
							if (iParam0 == iLocal_47)
							{
								iLocal_470 = 1;
							}
							if (iParam0 == iLocal_46)
							{
								iLocal_471 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_45)
	{
		iLocal_469 = 0;
	}
	if (iParam0 == iLocal_47)
	{
		iLocal_470 = 0;
	}
	if (iParam0 == iLocal_46)
	{
		iLocal_471 = 0;
	}
	return 0;
}

bool func_177()//Position - 0xE46E
{
	return Global_17096;
}

void func_178()//Position - 0xE479
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
		{
			func_181(3);
			return;
		}
		else
		{
			if (func_180(&iLocal_32))
			{
				func_181(2);
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					func_181(1);
					return;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_32))
					{
						if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_31) || func_179(iLocal_31)) || func_180(&iLocal_31))
						{
							func_181(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0))
			{
				if (func_154(iLocal_31, PLAYER::PLAYER_PED_ID(), 1) > 600f)
				{
					func_181(5);
					return;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		if (PED::IS_PED_INJURED(iLocal_48))
		{
			func_181(6);
			return;
		}
	}
}

int func_179(int iParam0)//Position - 0xE564
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
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

int func_180(var uParam0)//Position - 0xE5A6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_181(int iParam0)//Position - 0xE600
{
	iLocal_29 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_61 = 0;
	}
}

void func_182(int iParam0, int iParam1)//Position - 0xE618
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] = iParam1;
}

void func_183()//Position - 0xE65D
{
	if (iLocal_27 == 5)
	{
		if (iLocal_482 == 0)
		{
			func_184(657);
		}
	}
}

void func_184(int iParam0)//Position - 0xE679
{
	bool bVar0;
	int iVar1;
	
	Global_54751 = 0;
	if (!Global_54975[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66845)
	{
		if (Global_66846[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_66846[iVar1 /*9*/].f_1 = 1;
			Global_66846[iVar1 /*9*/].f_2 = 0f;
			if (Global_66846[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_185(bool bParam0)//Position - 0xE6EA
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_186()//Position - 0xE715
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), 0);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_50, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_51, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_52, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_53, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_54, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_55, 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
		}
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_113))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_113);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_114))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_114);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_187()//Position - 0xE7D5
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_SAVE_DATA.isGameflowActive || func_185(0))
	{
		if (!func_188())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_188()//Position - 0xE846
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

