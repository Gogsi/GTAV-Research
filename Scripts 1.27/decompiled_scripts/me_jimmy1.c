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
	var uLocal_41 = -1;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 1000;
	var uLocal_49 = 1000;
	var uLocal_50 = 0;
	struct<4> Local_51[10];
	bool bLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 16;
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
	char* sLocal_271 = NULL;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	char* sLocal_274 = NULL;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	char* sLocal_280 = NULL;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	struct<3> Local_295 = { 0, 0, 0 } ;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	char* sLocal_300[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	bool bLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	char* sLocal_324[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	char* sLocal_333[3] = { NULL, NULL, NULL };
	char* sLocal_337[3] = { NULL, NULL, NULL };
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	char* sLocal_344[3] = { NULL, NULL, NULL };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	char* sLocal_350[4] = { NULL, NULL, NULL, NULL };
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	char* sLocal_358[12] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = 0;
	struct<3> Local_376 = { 0, 0, 0 } ;
	struct<3> Local_379 = { 0, 0, 0 } ;
	struct<3> Local_382 = { 0, 0, 0 } ;
	float fLocal_385 = 0f;
	float fLocal_386 = 0f;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	int iLocal_393[3] = { 0, 0, 0 };
	int iLocal_397[3] = { 0, 0, 0 };
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	struct<3> Local_404 = { 0, 0, 0 } ;
	float fLocal_407 = 0f;
	struct<3> Local_408 = { 0, 0, 0 } ;
	struct<3> Local_411 = { 0, 0, 0 } ;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	struct<3> Local_423 = { 0, 0, 0 } ;
	struct<3> Local_426 = { 0, 0, 0 } ;
	struct<3> Local_429 = { 0, 0, 0 } ;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	bool bLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	struct<3> Local_441 = { 0, 0, 0 } ;
	struct<3> Local_444 = { 0, 0, 0 } ;
	float fLocal_447 = 0f;
	struct<3> Local_448 = { 0, 0, 0 } ;
	float fLocal_451 = 0f;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	float fLocal_454 = 0f;
	var uLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	var uLocal_458 = 0;
	char* sLocal_459 = NULL;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	char[] cLocal_465[8] = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
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
	iLocal_96 = 1;
	iLocal_97 = 65;
	iLocal_98 = 49;
	iLocal_99 = 64;
	uLocal_104 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_105 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_271 = "missmej1ig_1";
	sLocal_274 = "seat_pside_r";
	iLocal_275 = 115;
	iLocal_278 = -1;
	iLocal_279 = -1;
	Local_286 = { -814.3175f, 179.0176f, 71.15919f };
	Local_289 = { -806.1814f, 184.2898f, 71.34769f };
	Local_292 = { -801.9036f, 182.9307f, 71.6055f };
	Local_295 = { -1368.279f, 355.9018f, 63.08109f };
	iLocal_309 = -1;
	iLocal_310 = -1;
	iLocal_311 = -1;
	iLocal_314 = 1;
	iLocal_315 = 1;
	iLocal_316 = 1;
	iLocal_322 = -1;
	iLocal_374 = 1;
	bLocal_375 = true;
	Local_376 = { -2271.74f, 1070.36f, 198.2f };
	Local_379 = { -825.5035f, 179.0266f, 70.36901f };
	Local_382 = { -1378.445f, 367.812f, 63.0445f };
	fLocal_385 = 800f;
	fLocal_386 = 100f;
	iLocal_401 = joaat("a_m_m_genfat_01");
	iLocal_403 = joaat("landstalker");
	Local_404 = { -2271.74f, 1070.36f, 198.2f };
	fLocal_407 = 135.06f;
	Local_408 = { -2223.216f, 1009.275f, 163.5117f };
	Local_411 = { -2226.588f, 1147.933f, 270.9565f };
	Local_414 = { -2269.847f, 891.1068f, 192.3028f };
	Local_417 = { -2161.119f, 1225.727f, 500.5435f };
	Local_420 = { -2402.329f, 1057.229f, 189.9754f };
	Local_423 = { -2410.82f, 1005.26f, 200.8591f };
	Local_426 = { -2328.859f, 892.1643f, 196.7366f };
	Local_429 = { -2333.412f, 1221.693f, 495.6477f };
	fLocal_432 = 90f;
	fLocal_433 = 200f;
	iLocal_434 = 1;
	iLocal_435 = 1;
	iLocal_437 = 1;
	Local_441 = { -826.6968f, 178.0209f, 69.18726f };
	Local_444 = { -817.7529f, 185.9504f, 72.3539f };
	fLocal_447 = 7f;
	Local_448 = { -826f, 157.66f, 69.06f };
	fLocal_451 = 273.51f;
	fLocal_454 = 0f;
	iLocal_457 = joaat("tailgater");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_446(1);
	}
	MISC::SET_MISSION_FLAG(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_PO", 0);
		switch (iLocal_387)
		{
			case 0:
				func_370();
				break;
			
			case 1:
				func_362();
				break;
			
			case 2:
				func_316();
				break;
			
			case 3:
				func_236();
				break;
			
			case 4:
				func_233();
				break;
			
			case 5:
				func_212();
				break;
			
			case 6:
				func_202();
				break;
			
			case 7:
				func_62();
				break;
			
			case 8:
				func_37();
				break;
		}
		func_3();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x33D
{
	int iVar0;
	
	if (iLocal_387 == 8)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_393[iVar0]))
		{
			if (PED::IS_PED_INJURED(uLocal_393[iVar0]))
			{
				func_2(5);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x386
{
	iLocal_389 = iParam0;
	iLocal_387 = 8;
	iLocal_388 = 0;
}

void func_3()//Position - 0x39C
{
	var uVar0;
	
	if (iLocal_387 == 8)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_391) && PED::IS_PED_INJURED(iLocal_391))
	{
		func_2(2);
	}
	else if (GlobalFunc_4924(iLocal_391) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_391, 1), 2f) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, ENTITY::GET_ENTITY_COORDS(iLocal_391, 1), 2f))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_391, 1);
			PED::SET_PED_TO_RAGDOLL(iLocal_391, 500, 1000, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_391, 99);
			ENTITY::SET_ENTITY_COLLISION(iLocal_391, 1, 0);
			func_2(2);
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_391, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_391, 0, 2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_391))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_391);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_391, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4416);
				}
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				func_2(1);
			}
		}
		else
		{
			if (GlobalFunc_115(iLocal_402) && (((((PED::IS_PED_IN_VEHICLE(iLocal_391, iLocal_402, 0) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_391, sLocal_271, "back", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_391, sLocal_271, "base", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_391, sLocal_271, "enter_back", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_391, sLocal_271, "enter_backseat", 2)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_391, sLocal_271, "exit_back", 2)))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_402))
				{
					func_2(1);
				}
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_391, 50f)) && func_33(iLocal_391, 1126825984)) && func_24(PLAYER::PLAYER_PED_ID(), iLocal_391, 90f, 1, 250, 7))
			{
				if (iLocal_355 < 4 && MISC::GET_GAME_TIMER() > iLocal_349)
				{
					GlobalFunc_4956();
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_INJURE", sLocal_350[iLocal_355], 7, 0, 0))
						{
							iLocal_355++;
							iLocal_349 = MISC::GET_GAME_TIMER() + 9000;
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_391, -1519143300) != 1)
				{
					TASK::TASK_HANDS_UP(iLocal_391, -1, 0, -1, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_391, -1519143300) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_391);
			}
		}
	}
}





















