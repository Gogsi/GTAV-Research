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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	float fLocal_84 = 0f;
	struct<61> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_146 = { 0, 0, 0, 0 } ;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	char* sLocal_163 = NULL;
	var uLocal_164 = 16;
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
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	float fLocal_333 = 0f;
	char* sLocal_334[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_340[31] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_372[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_380[32] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_413[3] = { NULL, NULL, NULL };
	char* sLocal_417[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_422 = NULL;
	int iLocal_423[5] = { 0, 0, 0, 0, 0 };
	int iLocal_429[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_461[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_469[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_502[3] = { 0, 0, 0 };
	bool bLocal_506 = 0;
	bool bLocal_507 = 0;
	int iLocal_508[4] = { 0, 0, 0, 0 };
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	struct<3> Local_525[3];
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	struct<3> Local_539 = { 0, 0, 0 } ;
	float fLocal_542 = 0f;
	struct<3> Local_543 = { 0, 0, 0 } ;
	float fLocal_546 = 0f;
	int iLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = -1;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 1000;
	var uLocal_558 = 1000;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
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
	uLocal_79 = GlobalFunc_4946(68);
	iLocal_80 = joaat("landstalker");
	Local_81 = { -1473.376f, 517.8441f, 116.8854f };
	fLocal_84 = 97.3011f;
	iLocal_161 = joaat("dominator");
	iLocal_162 = joaat("landstalker");
	sLocal_163 = "Dreyfuss";
	iLocal_330 = 1;
	fLocal_333 = 25f;
	sLocal_422 = "DREY1_WRECK";
	Local_539 = { -1473.063f, 524.9622f, 117.0789f };
	fLocal_542 = 105.5732f;
	Local_543 = { -1433.993f, 528.9166f, 118.1719f };
	fLocal_546 = 179.8441f;
	Local_85 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_85);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_424();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_416(&Local_85))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	uLocal_560 = func_415();
	func_414(0);
	if (GlobalFunc_115(Local_85.f_28[0]))
	{
		iLocal_155 = Local_85.f_28[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_155, 1, 1);
	}
	func_412();
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(-1462.177f, 485.6856f, 115.2016f, 97.1913f, 1, 0);
				func_395(1);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_Dreyfuss", 0);
		func_379(Local_85.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_153)
			{
				case 0:
					func_300();
					break;
				
				case 1:
					func_290();
					break;
				
				case 2:
					func_282();
					break;
				
				case 3:
					func_237();
					break;
				
				case 4:
					func_9();
					break;
				
				case 5:
					func_1();
					break;
				
				default:
					break;
				}
		}
	}
}

void func_1()//Position - 0x239
{
	switch (iLocal_154)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4948(&uLocal_548, 0, 0);
			GlobalFunc_146(&iLocal_156);
			GlobalFunc_9624(1);
			iLocal_154 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				GlobalFunc_69(&iLocal_155);
				GlobalFunc_6689(&(Local_85.f_35[0]));
				func_424();
			}
			break;
	}
}








void func_9()//Position - 0x4D1
{
	switch (iLocal_154)
	{
		case 0:
			GlobalFunc_146(&iLocal_156);
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_154 = 1;
			break;
		
		case 1:
			if (!bLocal_507)
			{
				if (GlobalFunc_115(iLocal_155))
				{
					if (!GlobalFunc_111())
					{
						bLocal_507 = GlobalFunc_10630(&uLocal_164, "DREY1AU", "DREY1_END", "DREY1_END_2", 7, 0, 0);
					}
				}
				else if (!GlobalFunc_111())
				{
					bLocal_507 = GlobalFunc_10630(&uLocal_164, "DREY1AU", "DREY1_END", "DREY1_END_1", 7, 0, 0);
				}
			}
			else if (!GlobalFunc_111())
			{
				iLocal_154 = 2;
			}
			break;
		
		case 2:
			func_10();
			break;
	}
}

void func_10()//Position - 0x56B
{
	GlobalFunc_4935();
	GlobalFunc_4956();
	GlobalFunc_9804(19, 0);
	GlobalFunc_11315(68, 1);
	func_424();
}



































































































































































































