bool func_24(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE7E
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_32(iParam0, iParam1);
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
		iVar4 = func_27();
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



int func_27()//Position - 0x1130
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





int func_32(int iParam0, int iParam1)//Position - 0x1286
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

bool func_33(int iParam0, float fParam1)//Position - 0x12C5
{
	return func_24(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}




void func_37()//Position - 0x133D
{
	char* sVar0;
	
	switch (iLocal_388)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_390);
			GlobalFunc_4956();
			iLocal_438 = 1;
			if (iLocal_389 == 1)
			{
				iLocal_438 = 0;
				iLocal_456 = -1;
			}
			switch (iLocal_389)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "MEJ1_FAIL4";
					break;
				
				case 2:
					sVar0 = "MEJ1_FAIL1";
					break;
				
				case 3:
					sVar0 = "MEJ1_FAIL2";
					break;
				
				case 4:
					sVar0 = "MEJ1_FAIL3";
					break;
				
				case 5:
					sVar0 = "MEJ1_FAIL5";
					break;
			}
			if (iLocal_389 == 0)
			{
				GlobalFunc_10616(0);
			}
			else
			{
				GlobalFunc_10835(sVar0);
			}
			iLocal_388 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_40(1, 0);
				func_446(1);
			}
			else if (iLocal_438 == 0)
			{
				if (GlobalFunc_4924(iLocal_391))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_INJURE", 7, 1, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
						{
							iLocal_438 = 1;
						}
					}
				}
			}
			break;
	}
}



void func_40(bool bParam0, bool bParam1)//Position - 0x14BF
{
	int iVar0;
	
	if (bParam0)
	{
		GlobalFunc_69(&iLocal_391);
	}
	else
	{
		if (GlobalFunc_4924(iLocal_391) && PED::IS_PED_IN_GROUP(iLocal_391))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_391);
		}
		if (bParam1)
		{
			GlobalFunc_132(&iLocal_391, 1, 0, 1);
		}
		else if (GlobalFunc_4924(iLocal_391) && ENTITY::IS_ENTITY_AT_COORD(iLocal_391, Local_379, 50f, 50f, 50f, 0, 1, 0))
		{
			func_44(iLocal_391);
		}
		else
		{
			GlobalFunc_132(&iLocal_391, 1, 0, 1);
		}
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			GlobalFunc_69(&(uLocal_393[iVar0]));
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			GlobalFunc_132(&(uLocal_393[iVar0]), 1, 0, 1);
			iVar0++;
		}
	}
	GlobalFunc_146(&iLocal_390);
	AUDIO::STOP_AUDIO_SCENES();
	if (GlobalFunc_4947(iLocal_402))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_402, 0);
	}
	if (bParam0)
	{
		GlobalFunc_7517(&iLocal_402);
	}
	else
	{
		GlobalFunc_190(&iLocal_402);
	}
}




int func_44(int iParam0)//Position - 0x16BF
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


















void func_62()//Position - 0x27C2
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
	{
		PED::SET_PED_RESET_FLAG(iLocal_391, 60, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_388)
		{
			case 0:
				GlobalFunc_5105();
				GlobalFunc_5744();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				}
				GlobalFunc_146(&iLocal_390);
				func_81(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_391, -1, 2050, 4);
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_391, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_295, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				}
				if (GlobalFunc_4924(iLocal_391) && PED::IS_PED_IN_GROUP(iLocal_391))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_391);
				}
				iLocal_456 = -1;
				bLocal_299 = false;
				if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) || (PED::IS_PED_IN_ANY_VEHICLE(iLocal_391, 1) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_391))) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(iLocal_391))
				{
					GlobalFunc_2350(500, 1);
					SYSTEM::WAIT(1000);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), -1374.11f, 363.81f, 64.25f, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.46f);
					if (GlobalFunc_4924(iLocal_391))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_391, -1375.82f, 362.3f, 64.17f, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_391, -49.27f);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_391, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_295, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					GlobalFunc_79(500, 1);
				}
				iLocal_388 = 1;
				break;
			
			case 1:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				if (!GlobalFunc_111())
				{
					if (((GlobalFunc_4947(iLocal_402) && GlobalFunc_4924(iLocal_391)) && PED::IS_PED_IN_VEHICLE(iLocal_391, iLocal_402, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_402, 0))
					{
						if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_HOME2", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
						{
							iLocal_388 = 2;
						}
					}
					else if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_HOME", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
					{
						iLocal_388 = 2;
					}
				}
				if (GlobalFunc_4926(1000))
				{
					bLocal_299 = true;
					GlobalFunc_2350(500, 1);
					iLocal_388 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
					if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_PAUSE(0, 6500);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_295, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar3);
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						iLocal_298 = MISC::GET_GAME_TIMER() + 25000;
						iLocal_388 = 3;
					}
				}
				else
				{
					iLocal_298 = MISC::GET_GAME_TIMER() + 25000;
					iLocal_388 = 3;
				}
				if (GlobalFunc_4926(1000))
				{
					bLocal_299 = true;
					GlobalFunc_2350(500, 1);
					iLocal_388 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					bLocal_299 = true;
				}
				if (((!GlobalFunc_111() && GlobalFunc_4568(iLocal_391, Local_295, 4f)) || bLocal_299) || MISC::GET_GAME_TIMER() > iLocal_298)
				{
					if (bLocal_299)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						SYSTEM::WAIT(1000);
					}
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_69(&iLocal_391);
					GlobalFunc_79(500, 1);
					func_66(1, 1, 1, 1);
					func_63();
				}
				break;
			}
	}
}

void func_63()//Position - 0x2C40
{
	GlobalFunc_5103(0, 0);
	func_446(0);
}



void func_66(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D67
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















void func_81(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x32BE
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

























































































































void func_202()//Position - 0x1F6E5
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
	{
		PED::SET_PED_RESET_FLAG(iLocal_391, 60, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		switch (iLocal_388)
		{
			case 0:
				GlobalFunc_5105();
				GlobalFunc_5744();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				}
				GlobalFunc_146(&iLocal_390);
				func_81(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				else
				{
					GlobalFunc_9805(Local_441, Local_444, fLocal_447, Local_448, fLocal_451, GlobalFunc_625(), 1, 1, 1, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_391, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_292, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				}
				if (GlobalFunc_4924(iLocal_391) && PED::IS_PED_IN_GROUP(iLocal_391))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_391);
				}
				iLocal_456 = -1;
				bLocal_299 = false;
				iLocal_388 = 1;
				break;
			
			case 1:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
				}
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_391, 5f))
					{
						if (((GlobalFunc_4947(iLocal_402) && GlobalFunc_4924(iLocal_391)) && PED::IS_PED_IN_VEHICLE(iLocal_391, iLocal_402, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_402, 0))
						{
							if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_HOME2", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
							{
								iLocal_388 = 2;
							}
						}
						else if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_HOME", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_456, 5000))
						{
							iLocal_388 = 2;
						}
					}
				}
				if (GlobalFunc_4926(1000))
				{
					bLocal_299 = true;
					GlobalFunc_2350(500, 1);
					iLocal_388 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_4947(iVar0))
				{
					GlobalFunc_530(iVar0, 1093140480, 1, 1056964608, 0, 1);
					if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_PAUSE(0, 6500);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_292, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_391, uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						iLocal_298 = MISC::GET_GAME_TIMER() + 25000;
						iLocal_388 = 3;
					}
				}
				else
				{
					iLocal_298 = MISC::GET_GAME_TIMER() + 25000;
					iLocal_388 = 3;
				}
				if (GlobalFunc_4926(1000))
				{
					bLocal_299 = true;
					GlobalFunc_2350(500, 1);
					iLocal_388 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					bLocal_299 = true;
				}
				if (((!GlobalFunc_111() && (GlobalFunc_4568(iLocal_391, Local_286, 2f) || GlobalFunc_4568(iLocal_391, Local_289, 2f))) || bLocal_299) || MISC::GET_GAME_TIMER() > iLocal_298)
				{
					if (bLocal_299)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (GlobalFunc_4924(iLocal_391))
						{
							TASK::CLEAR_PED_TASKS(iLocal_391);
							ENTITY::SET_ENTITY_COORDS(iLocal_391, Local_292, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_391, 90f);
						}
						SYSTEM::WAIT(1000);
					}
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_79(500, 1);
					func_66(1, 1, 1, 1);
					func_63();
				}
				break;
			}
	}
}










void func_212()//Position - 0x20456
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_458, &uLocal_106, "MEJ1AUD", &sLocal_459, &cLocal_465);
	switch (iLocal_388)
	{
		case 0:
			GlobalFunc_146(&iLocal_390);
			GlobalFunc_164("MEJ1_06", 7500, 1);
			GlobalFunc_2370(&uLocal_458);
			if (GlobalFunc_4924(iLocal_391) && !PED::IS_PED_GROUP_MEMBER(iLocal_391, GlobalFunc_468()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_391, GlobalFunc_468());
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_391, 0);
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_391, 1);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_391, 0);
			}
			iLocal_388 = 1;
			break;
		
		case 1:
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
			{
				func_223();
				func_219();
				func_218();
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_388 = 0;
					iLocal_387 = 3;
				}
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) > 15f)
				{
					GlobalFunc_4956();
					iLocal_388 = 0;
					iLocal_387 = 4;
				}
			}
			break;
	}
	func_213();
	if (GlobalFunc_4924(iLocal_391))
	{
		PED::SET_PED_RESET_FLAG(iLocal_391, 124, 1);
	}
}

void func_213()//Position - 0x20559
{
	if (GlobalFunc_4924(iLocal_391) && GlobalFunc_4947(iLocal_402))
	{
		switch (iLocal_273)
		{
			case 0:
				if (iLocal_276 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7))
				{
					iLocal_273 = 15;
				}
				break;
			
			case 2:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "enter_back", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				iLocal_321 = 0;
				iLocal_322 = -1;
				iLocal_273 = 12;
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (iLocal_276 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7))
					{
						iLocal_273 = 14;
					}
					else
					{
						switch (func_215())
						{
							case 0:
								iLocal_273 = 4;
								break;
							
							case 2:
								iLocal_273 = 8;
								break;
							}
						}
				}
				break;
			
			case 4:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "enter_left", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				iLocal_273 = 5;
				break;
			
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.9f)
					{
						uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 1);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "left", 8f, -8f, 4, iLocal_275, 1148846080, 0);
						iLocal_273 = 6;
					}
				}
				break;
			
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (iLocal_276 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7))
					{
						iLocal_273 = 7;
					}
					else
					{
						switch (func_215())
						{
							case 1:
							case 2:
								iLocal_273 = 7;
								break;
							}
						}
				}
				break;
			
			case 7:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "exit_left", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				if (iLocal_276 || (GlobalFunc_4947(iLocal_402) && !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7)))
				{
					iLocal_273 = 13;
				}
				else
				{
					iLocal_273 = 12;
				}
				break;
			
			case 8:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "enter_right", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				iLocal_273 = 9;
				break;
			
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.9f)
					{
						uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 1);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "right", 8f, -8f, 4, iLocal_275, 1148846080, 0);
						iLocal_273 = 10;
					}
				}
				break;
			
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (iLocal_276 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7))
					{
						iLocal_273 = 11;
					}
					else
					{
						switch (func_215())
						{
							case 1:
							case 0:
								iLocal_273 = 11;
								break;
							}
						}
				}
				break;
			
			case 11:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "exit_right", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				if (iLocal_276 || !VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_402, 7))
				{
					iLocal_273 = 13;
				}
				else
				{
					iLocal_273 = 12;
				}
				break;
			
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.9f)
					{
						if (iLocal_322 < 0)
						{
							iLocal_321 = 1;
							iLocal_322 = MISC::GET_GAME_TIMER() + 1000;
						}
						uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 1);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "back", 8f, -8f, 4, iLocal_275, 1148846080, 0);
						iLocal_273 = 3;
					}
				}
				break;
			
			case 13:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.7f)
					{
						iLocal_273 = 14;
					}
				}
				break;
			
			case 14:
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "exit_back", 4f, -8f, 4, iLocal_275, 1148846080, 0);
				iLocal_273 = 15;
				break;
			
			case 15:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.95f)
					{
						uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_272, 0f);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
						if (GlobalFunc_4947(iLocal_402))
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
						}
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "enter_backseat", 8f, -8f, 4, iLocal_275, 1148846080, 0);
						iLocal_273 = 16;
					}
				}
				else
				{
					uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 1);
					if (GlobalFunc_4947(iLocal_402))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "enter_backseat", 8f, -8f, 4, iLocal_275, 1148846080, 0);
					iLocal_273 = 16;
				}
				break;
			
			case 16:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_272))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_272) >= 0.85f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_391, -4f, 1);
						func_214(iLocal_391, iLocal_402, 2);
						iLocal_273 = 17;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_391, 1, 0);
					func_214(iLocal_391, iLocal_402, 2);
					iLocal_273 = 17;
				}
				break;
			
			case 17:
				if (PED::IS_PED_IN_VEHICLE(iLocal_391, iLocal_402, 0) && iLocal_276)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_391, 0, 65536);
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					}
					iLocal_273 = 1;
				}
				break;
			}
	}
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0x20CB5
{
	if (GlobalFunc_4924(iParam0))
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

int func_215()//Position - 0x20CF7
{
	struct<3> Var0;
	
	if (GlobalFunc_4947(iLocal_402) && GlobalFunc_155(iLocal_402, PLAYER::PLAYER_PED_ID(), 10f))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_402, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
		if (Var0.f_1 < -1f)
		{
			return 1;
		}
		else if (Var0.x < -1f)
		{
			return 2;
		}
		else if (Var0.x > 1f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}



void func_218()//Position - 0x20DD0
{
	int iVar0;
	
	if (GlobalFunc_4924(iLocal_391))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_391, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_391, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_391, 0, 4416);
				}
			}
		}
	}
}

void func_219()//Position - 0x20E21
{
	if ((iLocal_348 < 3 && MISC::GET_GAME_TIMER() > iLocal_342) && (func_222() || func_221()))
	{
		if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_343++;
			if (iLocal_343 > 60)
			{
				if (!GlobalFunc_111() && func_220())
				{
					if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_STILL", sLocal_344[iLocal_348], 7, 0, 0))
					{
						iLocal_348++;
						iLocal_343 = 0;
						iLocal_342 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
		}
		else
		{
			iLocal_343 = 0;
		}
	}
}

int func_220()//Position - 0x20EB5
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		return 1;
	}
	return 0;
}