void func_237()//Position - 0x25852
{
	switch (iLocal_154)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (HUD::DOES_BLIP_EXIST(iLocal_156))
			{
				HUD::SET_BLIP_SCALE(iLocal_156, 0.7f);
			}
			if (GlobalFunc_115(iLocal_155))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_159);
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_155, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_159);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_155, uLocal_159);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_159);
			}
			GlobalFunc_4956();
			iLocal_536 = 0;
			iLocal_154 = 1;
			break;
		
		case 1:
			func_281();
			if (!GlobalFunc_115(iLocal_155))
			{
				GlobalFunc_553(749);
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 0))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 0);
				}
				func_279(4);
			}
			else if (func_277(PLAYER::PLAYER_PED_ID(), iLocal_155) > 250f)
			{
				RECORDING::_0x293220DA1B46CEBC(6f, 2f, 4);
				func_279(4);
			}
			else
			{
				GlobalFunc_10693(&uLocal_548, iLocal_155, 0, 0, 1, 1, 1);
				func_251(&iLocal_156, "", "", &uLocal_537, iLocal_538, 0);
				func_238();
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_155, 1.8f);
			}
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
}

void func_238()//Position - 0x25979
{
	if (!bLocal_506)
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_155, fLocal_333))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_155))
			{
				bLocal_506 = GlobalFunc_10618(&uLocal_164, "DREY1AU", "DREY1_HURT", 7, 0, 0, 0);
			}
			else
			{
				bLocal_506 = GlobalFunc_10618(&uLocal_164, "DREY1AU", sLocal_422, 7, 0, 0, 0);
			}
		}
	}
	else if (!GlobalFunc_111())
	{
		if (func_241(1) == 0)
		{
			func_239(&iLocal_519, &iLocal_514, 32, &(iLocal_469[iLocal_514]), "DREY1_CHASE2", sLocal_380[iLocal_514], 0);
		}
	}
}

void func_239(int iParam0, int iParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, bool bParam6)//Position - 0x25A00
{
	if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_155, fLocal_333))
	{
		iLocal_536 = 1;
	}
	else
	{
		iLocal_536 = 0;
	}
	if (!*uParam3)
	{
		if (!iLocal_536)
		{
			if (!*iParam0)
			{
				if ((GlobalFunc_4924(iLocal_155) && !PED::IS_PED_RAGDOLL(iLocal_155)) && !TASK::IS_PED_IN_WRITHE(iLocal_155))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_155, fLocal_333))
					{
						if (!GlobalFunc_111())
						{
							if (bParam6 || (!bParam6 && iLocal_547 == 0))
							{
								*uParam3 = GlobalFunc_10630(&uLocal_164, "DREY1AU", sParam4, sParam5, 7, 0, 0);
							}
							if (*uParam3 && !bParam6)
							{
								if (*iParam1 < (iParam2 - 1))
								{
									*iParam1++;
								}
								else
								{
									*iParam0 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	else if ((bParam6 && !iLocal_547 == 0) && !GlobalFunc_111())
	{
		if (*iParam1 < (iParam2 - 1))
		{
			*iParam1++;
		}
		else
		{
			*iParam0 = 1;
		}
		if (iLocal_547 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_155);
		}
		iLocal_547 = 0;
	}
}


int func_241(int iParam0)//Position - 0x25B37
{
	if (iLocal_547 == 0)
	{
		if (GlobalFunc_8324(iLocal_155, 1, 0, 0, 0) && iLocal_517 < 3)
		{
			GlobalFunc_4956();
			iLocal_547 = 2;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), iParam0) && iLocal_518 < 4)
		{
			GlobalFunc_4956();
			iLocal_547 = 1;
		}
	}
	if (iLocal_547 == 1)
	{
		func_239(&iLocal_520, &iLocal_518, 4, &(iLocal_508[iLocal_518]), "DREY1_HURT", sLocal_417[iLocal_518], 1);
	}
	else if (iLocal_547 == 2)
	{
		func_239(&iLocal_521, &iLocal_517, 3, &(iLocal_502[iLocal_517]), "DREY1_SHOOT", sLocal_413[iLocal_517], 1);
	}
	return iLocal_547;
}










void func_251(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2601D
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


























float func_277(int iParam0, int iParam1)//Position - 0x26F78
{
	return GlobalFunc_114(iParam0, iParam1, 1);
}


void func_279(int iParam0)//Position - 0x26FE5
{
	iLocal_153 = iParam0;
	iLocal_154 = 0;
}


void func_281()//Position - 0x27065
{
	if (GlobalFunc_115(iLocal_155))
	{
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_155, joaat("weapon_stungun"), 0))
		{
			if (GlobalFunc_115(iLocal_155))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_155, 99);
			}
		}
	}
}