int func_221()//Position - 0x20ED8
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_391, 0))
	{
		return 0;
	}
	return 1;
}

int func_222()//Position - 0x20EFF
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0) && PED::IS_PED_IN_VEHICLE(iLocal_391, iVar0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_223()//Position - 0x20F3B
{
	int iVar0;
	bool bVar1;
	
	if ((iLocal_331 < 6 && MISC::GET_GAME_TIMER() > iLocal_323) && func_222())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_4947(iVar0))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
				{
					bVar1 = false;
					if (func_220())
					{
						bVar1 = GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_CRASH", sLocal_324[iLocal_331], 7, 0, 0);
					}
					else
					{
						bVar1 = GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_CRASH", sLocal_324[iLocal_331], 7, 1, 0);
					}
					if (bVar1)
					{
						iLocal_331++;
						iLocal_323 = MISC::GET_GAME_TIMER() + 9000;
					}
				}
			}
		}
	}
}










void func_233()//Position - 0x212F4
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_458, &uLocal_106, "MEJ1AUD", &sLocal_459, &cLocal_465);
	switch (iLocal_388)
	{
		case 0:
			GlobalFunc_146(&iLocal_390);
			iLocal_390 = GlobalFunc_4955(iLocal_391, 1, 1, 5);
			if (iLocal_435)
			{
				GlobalFunc_164("MEJ1_05", 7500, 1);
				GlobalFunc_2370(&uLocal_458);
				iLocal_435 = 0;
			}
			iLocal_388 = 1;
			break;
		
		case 1:
			func_218();
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) < 5f)
				{
					HUD::CLEAR_THIS_PRINT("MEJ1_05");
					iLocal_388 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_387 = 3;
					}
					else
					{
						iLocal_387 = 5;
					}
				}
			}
			break;
	}
	func_234();
}

void func_234()//Position - 0x213B3
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) > fLocal_385)
		{
			if (iLocal_387 == 2 && iLocal_388 == 1)
			{
				func_2(3);
			}
			else
			{
				func_2(4);
			}
		}
	}
}


void func_236()//Position - 0x21455
{
	GlobalFunc_502();
	GlobalFunc_10868(&uLocal_458, &uLocal_106, "MEJ1AUD", &sLocal_459, &cLocal_465);
	switch (iLocal_388)
	{
		case 0:
			GlobalFunc_146(&iLocal_390);
			if (GlobalFunc_5899() == 1)
			{
				iLocal_390 = GlobalFunc_2324(Local_382, 5, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_382 - Vector(10f, 10f, 10f), Local_382 + Vector(10f, 10f, 10f), 0, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_382, 10f, 0, 0, 0, 0, 0);
			}
			else
			{
				iLocal_390 = GlobalFunc_2324(Local_379, 5, 1);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
			}
			if (iLocal_434)
			{
				GlobalFunc_164("MEJ1_04", 7500, 1);
				GlobalFunc_2370(&uLocal_458);
				AUDIO::START_AUDIO_SCENE("M_E_JIMMY_DRIVE_HOME");
				iLocal_434 = 0;
				iLocal_435 = 1;
				iLocal_355 = 0;
				iLocal_277 = 0;
			}
			if (GlobalFunc_4924(iLocal_391) && !PED::IS_PED_GROUP_MEMBER(iLocal_391, GlobalFunc_468()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_391, GlobalFunc_468());
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_391, 0);
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_391, 1);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_391, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_391, 1, 0, 0, 0, 1, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL(iLocal_391, 1);
			}
			GlobalFunc_11043(2, "Drive Home", 1, 0, 0, 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_388 = 1;
			break;
		
		case 1:
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
			{
				func_243();
				func_242();
				func_241();
				func_223();
				func_219();
				func_240();
				func_239();
				func_238();
				func_218();
				func_237();
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) > 15f)
				{
					GlobalFunc_4956();
					iLocal_388 = 0;
					iLocal_387 = 4;
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_388 = 0;
					iLocal_387 = 5;
				}
			}
			break;
	}
	func_213();
	func_234();
}

void func_237()//Position - 0x21634
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (GlobalFunc_5899() == 1)
	{
		Var0 = { Local_382 };
	}
	else
	{
		Var0 = { Local_379 };
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
			iLocal_388 = 0;
			if (GlobalFunc_5899() == 1)
			{
				iLocal_387 = 7;
			}
			else
			{
				iLocal_387 = 6;
			}
		}
	}
}

void func_238()//Position - 0x216E9
{
	int iVar0;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && MISC::GET_GAME_TIMER() > iLocal_373)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar0 != iLocal_372)
			{
				if (GlobalFunc_4947(iLocal_372))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_372);
				}
				iLocal_372 = iVar0;
			}
		}
		iLocal_373 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_239()//Position - 0x21748
{
	if (MISC::GET_GAME_TIMER() > iLocal_356)
	{
		if ((!GlobalFunc_111() && func_220()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_SHOOT", 7, 0, 0, 0))
			{
				iLocal_356 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_240()//Position - 0x21796
{
	if ((iLocal_371 < 12 && MISC::GET_GAME_TIMER() > iLocal_357) && GlobalFunc_4924(uLocal_393[0]))
	{
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), uLocal_393[0]) < 30f)
		{
			if (!GlobalFunc_111() && func_220())
			{
				if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_FLEE", sLocal_358[iLocal_371], 7, 0, 0))
				{
					iLocal_371++;
					iLocal_357 = MISC::GET_GAME_TIMER() + 9000;
				}
			}
		}
	}
}

void func_241()//Position - 0x21818
{
	bool bVar0;
	
	if ((iLocal_341 < 3 && MISC::GET_GAME_TIMER() > iLocal_332) && (func_222() || func_221()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if (bLocal_375)
			{
				bVar0 = false;
				if (func_220())
				{
					bVar0 = GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_NOKILL", sLocal_337[iLocal_341], 7, 0, 0);
				}
				else
				{
					bVar0 = GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_NOKILL", sLocal_337[iLocal_341], 7, 1, 0);
				}
				if (bVar0)
				{
					iLocal_341++;
					iLocal_332 = MISC::GET_GAME_TIMER() + 9000;
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				}
			}
			else if (!GlobalFunc_111())
			{
				if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_HITKILL", sLocal_333[iLocal_341], 7, 0, 0))
				{
					iLocal_341++;
					iLocal_332 = MISC::GET_GAME_TIMER() + 9000;
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				}
			}
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
	}
}

void func_242()//Position - 0x21901
{
	if (iLocal_277 == 0)
	{
		if (((iLocal_279 == -1 && !GlobalFunc_111()) && func_220()) && func_222())
		{
			if (iLocal_279 == iLocal_278)
			{
				iLocal_278++;
				iLocal_318 = MISC::GET_GAME_TIMER() + 10000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_318)
			{
				if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_DRIVE1", 7, 0, 0, 0))
				{
					iLocal_279 = iLocal_278;
					iLocal_277 = 2;
				}
			}
		}
	}
	else if (iLocal_277 == 1)
	{
		if (((!GlobalFunc_111() && func_220()) && func_222()) && MISC::GET_GAME_TIMER() > iLocal_318)
		{
			if (GlobalFunc_10626(&uLocal_106, "MEJ1AUD", "MEJ1_DRIVE1", &sLocal_280, 7, 0, 0))
			{
				iLocal_277 = 2;
			}
		}
	}
}

void func_243()//Position - 0x219C5
{
	if (((((iLocal_374 && ENTITY::DOES_ENTITY_EXIST(uLocal_393[0])) && ENTITY::DOES_ENTITY_EXIST(uLocal_393[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_393[2])) && GlobalFunc_4924(iLocal_391)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_THANK", 7, 0, 0, 0))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_374 = 0;
		}
	}
}









































































void func_316()//Position - 0x2895C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	GlobalFunc_10868(&uLocal_458, &uLocal_106, "MEJ1AUD", &sLocal_459, &cLocal_465);
	switch (iLocal_388)
	{
		case 0:
			GlobalFunc_4956();
			GlobalFunc_146(&iLocal_390);
			if ((((GlobalFunc_4947(iLocal_402) && GlobalFunc_4924(uLocal_393[0])) && GlobalFunc_4924(uLocal_393[1])) && GlobalFunc_4924(uLocal_393[2])) && GlobalFunc_4924(iLocal_391))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_402, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_402, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 3)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_393[iVar0], 1);
					iVar0++;
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_391, 1);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_391, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_402, 12f);
				TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_393[0], iLocal_402, 12f, 786468);
				VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_403, 3);
				iLocal_390 = GlobalFunc_5743(iLocal_402, 0, 5);
				GlobalFunc_164("MEJ1_02", 7500, 1);
				GlobalFunc_2370(&uLocal_458);
				GlobalFunc_159("MEJ1_WARN", -1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
					if (GlobalFunc_115(iVar1))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar1, 1);
					}
					GlobalFunc_190(&iVar1);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_GO_TO_JIMMY"))
			{
				AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_GO_TO_JIMMY");
			}
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
			iLocal_309 = -1;
			iLocal_310 = -1;
			iLocal_311 = -1;
			iLocal_317 = 0;
			iLocal_439 = 0;
			bLocal_436 = false;
			bLocal_375 = true;
			bLocal_312 = false;
			iLocal_313 = 0;
			iLocal_314 = 1;
			iLocal_276 = 0;
			iLocal_316 = 1;
			func_359(&uLocal_453, &uLocal_455, &uLocal_452, &fLocal_454);
			fLocal_385 = 800f;
			fLocal_386 = 100f;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			GlobalFunc_11043(1, "Rescue Jimmy", 0, 0, 0, 1);
			iLocal_388 = 1;
			break;
		
		case 1:
			func_355();
			func_353();
			func_351();
			GlobalFunc_4501(iLocal_390, iLocal_391, fLocal_385, 1061158912, 0);
			if (GlobalFunc_4947(iLocal_402) && ENTITY::DOES_ENTITY_EXIST(uLocal_393[0]))
			{
				if (iLocal_321 && MISC::GET_GAME_TIMER() > iLocal_322)
				{
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_402, 1);
					iLocal_321 = 0;
				}
				GlobalFunc_10365(&uLocal_39, iLocal_402, 0, 0, 1, 1, 1);
				if ((((((((((ENTITY::GET_ENTITY_HEALTH(iLocal_402) < 850 || func_329()) || func_327()) || GlobalFunc_6451(iLocal_402, &uLocal_453, &uLocal_455, &uLocal_452, &fLocal_454, 6, 1082130432)) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_402) < 50f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_402) < 50f) || (GlobalFunc_4924(uLocal_393[0]) && !PED::IS_PED_IN_VEHICLE(uLocal_393[0], iLocal_402, 0))) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 2, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 3, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 0, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 1, 5000))
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						GlobalFunc_5744();
					}
					if (GlobalFunc_4924(uLocal_393[0]))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(uLocal_393[0], iLocal_402, 20, 1000);
					}
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_402, 20f, 1, 0);
					STREAMING::REMOVE_ANIM_DICT("missfam3");
					iLocal_388 = 2;
				}
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_402))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_391, 1);
					PED::SET_PED_TO_RAGDOLL(iLocal_391, 500, 1000, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_391, 99);
					func_2(2);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_402))
			{
				STREAMING::REMOVE_ANIM_DICT("missfam3");
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_402))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_391, 1);
					PED::SET_PED_TO_RAGDOLL(iLocal_391, 500, 1000, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_391, 99);
					func_2(2);
				}
			}
			break;
		
		case 2:
			GlobalFunc_4501(iLocal_390, iLocal_391, fLocal_385, 1061158912, 0);
			if (GlobalFunc_4947(iLocal_402))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_402))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (GlobalFunc_4924(uLocal_393[iVar2]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_PAUSE(0, iVar2 * 1000);
							if (PED::IS_PED_IN_VEHICLE(uLocal_393[iVar2], iLocal_402, 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 257);
							}
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_393[iVar2], uVar3);
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
							if (iVar2 == 0 && !func_327())
							{
								GlobalFunc_4956();
								GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_NERD", "MEJ1_NERD_1", 7, 1, 0);
							}
							else if (((iVar2 == 1 && !GlobalFunc_4924(uLocal_393[0])) || ((iVar2 == 2 && !GlobalFunc_4924(uLocal_393[0])) && !GlobalFunc_4924(uLocal_393[1]))) && !func_327())
							{
								GlobalFunc_173(&uLocal_106, 6, uLocal_393[iVar2], "MEJimmyKidnapper2", 1, 1);
								GlobalFunc_4956();
								GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_NERD", "MEJ1_NERD_2", 7, 0, 0);
							}
							else if ((iVar2 == 1 && GlobalFunc_4924(uLocal_393[0])) || (iVar2 == 2 && (GlobalFunc_4924(uLocal_393[0]) || GlobalFunc_4924(uLocal_393[1]))))
							{
								GlobalFunc_7090(uLocal_393[iVar2], 1);
							}
						}
						iVar2++;
					}
					GlobalFunc_146(&iLocal_390);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_402, 0);
					GlobalFunc_4948(&uLocal_39, 0, 0);
					iLocal_371 = 0;
					iLocal_357 = MISC::GET_GAME_TIMER() + 9000;
					if (GlobalFunc_4924(iLocal_391) && (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 2, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 3, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 0, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_402, 1, 5000)))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) > (5f + 1f))
						{
							iLocal_390 = GlobalFunc_4955(iLocal_391, 1, 1, 5);
							GlobalFunc_164("MEJ1_07", 7500, 1);
							GlobalFunc_2370(&uLocal_458);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
							{
								AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
							}
							bLocal_436 = true;
							iLocal_276 = 1;
							iLocal_357 = MISC::GET_GAME_TIMER() + 9000;
							iLocal_388 = 3;
						}
						else
						{
							iLocal_276 = 1;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
							{
								AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
							}
							func_318();
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, 0))
					{
						iLocal_276 = 1;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
						}
						func_318();
					}
					else
					{
						iLocal_390 = GlobalFunc_5743(iLocal_402, 1, 5);
						GlobalFunc_164("MEJ1_03", 7500, 1);
						GlobalFunc_2370(&uLocal_458);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_STOP_KIDNAPPERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_STOP_KIDNAPPERS");
						}
						iLocal_357 = MISC::GET_GAME_TIMER() + 9000;
						iLocal_388 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_240();
			func_317();
			if ((GlobalFunc_4947(iLocal_402) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4924(iLocal_391))
			{
				if (iLocal_437 && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) > fLocal_386)
				{
					GlobalFunc_164("MEJ1_08", 7500, 1);
					GlobalFunc_2370(&uLocal_458);
					iLocal_437 = 0;
				}
				if (bLocal_436)
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) < 5f)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_391);
						func_318();
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_402, 1) < (5f - 1f))
				{
					iLocal_276 = 1;
					func_318();
				}
			}
			break;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_FOCUS_CAM"))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_FOCUS_CAM");
		}
	}
	else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		AUDIO::STOP_AUDIO_SCENE("M_E_JIMMY_FOCUS_CAM");
	}
	if (GlobalFunc_4924(iLocal_391))
	{
		PED::SET_PED_RESET_FLAG(iLocal_391, 249, 1);
		PED::SET_PED_RESET_FLAG(iLocal_391, 248, 1);
		PED::SET_PED_RESET_FLAG(iLocal_391, 124, 1);
	}
	func_213();
	func_234();
}