void func_282()//Position - 0x27096
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_154)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_AREA(Local_146, Local_146.f_3, 1, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (GlobalFunc_115(Local_85.f_35[0]))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					Local_525[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_85.f_35[0], 1) };
					iVar0++;
				}
			}
			iLocal_535 = MISC::GET_GAME_TIMER();
			iLocal_332 = 0;
			iLocal_536 = 0;
			iLocal_154 = 1;
			break;
		
		case 1:
			func_281();
			if (!GlobalFunc_115(iLocal_155))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
				GlobalFunc_553(749);
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 0))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 0);
				}
				func_279(4);
			}
			else if (func_277(PLAYER::PLAYER_PED_ID(), iLocal_155) > 250f)
			{
				RECORDING::_0x293220DA1B46CEBC(6f, 2f, 4);
				func_279(4);
			}
			else
			{
				if (GlobalFunc_115(Local_85.f_35[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_85.f_35[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						func_239(&iLocal_522, &iLocal_515, 7, &(iLocal_461[iLocal_515]), "DREY1_BUMP", sLocal_372[iLocal_515], 0);
					}
					func_239(&iLocal_523, &iLocal_516, 31, &(iLocal_429[iLocal_516]), "DREY1_CHASE1", sLocal_340[iLocal_516], 0);
					if (((!iLocal_331 && !iLocal_332) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_155)) && !ENTITY::IS_ENTITY_AT_COORD(Local_85.f_35[0], -1474.445f, 519.4703f, 117.0069f, 15f, 15f, 15f, 0, 1, 0))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_155, Local_85.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 90f, 786469, 100f, 1f, 1);
						iLocal_332 = 1;
					}
				}
				func_241(0);
				GlobalFunc_10693(&uLocal_548, iLocal_155, 0, 0, 1, 1, 1);
				if (((!iLocal_331 && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_155, 10f)) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_155))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_155, Local_85.f_35[0], PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 100f, 1f, 1);
					iLocal_331 = 1;
				}
				if (!func_288())
				{
					func_283();
				}
			}
			func_251(&iLocal_156, "", "", &uLocal_537, iLocal_538, 0);
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
}

void func_283()//Position - 0x272FF
{
	if (GlobalFunc_115(Local_85.f_35[0]))
	{
		if (func_287())
		{
			func_279(3);
		}
		else if (!func_284())
		{
			sLocal_422 = "DREY1_RUN";
			iLocal_331 = 1;
			func_279(3);
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_155) || !GlobalFunc_4940(Local_85.f_35[0]))
		{
			iLocal_331 = 1;
			func_279(3);
		}
	}
	else
	{
		iLocal_331 = 1;
		sLocal_422 = "DREY1_CGONE";
		func_279(3);
	}
}

int func_284()//Position - 0x27376
{
	if (GlobalFunc_115(Local_85.f_35[0]))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_155, Local_85.f_35[0], 0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_535) > 3000)
			{
				func_286();
				if (GlobalFunc_1986(Local_525[0 /*3*/], Local_525[2 /*3*/], 2f))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			iLocal_535 = MISC::GET_GAME_TIMER();
		}
		return 1;
	}
	return 0;
}


void func_286()//Position - 0x273FB
{
	iLocal_535 = MISC::GET_GAME_TIMER();
	Local_525[0 /*3*/] = { Local_525[1 /*3*/] };
	Local_525[1 /*3*/] = { Local_525[2 /*3*/] };
	Local_525[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_85.f_35[0], 1) };
}

int func_287()//Position - 0x2743E
{
	int iVar0;
	
	if (GlobalFunc_115(Local_85.f_35[0]))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_85.f_35[0], 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_85.f_35[0], 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_85.f_35[0], 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_85.f_35[0], 5, 0))
		{
			iVar0++;
		}
		if (iVar0 > 1)
		{
			sLocal_422 = "DREY1_TYRE";
			iLocal_331 = 1;
			return 1;
		}
	}
	return 0;
}

int func_288()//Position - 0x274C5
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_85.f_35[0]))
		{
			if (GlobalFunc_115(Local_85.f_35[0]))
			{
				if (GlobalFunc_155(iLocal_155, Local_85.f_35[0], 5f))
				{
					if (func_289(joaat("towtruck")))
					{
						return 1;
					}
					else
					{
						return func_289(joaat("towtruck2"));
					}
				}
			}
		}
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x27528
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_85.f_35[0], 1), 20f, iParam0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_85.f_35[0]))
		{
			sLocal_422 = "DREY1_TOW";
			func_279(3);
			return 1;
		}
	}
	return 0;
}

void func_290()//Position - 0x27574
{
	switch (iLocal_154)
	{
		case 0:
			GlobalFunc_4923(&Local_85, 0, 1);
			iLocal_330 = 1;
			iLocal_536 = 0;
			func_298();
			if (GlobalFunc_4940(Local_85.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_85.f_35[0], 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_85.f_35[0], 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_85.f_35[0], 0, 0, 0);
			}
			if (GlobalFunc_115(iLocal_155))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_155, 3f);
				if (!HUD::DOES_BLIP_EXIST(iLocal_156))
				{
					iLocal_156 = GlobalFunc_5739(iLocal_155, 1, 0, 5);
				}
				func_296(&iLocal_156, "", "", &uLocal_537, &iLocal_538, 1, 0);
				if (GlobalFunc_4940(Local_85.f_35[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_158);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1472.27f, 513.9628f, 116.898f, 3f, 20000, 0.25f, 1, 1193033728);
					TASK::TASK_ENTER_VEHICLE(0, Local_85.f_35[0], 20000, -1, 3f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_85.f_35[0], 15f, 262144);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_158);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_155, uLocal_158);
					uLocal_329 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_ENTITY_COORDS(Local_85.f_35[0], 1), 100f, 10f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_155, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_160))
			{
				STREAMING::REQUEST_MODEL(iLocal_161);
				while (!STREAMING::HAS_MODEL_LOADED(iLocal_161))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_160 = VEHICLE::CREATE_VEHICLE(iLocal_161, -1482.366f, 529.0344f, 117.2725f, 201.5764f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161);
			}
			GlobalFunc_79(500, 0);
			iLocal_157 = MISC::GET_GAME_TIMER();
			iLocal_562 = 0;
			iLocal_154 = 1;
			break;
		
		case 1:
			if (iLocal_562 == 0 && CAM::IS_SCREEN_FADED_IN())
			{
				GlobalFunc_159("DREY1_HELP", -1);
				iLocal_562 = 1;
			}
			func_281();
			if (!GlobalFunc_115(iLocal_155))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
				GlobalFunc_553(749);
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 0))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 0);
				}
				func_279(4);
			}
			else if (func_277(PLAYER::PLAYER_PED_ID(), iLocal_155) > 250f)
			{
				func_279(4);
			}
			else
			{
				GlobalFunc_10693(&uLocal_548, iLocal_155, 0, 0, 1, 1, 1);
				func_294();
				if (func_241(1) == 0)
				{
					func_239(&iLocal_524, &iLocal_513, 5, &(iLocal_423[iLocal_513]), "DREY1_CHASE0", sLocal_334[iLocal_513], 0);
				}
				if (iLocal_330)
				{
					if (GlobalFunc_115(iLocal_155))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_157) > 3000)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_155, 3f);
						}
						else
						{
							iLocal_330 = 0;
						}
					}
				}
				func_251(&iLocal_156, "", "", &uLocal_537, iLocal_538, 0);
				if (!func_292())
				{
					if (!func_288() && !func_291(242628503))
					{
						func_283();
					}
				}
				if ((func_291(242628503) && TASK::GET_SEQUENCE_PROGRESS(iLocal_155) > 0) && func_287())
				{
					func_279(3);
				}
			}
			break;
		
		case 2:
			func_279(2);
			break;
		
		default:
			break;
	}
}