void func_317()//Position - 0x2911E
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_317)
		{
			if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_HERE", 7, 0, 0, 0))
				{
					iLocal_317 = MISC::GET_GAME_TIMER() + 15000;
				}
			}
		}
	}
}

void func_318()//Position - 0x29177
{
	if (!GlobalFunc_111())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_WHERE", "MEJ1_WHERE_2", 7, 1, 0);
		}
		else
		{
			GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_WHERE", "MEJ1_WHERE_2", 7, 0, 0);
		}
	}
	func_319();
}

void func_319()//Position - 0x291BF
{
	iLocal_357 = MISC::GET_GAME_TIMER() + 9000;
	iLocal_388 = 0;
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_387 = 3;
	}
	else
	{
		iLocal_387 = 5;
	}
}








int func_327()//Position - 0x296A7
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_4947(iLocal_402))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_4947(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((((GlobalFunc_540(iVar1) || iVar1 == joaat("police4")) || iVar1 == joaat("policeold1")) || iVar1 == joaat("policeold2")) || iVar1 == joaat("fbi"))
			{
				if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar0) && GlobalFunc_155(iVar0, iLocal_402, 15f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_329()//Position - 0x2979E
{
	int iVar0;
	
	if (iLocal_439)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_440)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_402, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_402, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_402, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_402, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 > 2)
		{
			iLocal_439 = 1;
			iLocal_440 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	return 0;
}






















void func_351()//Position - 0x2A73A
{
	if (iLocal_311 > 0 && MISC::GET_GAME_TIMER() > iLocal_311)
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
		{
			if ((GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_391) < 50f && !GlobalFunc_111()) && !GlobalFunc_663("MEJ1_02", 0, 0))
			{
				if (iLocal_314)
				{
					if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_DONT", 7, 0, 0, 0))
					{
						iLocal_311 = MISC::GET_GAME_TIMER() + 10000;
						iLocal_314 = 0;
					}
				}
				else if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_CALL", 7, 0, 0, 0))
				{
					iLocal_311 = MISC::GET_GAME_TIMER() + 10000;
				}
			}
		}
	}
}


void func_353()//Position - 0x2A803
{
	bool bVar0;
	
	if ((GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(uLocal_393[0])) && GlobalFunc_4947(iLocal_402))
	{
		if (iLocal_309 == -1 && iLocal_310 == -1)
		{
			if (!bLocal_312)
			{
				bLocal_312 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_402, PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_402, PLAYER::PLAYER_PED_ID(), 1) || bLocal_312)
			{
				GlobalFunc_5744();
				GlobalFunc_4956();
				if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_RAM", "MEJ1_RAM_3", 7, 0, 0))
				{
					iLocal_315 = 1;
					iLocal_309++;
					iLocal_318 = MISC::GET_GAME_TIMER();
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_393[0], iLocal_402, PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 100f, 1f, 1);
					RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					iLocal_273 = 2;
					fLocal_385 = 200f;
					fLocal_386 = 500f;
				}
			}
			else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), uLocal_393[0]) < 50f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_402))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_319)
				{
					bVar0 = false;
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						bVar0 = GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_SEES", 7, 1, 0, 0);
					}
					else
					{
						bVar0 = GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_SEES", 7, 0, 0, 0);
					}
					if (iLocal_316)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
						iLocal_316 = 0;
					}
					if (bVar0)
					{
						iLocal_319 = MISC::GET_GAME_TIMER() + 10000;
					}
				}
			}
		}
		else if (iLocal_315)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10664(&uLocal_106, 14, "MEJ1AUD", "MEJ1_DAD", 7, 0, 0, 1))
				{
					iLocal_315 = 0;
				}
			}
		}
		else if (((iLocal_309 < 8 && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), uLocal_393[0]) < 50f) && !GlobalFunc_111()) && !GlobalFunc_663("MEJ1_02", 0, 0))
		{
			if (!iLocal_313 && GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_DSPOT", 7, 0, 0, 0))
			{
				iLocal_318 = MISC::GET_GAME_TIMER() + 5000;
				iLocal_313 = 1;
				iLocal_311 = MISC::GET_GAME_TIMER() + 10000;
			}
			else if (iLocal_310 == iLocal_309)
			{
				iLocal_309++;
				iLocal_318 = MISC::GET_GAME_TIMER() + 5000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_318)
			{
				if (GlobalFunc_10630(&uLocal_106, "MEJ1AUD", "MEJ1_MRAM", sLocal_300[iLocal_309], 7, 0, 0))
				{
					iLocal_310 = iLocal_309;
				}
			}
		}
	}
}


void func_355()//Position - 0x2AA9C
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_320)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_402, 0f, -20f, 0f) };
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var0, 20f))
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, uLocal_393);
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
				iVar4 *= 1000;
				func_356(iLocal_393[iVar3], iVar4, 0);
				iLocal_320 = (MISC::GET_GAME_TIMER() + iVar4);
			}
		}
	}
}

void func_356(int iParam0, int iParam1, int iParam2)//Position - 0x2AB10
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				if (GlobalFunc_4947(iVar5))
				{
					iVar4 = GlobalFunc_2234(iParam0, iVar5);
					switch (iVar4)
					{
						case -1:
						case 1:
							sVar0 = "incar_lookbehind_enter_driver";
							sVar1 = "incar_lookbehind_idle_driver";
							sVar2 = "incar_lookbehind_exit_driver";
							break;
						
						case 0:
						case 2:
							sVar0 = "incar_lookbehind_enter_passenger";
							sVar1 = "incar_lookbehind_idle_passenger";
							sVar2 = "incar_lookbehind_exit_passenger";
							break;
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar0, 4f, -8f, -1, 16 | iParam2, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar1, 8f, -8f, iParam1, 16 | iParam2 | 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "missfam3", sVar2, 8f, -4f, -1, 16 | iParam2, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				}
			}
		}
	}
}



void func_359(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0x2AC9E
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*fParam3 = 0f;
}