int func_291(int iParam0)//Position - 0x27869
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_155, iParam0) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_155, iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_292()//Position - 0x27893
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_85.f_35[0]))
	{
		if (func_291(242628503))
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iLocal_155) > 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85.f_35[0], Local_81, 20f, 20f, 100f, 0, 1, 0))
				{
					sLocal_422 = "DREY1_CGONE";
					iLocal_331 = 1;
					func_279(3);
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(Local_85.f_35[0], Local_81, 5f, 5f, 100f, 0, 1, 0))
				{
					if (!GlobalFunc_4958(iLocal_155, Local_85.f_35[0], 1126825984, 0))
					{
						sLocal_422 = "DREY1_CGONE";
						iLocal_331 = 1;
						func_279(3);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_294()//Position - 0x279D5
{
	if (GlobalFunc_4924(iLocal_155) && GlobalFunc_4940(Local_85.f_35[0]))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_155, Local_85.f_35[0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_156))
			{
				HUD::SET_BLIP_SCALE(iLocal_156, 1f);
			}
			iLocal_154 = 2;
		}
	}
}


void func_296(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6)//Position - 0x27A55
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


int func_298()//Position - 0x27B53
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1482.992f, 523.4556f, 117.9981f, 15f, joaat("prop_lrggate_01_l"), 0) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1477.865f, 525.6363f, 118.0456f, 15f, joaat("prop_lrggate_01_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -1482.992f, 523.4556f, 117.9981f, 1, 0f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -1477.865f, 525.6363f, 118.0456f, 1, 0f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_l"), -1482.992f, 523.4556f, 117.9981f, 1, 1f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01_r"), -1477.865f, 525.6363f, 118.0456f, 1, -1f, 0);
		return 1;
	}
	return 0;
}


void func_300()//Position - 0x27D04
{
	switch (iLocal_154)
	{
		case 0:
			GlobalFunc_9623("paper_1_RCM_alt1", 1);
			if (((CAM::IS_SCREEN_FADED_IN() && !GlobalFunc_199()) && GlobalFunc_115(iLocal_155)) && GlobalFunc_114(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 1) > 4f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_155, 0f, 0f, -0.5f, 1, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				GlobalFunc_4935();
				iLocal_561 = 0;
			}
			else
			{
				iLocal_561 = 1;
			}
			GlobalFunc_129(&iLocal_564, 0);
			iLocal_564 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1459.57f, 485.16f, 115.2f, 10f, joaat("prop_yoga_mat_02"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_564))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_564, 1);
			}
			iLocal_154 = 1;
			iLocal_563 = 0;
			break;
		
		case 1:
			switch (iLocal_561)
			{
				case 0:
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						func_371();
						if ((!GlobalFunc_111() && GlobalFunc_115(iLocal_155)) && GlobalFunc_10618(&uLocal_164, "DREY1AU", "DREY1_RCM_LI", 8, 0, 0, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, -1, 0, 2);
							iLocal_561++;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						func_371();
						if (!GlobalFunc_111() && func_366(1, 1093140480, 0))
						{
							if (GlobalFunc_115(iLocal_155))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_155, sLocal_163, 0, 0, 0);
							}
							GlobalFunc_8954();
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x48621C9FCA3EBD28(4);
							GlobalFunc_7621(99, 1, 0, 1, 0);
							iLocal_561++;
						}
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						if (GlobalFunc_7091(GlobalFunc_625(), 1))
						{
							GlobalFunc_9628(-1457.842f, 485.8195f, 114.2016f, -1474.227f, 482.811f, 117.2016f, 3f, Local_539, fLocal_542, 1, 1, 1, 0, 0);
							GlobalFunc_9628(-1473.984f, 510.0452f, 114.6034f, -1474.227f, 482.811f, 118.2016f, 4f, Local_539, fLocal_542, 1, 1, 1, 0, 0);
							GlobalFunc_9628(-1472.341f, 508.3621f, 114.6158f, -1475.958f, 520.1589f, 120.0448f, 10f, Local_539, fLocal_542, 1, 1, 1, 0, 0);
							GlobalFunc_10606(Local_539, fLocal_542, 0, 145);
						}
						else
						{
							GlobalFunc_9628(-1457.842f, 485.8195f, 114.2016f, -1474.227f, 482.811f, 117.2016f, 3f, Local_543, fLocal_546, 1, 1, 1, 0, 0);
							GlobalFunc_9628(-1473.984f, 510.0452f, 114.6034f, -1474.227f, 482.811f, 118.2016f, 4f, Local_543, fLocal_546, 1, 1, 1, 0, 0);
							GlobalFunc_9628(-1472.341f, 508.3621f, 114.6158f, -1475.958f, 520.1589f, 120.0448f, 10f, Local_543, fLocal_546, 1, 1, 1, 0, 0);
							GlobalFunc_10606(Local_543, fLocal_546, 0, 145);
						}
						func_309(-1477f, 496.8f, 117.4f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						FIRE::STOP_FIRE_IN_RANGE(-1477f, 496.8f, 117.4f, 30f);
						MISC::CLEAR_AREA_OF_VEHICLES(-1473.376f, 517.8441f, 116.8854f, 30f, 0, 0, 0, 0, 0);
						GlobalFunc_79(500, 0);
						iLocal_561++;
					}
					break;
				
				case 3:
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_154 = 2;
					}
					else
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dreyfuss", 0) && GlobalFunc_115(iLocal_155))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_155, -1475.366f, 500.3797f, 116.6013f, 3f, 20000, 0.25f, 1, 1193033728);
						}
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_301(1, 1, 1, 1);
			GlobalFunc_4923(&Local_85, 0, 1);
			func_279(1);
			break;
		
		default:
			break;
	}
}