void func_362()//Position - 0x2AD02
{
	GlobalFunc_10868(&uLocal_458, &uLocal_106, "MEJ1AUD", &sLocal_459, &cLocal_465);
	switch (iLocal_388)
	{
		case 0:
			GlobalFunc_146(&iLocal_390);
			iLocal_390 = GlobalFunc_2324(Local_376, 5, 0);
			HUD::SET_BLIP_COLOUR(iLocal_390, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_390, "MEJ1_JIM");
			HUD::SET_BLIP_ROUTE(iLocal_390, 1);
			GlobalFunc_4502(&iLocal_390, -2086.913f, 951.6347f, 183.7526f, 75.8f);
			GlobalFunc_164("MEJ1_01", 7500, 1);
			GlobalFunc_2370(&uLocal_458);
			func_367();
			if (GlobalFunc_199())
			{
				iLocal_388 = 3;
			}
			else
			{
				iLocal_388 = 1;
			}
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_376, 1) < 1400f)
			{
				iLocal_388 = 2;
			}
			break;
		
		case 2:
			func_364();
			if (func_363())
			{
				if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_RAM2", 7, 0, 0, 0) || GlobalFunc_111())
				{
					iLocal_388 = 0;
					iLocal_387 = 2;
				}
			}
			if (GlobalFunc_4924(iLocal_391) && GlobalFunc_4924(iLocal_393[0]))
			{
				if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_376, 150f) || GlobalFunc_10664(&uLocal_106, 14, "MEJ1AUD", "MEJ1_CLOSE", 7, 0, 0, 1))
				{
					iLocal_388 = 3;
				}
			}
			break;
		
		case 3:
			func_364();
			if (func_363())
			{
				if (GlobalFunc_10618(&uLocal_106, "MEJ1AUD", "MEJ1_RAM2", 7, 0, 0, 0) || GlobalFunc_111())
				{
					iLocal_388 = 0;
					iLocal_387 = 2;
				}
			}
			break;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_JIMMY_GO_TO_JIMMY"))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::START_AUDIO_SCENE("M_E_JIMMY_GO_TO_JIMMY");
		}
	}
}

int func_363()//Position - 0x2AEA9
{
	if (((GlobalFunc_4947(iLocal_402) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4924(iLocal_393[0])) && GlobalFunc_4924(iLocal_391))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_408, Local_411, fLocal_432, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_414, Local_417, fLocal_433, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_404, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_402, fLocal_407);
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_420, Local_423, fLocal_432, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_426, Local_429, fLocal_433, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_404, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_402, fLocal_407);
			return 1;
		}
	}
	return 0;
}

void func_364()//Position - 0x2AF95
{
	int iVar0;
	
	if (GlobalFunc_4947(iLocal_402))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!GlobalFunc_4924(iLocal_393[iVar0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_401))
				{
					iLocal_393[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_402, 4, iLocal_401, iLocal_397[iVar0], 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_393[iVar0], 0, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_393[iVar0], 2, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_393[iVar0], 3, iVar0, iVar0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_393[iVar0], 4, iVar0, iVar0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_393[iVar0], 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_393[iVar0], 0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_393[iVar0], 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_393[iVar0], 128, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_393[iVar0], 65536, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_393[iVar0], 17, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_393[iVar0], 1);
					if (iVar0 == 0)
					{
						GlobalFunc_173(&uLocal_106, 5, iLocal_393[iVar0], "MEJimmyKidnapper", 1, 1);
					}
				}
			}
			iVar0++;
		}
		if (!GlobalFunc_4924(iLocal_391))
		{
			if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(14)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_271))
			{
				func_365(&iLocal_391, Local_404, fLocal_407, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_391, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_391, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_391, 29, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_391, 116, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_391, 104, 1);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_391, 1);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_391, 1);
				PED::SET_PED_HELMET(iLocal_391, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_391, 1, 0, 0, 1, 1, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL(iLocal_391, 0);
				PED::SET_PED_RESET_FLAG(iLocal_391, 249, 1);
				PED::SET_PED_RESET_FLAG(iLocal_391, 248, 1);
				PED::SET_PED_RESET_FLAG(iLocal_391, 124, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_391, 1);
				PED::SET_PED_DIES_IN_WATER(iLocal_391, 1);
				PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_391, 1);
				GlobalFunc_173(&uLocal_106, 3, iLocal_391, "JIMMY", 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_392);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_391, uLocal_392);
				ENTITY::SET_ENTITY_COLLISION(iLocal_391, 0, 0);
				uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_272, 0);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, iLocal_402, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_402, sLocal_274));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_391, uLocal_272, sLocal_271, "base", 8f, -8f, 4, iLocal_275, 1148846080, 0);
				iLocal_273 = 0;
			}
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_403))
	{
		iLocal_402 = VEHICLE::CREATE_VEHICLE(iLocal_403, Local_404, fLocal_407, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_402, 22, 22);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_402, 0, 8);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_402, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_402, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_403, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_403);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_402, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_402, 0);
		iLocal_321 = 0;
		iLocal_322 = -1;
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_402, "M_E_JIMMY_ENEMY_VEHICLE_GROUP", 0);
	}
}

int func_365(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x2B273
{
	int iVar0;
	
	iVar0 = GlobalFunc_4946(14);
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		GlobalFunc_69(iParam0);
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 6, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 3, 0, 0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}


void func_367()//Position - 0x2B30B
{
	GlobalFunc_356(iLocal_401);
	GlobalFunc_356(GlobalFunc_4946(14));
	GlobalFunc_356(iLocal_403);
}



void func_370()//Position - 0x2B375
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	HUD::REQUEST_ADDITIONAL_TEXT("MEJ1", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_106, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
		}
		GlobalFunc_173(&uLocal_106, 4, 0, "JIMMY", 0, 1);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			uLocal_392 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		}
		GlobalFunc_563(1);
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		STREAMING::REQUEST_ANIM_DICT(sLocal_271);
		sLocal_300[0] = "MEJ1_MRAM_1";
		sLocal_300[1] = "MEJ1_MRAM_2";
		sLocal_300[2] = "MEJ1_MRAM_3";
		sLocal_300[3] = "MEJ1_MRAM_4";
		sLocal_300[4] = "MEJ1_MRAM_5";
		sLocal_300[2] = "MEJ1_MRAM_6";
		sLocal_300[3] = "MEJ1_MRAM_7";
		sLocal_300[4] = "MEJ1_MRAM_8";
		sLocal_324[0] = "MEJ1_CRASH_1";
		sLocal_324[1] = "MEJ1_CRASH_2";
		sLocal_324[2] = "MEJ1_CRASH_3";
		sLocal_324[3] = "MEJ1_CRASH_4";
		sLocal_324[4] = "MEJ1_CRASH_5";
		sLocal_324[5] = "MEJ1_CRASH_6";
		sLocal_333[0] = "MEJ1_HITKILL_1";
		sLocal_333[1] = "MEJ1_HITKILL_2";
		sLocal_333[2] = "MEJ1_HITKILL_3";
		sLocal_337[0] = "MEJ1_NOKILL_1";
		sLocal_337[1] = "MEJ1_NOKILL_2";
		sLocal_337[2] = "MEJ1_NOKILL_3";
		sLocal_344[0] = "MEJ1_STILL_1";
		sLocal_344[1] = "MEJ1_STILL_2";
		sLocal_344[2] = "MEJ1_STILL_3";
		sLocal_350[0] = "MEJ1_INJURE_1";
		sLocal_350[1] = "MEJ1_INJURE_2";
		sLocal_350[2] = "MEJ1_INJURE_3";
		sLocal_350[3] = "MEJ1_INJURE_4";
		sLocal_358[0] = "MEJ1_FLEE_1";
		sLocal_358[1] = "MEJ1_FLEE_2";
		sLocal_358[2] = "MEJ1_FLEE_3";
		sLocal_358[3] = "MEJ1_FLEE_4";
		sLocal_358[4] = "MEJ1_FLEE_5";
		sLocal_358[5] = "MEJ1_FLEE_6";
		sLocal_358[6] = "MEJ1_FLEE_7";
		sLocal_358[7] = "MEJ1_FLEE_8";
		sLocal_358[8] = "MEJ1_FLEE_9";
		sLocal_358[9] = "MEJ1_FLEE_10";
		sLocal_358[10] = "MEJ1_FLEE_11";
		sLocal_358[11] = "MEJ1_FLEE_12";
		iLocal_397[0] = -1;
		iLocal_397[1] = 0;
		iLocal_397[2] = 1;
		if (GlobalFunc_2(0) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar4 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			GlobalFunc_10698(&iVar0, Var1, fVar4, 1, 0, 1, 1, 1, joaat("asterope"), 0, 145);
		}
		if (GlobalFunc_199())
		{
			iVar5 = GlobalFunc_198();
			if (Global_84544 == 1)
			{
				iVar5++;
			}
			switch (iVar5)
			{
				case 0:
					func_387(&iVar6, 1, 1, 1, 1, iLocal_457, 0, 145);
					if (GlobalFunc_775(iVar6, -811.3438f, 187.4367f, 71.47861f, 6f))
					{
						ENTITY::SET_ENTITY_COORDS(iVar6, -822.4044f, 182.6078f, 71.37809f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar6, 135.6541f);
					}
					GlobalFunc_190(&iVar6);
					func_386();
					GlobalFunc_79(500, 1);
					iLocal_388 = 0;
					iLocal_387 = 1;
					break;
				
				case 1:
					func_385();
					func_386();
					iLocal_388 = 0;
					iLocal_387 = 1;
					break;
				
				case 2:
					func_383(1, 1);
					func_377(0);
					func_386();
					SYSTEM::WAIT(500);
					func_376(1, 1, 1);
					break;
				
				case 3:
					GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_79(500, 1);
					func_376(1, 1, 1);
					func_63();
					break;
				
				default:
					break;
			}
		}
		else
		{
			func_386();
			GlobalFunc_79(500, 1);
			iLocal_388 = 0;
			iLocal_387 = 1;
		}
	}
}