void func_301(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28125
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_309(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x283CF
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

























































int func_366(int iParam0, float fParam1, int iParam2)//Position - 0x2C159
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_113(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
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





void func_371()//Position - 0x2C455
{
	GlobalFunc_8320();
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	if (iLocal_563 == 0)
	{
		if (GlobalFunc_115(iLocal_155))
		{
			if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), iLocal_155, 1) < 3f)
			{
				iLocal_563 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 0);
			}
		}
	}
}








void func_379(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2C673
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
















void func_395(int iParam0)//Position - 0x2D08E
{
	func_409(1, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_408();
	GlobalFunc_4948(&uLocal_548, 0, 0);
	GlobalFunc_4956();
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		func_407(1, 1, 1);
	}
	MISC::CLEAR_AREA(-1462.177f, 485.6856f, 115.2016f, 200f, 1, 0, 0, 0);
	if (!GlobalFunc_188())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		GlobalFunc_4965(PLAYER::PLAYER_PED_ID(), -1462.177f, 485.6856f, 115.2016f, 97.1913f, 0, 1);
	}
	GlobalFunc_6689(&iLocal_160);
	GlobalFunc_69(&iLocal_155);
	GlobalFunc_6689(&(Local_85.f_35[0]));
	func_298();
	func_401();
	func_400();
	if (!GlobalFunc_188())
	{
		GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 12, 5000, 0, 0);
	}
	GlobalFunc_4967(0, -1, 1);
	if (iParam0 == 1)
	{
		if (GlobalFunc_115(iLocal_155))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_155, -1475.366f, 500.3797f, 116.6013f, 3f, 20000, 0.25f, 1, 1193033728);
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
		}
		SYSTEM::WAIT(500);
	}
	func_396(1, 0, 1);
	func_279(iParam0);
}

void func_396(int iParam0, int iParam1, int iParam2)//Position - 0x2D1B8
{
	func_301(0, 0, iParam2, 1);
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




void func_400()//Position - 0x2D32D
{
	if (!GlobalFunc_115(Local_85.f_35[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_162);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_162))
		{
			SYSTEM::WAIT(0);
		}
		Local_85.f_35[0] = VEHICLE::CREATE_VEHICLE(iLocal_162, Local_81, fLocal_84, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_162);
	}
	if (GlobalFunc_115(Local_85.f_35[0]))
	{
		VEHICLE::_0x0AD9E8F87FF7C16F(Local_85.f_35[0], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_85.f_35[0], 1);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_85.f_35[0], "DR3YFU55");
	}
}

void func_401()//Position - 0x2D3AC
{
	if (!GlobalFunc_115(iLocal_155))
	{
		while (!GlobalFunc_7189(&iLocal_155, 68, -1472.9f, 483.3f, 115.2f, 75f, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_115(iLocal_155))
	{
		GlobalFunc_1286(&uLocal_164, 3, iLocal_155, "DREYFUSS", 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_155, 177, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_155, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_155, 1, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_155, 1);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_155, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_155, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_155, 281, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_155, 42, 1);
	}
}






void func_407(bool bParam0, int iParam1, int iParam2)//Position - 0x2D61C
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
			func_301(iParam1, iParam2, 1, 1);
		}
	}
}