void func_376(int iParam0, int iParam1, int iParam2)//Position - 0x2B87B
{
	func_66(0, 0, iParam2, 1);
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

void func_377(bool bParam0)//Position - 0x2B8AF
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	func_40(1, 0);
	func_380();
	ENTITY::SET_ENTITY_VISIBLE(iLocal_402, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_391, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_69(&(iLocal_393[iVar0]));
		iVar0++;
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_391))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_391, 1, 0);
		if (bParam0)
		{
			if ((GlobalFunc_4947(iLocal_402) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_402, -1)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_402, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, -1);
				PED::SET_PED_INTO_VEHICLE(iLocal_391, iLocal_402, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_402, 1, 1);
			}
		}
		else
		{
			Var2 = { GlobalFunc_2574() };
			func_378(&Var2, &fVar5);
			GlobalFunc_10698(&iVar1, Var2, fVar5, 1, 0, 1, 1, 1, joaat("asterope"), 0, 145);
			if ((GlobalFunc_4947(iVar1) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, 0)) && GlobalFunc_4924(iLocal_391))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_391, iVar1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, 1, 1);
				GlobalFunc_190(&iLocal_402);
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_4956();
	iLocal_434 = 1;
	iLocal_435 = 1;
	iLocal_374 = 1;
	iLocal_278 = -1;
	iLocal_279 = -1;
	iLocal_331 = 0;
	iLocal_341 = 0;
	iLocal_348 = 0;
	iLocal_323 = 0;
	iLocal_332 = 0;
	iLocal_342 = 0;
	GlobalFunc_11043(2, "Drive Home", 1, 0, 0, 1);
	iLocal_388 = 0;
	iLocal_387 = 3;
}

void func_378(var uParam0, var uParam1)//Position - 0x2BA27
{
	struct<3> Var0[5];
	float fVar16[5];
	int iVar22;
	int iVar23;
	
	Var0[0 /*3*/] = { -2539.17f, 1866.73f, 166.1f };
	fVar16[0] = 216.03f;
	Var0[1 /*3*/] = { -2022.33f, 826.23f, 162.32f };
	fVar16[1] = 172.12f;
	Var0[2 /*3*/] = { -1038.3f, 253f, 64.21f };
	fVar16[2] = 270.02f;
	Var0[3 /*3*/] = { -3140.89f, 1024.06f, 18.33f };
	fVar16[3] = 152.08f;
	Var0[4 /*3*/] = { -2641.3f, -110.03f, 18.7f };
	fVar16[4] = 221.35f;
	iVar22 = 0;
	iVar23 = 1;
	while (iVar23 < 5)
	{
		if (SYSTEM::VDIST2(Var0[iVar23 /*3*/], *uParam0) < SYSTEM::VDIST2(Var0[iVar22 /*3*/], *uParam0))
		{
			iVar22 = iVar23;
		}
		iVar23++;
	}
	*uParam0 = { Var0[iVar22 /*3*/] };
	*uParam1 = fVar16[iVar22];
}


void func_380()//Position - 0x2BB3C
{
	int iVar0;
	
	iVar0 = -1;
	func_367();
	while (!func_382(&iVar0))
	{
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	func_364();
	while (!func_381(&iVar0))
	{
		func_364();
		SYSTEM::WAIT(0);
	}
}

int func_381(int iParam0)//Position - 0x2BB7A
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_402))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393[0]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393[1]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393[2]))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_391))
	{
		return 0;
	}
	return 1;
}

int func_382(int iParam0)//Position - 0x2BBF9
{
	if (*iParam0 < 0)
	{
		*iParam0 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		return 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_403))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_401))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(14)))
	{
		return 0;
	}
	return 1;
}

void func_383(bool bParam0, bool bParam1)//Position - 0x2BC54
{
	if (bParam0)
	{
		func_384(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_81(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_384(bool bParam0, int iParam1, int iParam2)//Position - 0x2BC87
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
			func_66(iParam1, iParam2, 1, 1);
		}
	}
}

void func_385()//Position - 0x2BCE6
{
	int iVar0;
	
	func_383(1, 1);
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		func_40(1, 0);
		func_367();
		GlobalFunc_10698(&iVar0, -2086.913f, 951.6347f, 183.7526f, 75.8f, 1, 1, 0, 1, 1, iLocal_457, 0, 145);
		if (GlobalFunc_4947(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		func_364();
		while (((!GlobalFunc_4924(iLocal_391) && !GlobalFunc_4924(iLocal_393[0])) && !GlobalFunc_4924(iLocal_393[1])) && !GlobalFunc_4924(iLocal_393[2]))
		{
			func_364();
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4956();
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		if (GlobalFunc_4947(iVar0))
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 25f);
		}
	}
	func_376(1, 1, 1);
}

void func_386()//Position - 0x2BDE4
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

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2BE1B
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_3004() && GlobalFunc_9009(iParam1, iParam2, iParam3))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		GlobalFunc_10698(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
	else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Var0, &fVar3, 1, 1077936128, 0))
	{
		GlobalFunc_10698(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
}



























































void func_446(bool bParam0)//Position - 0x32861
{
	func_40(0, bParam0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	HUD::CLEAR_PRINTS();
	GlobalFunc_5105();
	STREAMING::REMOVE_ANIM_DICT(sLocal_271);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_382 - Vector(10f, 10f, 10f), Local_382 + Vector(10f, 10f, 10f), 1, 1);
	GlobalFunc_563(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