void func_408()//Position - 0x2D67B
{
	int iVar0;
	
	sLocal_372[0] = "DREY1_BUMP_1";
	sLocal_372[1] = "DREY1_BUMP_2";
	sLocal_372[2] = "DREY1_BUMP_3";
	sLocal_372[3] = "DREY1_BUMP_4";
	sLocal_372[4] = "DREY1_BUMP_5";
	sLocal_372[5] = "DREY1_BUMP_6";
	sLocal_372[6] = "DREY1_BUMP_7";
	sLocal_334[0] = "DREY1_CHASE0_1";
	sLocal_334[1] = "DREY1_CHASE0_2";
	sLocal_334[2] = "DREY1_CHASE0_3";
	sLocal_334[3] = "DREY1_CHASE0_4";
	sLocal_334[4] = "DREY1_CHASE0_5";
	sLocal_340[0] = "DREY1_CHASE1_1";
	sLocal_340[1] = "DREY1_CHASE1_2";
	sLocal_340[2] = "DREY1_CHASE1_3";
	sLocal_340[3] = "DREY1_CHASE1_4";
	sLocal_340[4] = "DREY1_CHASE1_5";
	sLocal_340[5] = "DREY1_CHASE1_6";
	sLocal_340[6] = "DREY1_CHASE1_7";
	sLocal_340[7] = "DREY1_CHASE1_8";
	sLocal_340[8] = "DREY1_CHASE1_9";
	sLocal_340[9] = "DREY1_CHASE1_10";
	sLocal_340[10] = "DREY1_CHASE1_11";
	sLocal_340[11] = "DREY1_CHASE1_12";
	sLocal_340[12] = "DREY1_CHASE1_13";
	sLocal_340[13] = "DREY1_CHASE1_14";
	sLocal_340[14] = "DREY1_CHASE1_15";
	sLocal_340[15] = "DREY1_CHASE1_16";
	sLocal_340[16] = "DREY1_CHASE1_17";
	sLocal_340[17] = "DREY1_CHASE1_18";
	sLocal_340[18] = "DREY1_CHASE1_19";
	sLocal_340[19] = "DREY1_CHASE1_20";
	sLocal_340[20] = "DREY1_CHASE1_21";
	sLocal_340[21] = "DREY1_CHASE1_22";
	sLocal_340[22] = "DREY1_CHASE1_23";
	sLocal_340[23] = "DREY1_CHASE1_24";
	sLocal_340[24] = "DREY1_CHASE1_25";
	sLocal_340[25] = "DREY1_CHASE1_26";
	sLocal_340[26] = "DREY1_CHASE1_27";
	sLocal_340[27] = "DREY1_CHASE1_28";
	sLocal_340[28] = "DREY1_CHASE1_29";
	sLocal_340[29] = "DREY1_CHASE1_30";
	sLocal_340[30] = "DREY1_CHASE1_31";
	sLocal_380[0] = "DREY1_CHASE2_1";
	sLocal_380[1] = "DREY1_CHASE2_2";
	sLocal_380[2] = "DREY1_CHASE2_3";
	sLocal_380[3] = "DREY1_CHASE2_4";
	sLocal_380[4] = "DREY1_CHASE2_5";
	sLocal_380[5] = "DREY1_CHASE2_6";
	sLocal_380[6] = "DREY1_CHASE2_7";
	sLocal_380[7] = "DREY1_CHASE2_8";
	sLocal_380[8] = "DREY1_CHASE2_9";
	sLocal_380[9] = "DREY1_CHASE2_10";
	sLocal_380[10] = "DREY1_CHASE2_11";
	sLocal_380[11] = "DREY1_CHASE2_12";
	sLocal_380[12] = "DREY1_CHASE2_13";
	sLocal_380[13] = "DREY1_CHASE2_14";
	sLocal_380[14] = "DREY1_CHASE2_15";
	sLocal_380[15] = "DREY1_CHASE2_16";
	sLocal_380[16] = "DREY1_CHASE2_17";
	sLocal_380[17] = "DREY1_CHASE2_18";
	sLocal_380[18] = "DREY1_CHASE2_19";
	sLocal_380[19] = "DREY1_CHASE2_20";
	sLocal_380[20] = "DREY1_CHASE2_21";
	sLocal_380[21] = "DREY1_CHASE2_22";
	sLocal_380[22] = "DREY1_CHASE2_23";
	sLocal_380[23] = "DREY1_CHASE2_24";
	sLocal_380[24] = "DREY1_CHASE2_25";
	sLocal_380[25] = "DREY1_CHASE2_26";
	sLocal_380[26] = "DREY1_CHASE2_27";
	sLocal_380[27] = "DREY1_CHASE2_28";
	sLocal_380[28] = "DREY1_CHASE2_29";
	sLocal_380[29] = "DREY1_CHASE2_30";
	sLocal_380[30] = "DREY1_CHASE2_31";
	sLocal_380[31] = "DREY1_CHASE2_32";
	sLocal_413[0] = "DREY1_SHOOT_1";
	sLocal_413[1] = "DREY1_SHOOT_2";
	sLocal_413[2] = "DREY1_SHOOT_3";
	sLocal_417[0] = "DREY1_HURT_1";
	sLocal_417[1] = "DREY1_HURT_2";
	sLocal_417[2] = "DREY1_HURT_3";
	sLocal_417[3] = "DREY1_HURT_4";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_508[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_502[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_461[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_429[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_423[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iLocal_469[iVar0] = 0;
		iVar0++;
	}
	bLocal_506 = false;
	iLocal_331 = 0;
	bLocal_507 = false;
	iLocal_536 = 0;
	iLocal_519 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
	iLocal_524 = 0;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_513 = 0;
	iLocal_514 = 0;
	iLocal_157 = 0;
	iLocal_517 = 0;
	iLocal_518 = 0;
	iLocal_547 = 0;
	sLocal_422 = "DREY1_WRECK";
}

void func_409(bool bParam0, bool bParam1)//Position - 0x2DAE3
{
	if (bParam0)
	{
		func_407(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_309(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}



void func_412()//Position - 0x2DBD5
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_80, 1);
	func_408();
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DREY1", 0);
	GlobalFunc_1286(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_401();
	func_400();
}


void func_414(int iParam0)//Position - 0x2DC42
{
	PATHFIND::SET_ROADS_IN_AREA(-1594.9f, 457.8715f, -100f, -1366.784f, 635.579f, 900f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1473.517f, 508f, 115.601f, -1471.017f, 514.829f, 120f, iParam0, 1);
}

var func_415()//Position - 0x2DC94
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-1495.496f, 519.4606f, 100.8889f, -1429.111f, 468.1972f, 120.9696f, 0, 1, 1, 1);
}

int func_416(var uParam0)//Position - 0x2DCC2
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = iLocal_80;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1457.251f, 475.8258f, 114.2015f };
			uParam0->f_17[1 /*3*/] = { -1460.402f, 490.4705f, 118.601f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "paper_1_RCM_alt1", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmcollect_paperleadinout@", "meditiate_idle", 0);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!func_418(&(uParam0->f_28[0]), 68, -1459.68f, 485.26f, 116.22f, -131.3f, "DREYFUSS LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], Local_81, fLocal_84);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "DR3YFU55");
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_80, 1);
				}
			}
			if (bVar4)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			GlobalFunc_7621(99, 1, 0, 1, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 50f, 0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1471.166f, 510.6191f, 115.8419f, 4f, 0, 0, 0, 0, 0);
			func_414(0);
			return 1;
			break;
	}
	return 0;
}


int func_418(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)//Position - 0x2DF16
{
	if (GlobalFunc_7189(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				PED::SET_PED_MONEY(*uParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}






void func_424()//Position - 0x2E051
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		func_435();
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_560, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_80, 0);
	GlobalFunc_7621(99, 0, 1, 1, 0);
	GlobalFunc_129(&iLocal_564, 0);
	GlobalFunc_8956(&Local_85, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}











void func_435()//Position - 0x2E26A
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_4948(&uLocal_548, 0, 0);
	func_414(1);
	GlobalFunc_200(&uLocal_164, 1);
	GlobalFunc_200(&uLocal_164, 3);
	GlobalFunc_146(&iLocal_156);
	if (GlobalFunc_4924(iLocal_155))
	{
		PED::SET_PED_KEEP_TASK(iLocal_155, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_155, 0);
	}
	GlobalFunc_132(&iLocal_155, 1, 0, 1);
	GlobalFunc_131(&iLocal_160);
	GlobalFunc_5105();
	PATHFIND::SET_ROADS_IN_AREA(Local_146, Local_146.f_3, 1, 1);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_329);
}




























