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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	var uLocal_85 = 0;
	char* sLocal_86 = NULL;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -1;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 1000;
	var uLocal_97 = 1000;
	var uLocal_98 = 0;
	struct<61> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	struct<3> Local_162 = { 0, 0, 0 } ;
	float fLocal_165 = 0f;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 16;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	struct<3> Local_346 = { 0, 0, 0 } ;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	var uLocal_352 = 0;
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
	Local_79 = { -1593.813f, 5221.235f, 1.94482f };
	Local_82 = { -1603.986f, 5243.624f, 4.940323f };
	uLocal_85 = GlobalFunc_4946(16);
	sLocal_86 = "rcmabigail";
	iLocal_160 = joaat("asea");
	Local_162 = { -1573.733f, 5164.508f, 18.5576f };
	fLocal_165 = 175.9451f;
	Local_346 = { -1014.054f, -2474.013f, 19.1091f };
	Local_99 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_99);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_410(1);
	}
	if (GlobalFunc_115(Local_99.f_28[0]))
	{
		iLocal_168 = Local_99.f_28[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, 1, 1);
	}
	func_408();
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
				GlobalFunc_4972(-1595.201f, 5217.495f, 3.0009f, 208.2675f, 1, 0);
				func_360(1);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_WLB", 0);
		func_344(Local_99.f_9, 0, 0, 0, 0, 0);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_166)
			{
				case 0:
					func_338();
					break;
				
				case 1:
					func_283();
					break;
				
				case 2:
					func_254();
					break;
				
				case 3:
					func_252();
					break;
				
				case 4:
					func_9();
					break;
				
				case 5:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1E6
{
	switch (iLocal_167)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4948(&uLocal_87, 0, 0);
			GlobalFunc_146(&iLocal_169);
			GlobalFunc_9624(1);
			iLocal_167 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				GlobalFunc_69(&iLocal_168);
				GlobalFunc_6692(&iLocal_161);
				func_410(1);
			}
			break;
	}
}








void func_9()//Position - 0x479
{
	switch (iLocal_167)
	{
		case 0:
			func_250();
			if (GlobalFunc_115(iLocal_161))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_161, 1);
			}
			iLocal_167 = 1;
			break;
		
		case 1:
			func_227();
			if (!GlobalFunc_115(iLocal_168))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_167 = 2;
				}
				else
				{
					func_226(3);
				}
			}
			else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_168) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_167 = 2;
				}
				else
				{
					func_226(3);
				}
			}
			else
			{
				if (!GlobalFunc_6695(iLocal_168, 1805844857))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_168, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
				if (iLocal_337 == 0)
				{
					if (((!GlobalFunc_111() && GlobalFunc_155(iLocal_168, PLAYER::PLAYER_PED_ID(), 20f)) && !PED::IS_PED_RAGDOLL(iLocal_168)) && GlobalFunc_10607(&uLocal_172, "SONARAU", "SONAR_SHOOTS", 7, 0, 0, 0))
					{
						iLocal_337 = 1;
					}
				}
				else if (((((iLocal_345 < 15 && !GlobalFunc_111()) && (MISC::GET_GAME_TIMER() - iLocal_342) > 10000) && GlobalFunc_155(iLocal_168, PLAYER::PLAYER_PED_ID(), 20f)) && !PED::IS_PED_RAGDOLL(iLocal_168)) && GlobalFunc_10607(&uLocal_172, "SONARAU", "SONAR_CHASE", 7, 0, 0, 0))
				{
					iLocal_342 = MISC::GET_GAME_TIMER();
					iLocal_345++;
				}
			}
			break;
		
		case 2:
			func_10();
			break;
	}
}

void func_10()//Position - 0x5F2
{
	GlobalFunc_11315(322, 1);
	func_410(1);
}
























































































































































































































void func_226(int iParam0)//Position - 0x25638
{
	iLocal_166 = iParam0;
	iLocal_167 = 0;
}

void func_227()//Position - 0x25647
{
	if (GlobalFunc_115(iLocal_168))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_351) > 1000)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			GlobalFunc_9626(&uLocal_87, iLocal_168, "ABGAIL2_HINT", 0, 1, 1, 1);
		}
	}
	else
	{
		GlobalFunc_4948(&uLocal_87, 0, 0);
	}
}























void func_250()//Position - 0x26498
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_169) && GlobalFunc_115(iLocal_168))
	{
		iLocal_169 = GlobalFunc_4955(iLocal_168, 1, 0, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_169) && HUD::GET_BLIP_COLOUR(iLocal_169) != 1)
	{
		HUD::SET_BLIP_AS_FRIENDLY(iLocal_169, 0);
		HUD::SET_BLIP_COLOUR(iLocal_169, 1);
	}
}


void func_252()//Position - 0x26536
{
	switch (iLocal_167)
	{
		case 0:
			iLocal_167 = 1;
			break;
		
		case 1:
			func_227();
			if (!GlobalFunc_115(iLocal_168))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
				iLocal_339 = 1;
				GlobalFunc_146(&iLocal_169);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_167 = 2;
				}
			}
			else
			{
				if (((iLocal_339 == 0 && !GlobalFunc_111()) && GlobalFunc_155(iLocal_168, PLAYER::PLAYER_PED_ID(), 20f)) && GlobalFunc_10607(&uLocal_172, "SONARAU", "SONAR_ARRIVE", 7, 0, 0, 0))
				{
					iLocal_339 = 1;
					func_250();
				}
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_168) > 250f)
				{
					iLocal_167 = 2;
				}
			}
			if ((iLocal_340 == 0 && iLocal_339 == 1) && !GlobalFunc_111())
			{
				if (GlobalFunc_115(iLocal_168))
				{
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				GlobalFunc_164("ABGAIL2_WANTED", 7500, 1);
				iLocal_340 = 1;
			}
			break;
		
		case 2:
			func_10();
			break;
	}
}


void func_254()//Position - 0x26660
{
	switch (iLocal_167)
	{
		case 0:
			uLocal_352 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(2.99f, 5194.44f, -1578.62f) - Vector(10f, 10f, 10f), Vector(2.99f, 5194.44f, -1578.62f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
			func_282();
			if (GlobalFunc_115(iLocal_168))
			{
				func_280();
				if (GlobalFunc_4947(iLocal_161))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_169))
					{
						iLocal_169 = GlobalFunc_4955(iLocal_168, 1, 0, 5);
					}
					func_279(&iLocal_169, "", "", &iLocal_170, &iLocal_171, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_343);
					if (!PED::IS_PED_IN_VEHICLE(iLocal_168, iLocal_161, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1567.85f, 5178.12f, 14.78f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1571.85f, 5181.21f, 16.88f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.01f, 5174.08f, 18.57f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_161, 20000, -1, 1f, 1, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iLocal_161, Local_346, 20f, 786469, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_161, Local_346, 49.567f, 3, 1092616192, 0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_161, 256);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_343);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_168, uLocal_343);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_168, 1193033728, 0);
				}
			}
			iLocal_341 = MISC::GET_GAME_TIMER();
			iLocal_167 = 1;
			break;
		
		case 1:
			func_227();
			if (!GlobalFunc_115(iLocal_168))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_167 = 2;
				}
				else
				{
					func_226(3);
				}
			}
			else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_168) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_167 = 2;
				}
				else
				{
					func_226(3);
				}
			}
			else if (func_259())
			{
				GlobalFunc_4956();
				func_226(4);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_168, Local_346, 5f, 5f, 5f, 0, 1, 0))
			{
				func_226(3);
			}
			else
			{
				func_255(&iLocal_169, "", "", &iLocal_170, iLocal_171, 0);
				if (iLocal_338 == 0)
				{
					if (((GlobalFunc_115(iLocal_161) && PED::IS_PED_IN_VEHICLE(iLocal_168, iLocal_161, 1)) && GlobalFunc_155(iLocal_168, PLAYER::PLAYER_PED_ID(), 20f)) && GlobalFunc_10607(&uLocal_172, "SONARAU", "SONAR_INCAR", 7, 0, 0, 0))
					{
						iLocal_338 = 1;
					}
					if (((((iLocal_344 < 7 && !GlobalFunc_111()) && (MISC::GET_GAME_TIMER() - iLocal_341) > 10000) && GlobalFunc_155(iLocal_168, PLAYER::PLAYER_PED_ID(), 20f)) && !PED::IS_PED_RAGDOLL(iLocal_168)) && GlobalFunc_10607(&uLocal_172, "SONARAU", "SONAR_FOLLOW", 7, 0, 0, 0))
					{
						iLocal_341 = MISC::GET_GAME_TIMER();
						iLocal_344++;
					}
				}
			}
			break;
		
		case 2:
			func_10();
			break;
	}
}

void func_255(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26990
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *iParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*uParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam1, 0, 0))
					{
						GlobalFunc_164(sParam2, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_165(sParam2, 0, 0))
					{
						GlobalFunc_164(sParam1, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
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




int func_259()//Position - 0x26ADA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 1;
	}
	if (GlobalFunc_115(iLocal_161))
	{
		if (func_260(iLocal_168, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		if (PED::IS_PED_BEING_JACKED(iLocal_168))
		{
			return 1;
		}
		if (GlobalFunc_115(iLocal_161))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_168, iLocal_161, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_161, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_161, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_161, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_161, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_161, 5, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x26B95
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
		else if (func_261(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0, float fParam1)//Position - 0x26C50
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
				if (func_262(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_262(int iParam0, float fParam1)//Position - 0x26CC6
{
	return func_263(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_263(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26CDE
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_271(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_266();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_266()//Position - 0x26F90
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_271(int iParam0, int iParam1)//Position - 0x270E6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}








void func_279(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x27506
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
					GlobalFunc_164(sParam1, 7500, 0);
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
					GlobalFunc_164(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = MISC::GET_GAME_TIMER();
		*iParam4 = MISC::GET_GAME_TIMER();
	}
}

void func_280()//Position - 0x275B2
{
	if (GlobalFunc_115(iLocal_168))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168, 1);
		GlobalFunc_173(&uLocal_172, 3, iLocal_168, "ABIGAIL", 0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_168, 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_168, 4, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_168, 1024, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_168, 281, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_168, 29, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_168, 116, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_168, 118, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_168, 1);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_168, 0);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_168, 0);
	}
}


void func_282()//Position - 0x276C9
{
	if (!GlobalFunc_115(iLocal_161))
	{
		iLocal_161 = VEHICLE::CREATE_VEHICLE(iLocal_160, Local_162, fLocal_165, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
	}
	if (GlobalFunc_115(iLocal_161))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_161, 3);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_161, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_160, 1);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_161, 1);
	}
}

void func_283()//Position - 0x27716
{
	switch (iLocal_167)
	{
		case 0:
			GlobalFunc_9623("ABIGAIL_MCS_2", 0);
			GlobalFunc_4956();
			iLocal_349 = 0;
			iLocal_350 = 0;
			iLocal_167 = 1;
			break;
		
		case 1:
			switch (iLocal_350)
			{
				case 0:
					if (GlobalFunc_7638(1, 1093140480, 0))
					{
						if (GlobalFunc_115(iLocal_168))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_168, "ABIGAIL", 0, 0, 0);
						}
						GlobalFunc_8954();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_350++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						GlobalFunc_9628(-950.6414f, -1507.601f, 4.17325f, -953.2579f, -1500.439f, 4.17084f, 8f, -970.3301f, -1526.626f, 4.0877f, 306.1f, 1, 1, 1, 0, 0);
						func_320(-1592.84f, 5214.04f, 3.01f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, 0);
						GlobalFunc_79(500, 0);
						STREAMING::REMOVE_ANIM_DICT("rcmabigail");
						iLocal_350++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ABIGAIL", GlobalFunc_4946(16)) && GlobalFunc_115(iLocal_168))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_168, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 1193033728);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_349 = 1;
						}
					}
					else
					{
						RECORDING::_0x81CBAE94390F9F89();
						if (iLocal_349 == 1)
						{
							if (GlobalFunc_115(iLocal_168))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_168);
								GlobalFunc_4965(iLocal_168, -1587.11f, 5204.18f, 3.02f, 210.9196f, 0, 1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_168, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 1193033728);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_168, 0, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(500);
						}
						GlobalFunc_79(500, 1);
						func_310(1, 1, 1, 1);
						GlobalFunc_4923(&Local_99, 0, 1);
						GlobalFunc_10829(0, 1, 10, 0, 0);
						iLocal_351 = MISC::GET_GAME_TIMER();
						func_226(2);
					}
					break;
			}
			break;
	}
}



























void func_310(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x289DB
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










void func_320(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x28D1B
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


















void func_338()//Position - 0x29BC0
{
	HUD::REQUEST_ADDITIONAL_TEXT("ABGAIL2", 0);
	STREAMING::REQUEST_MODEL(iLocal_160);
	if ((!GlobalFunc_111() && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_160))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_160, 1);
		if (GlobalFunc_115(Local_99.f_35[0]))
		{
			iLocal_161 = Local_99.f_35[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_161, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
		}
		iLocal_166 = 1;
	}
	else
	{
		GlobalFunc_8320();
	}
}






void func_344(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x29DAA
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
















void func_360(int iParam0)//Position - 0x2A7C5
{
	func_404(0, 0, 0);
	func_403(1, 1);
	GlobalFunc_69(&iLocal_168);
	GlobalFunc_6692(&iLocal_161);
	func_410(0);
	func_408();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			func_366(-1590.964f, 5211.717f, 3.0098f, 37.4745f, 0f, 0f, 0f, 0f, -1596.09f, 5218.102f, 3.045f, 125.5f, -1584.013f, 5158.539f, 18.6057f, 210.5309f);
			func_226(1);
			break;
		
		case 1:
			func_366(-1595.201f, 5217.495f, 3.0009f, 208.2675f, -1580.236f, 5169.585f, 18.5846f, 189.4926f, -1587.11f, 5204.18f, 3.02f, -143.87f, Local_162, fLocal_165);
			func_226(2);
			break;
		
		case 2:
			func_366(0f, 0f, 0f, 0f, -1580.236f, 5169.585f, 18.5846f, 189.4926f, 0f, 0f, 0f, 0f, Local_162, fLocal_165);
			func_226(2);
			break;
		
		case 3:
			func_366(0f, 0f, 0f, 0f, -973.0429f, -2405.925f, 19.1698f, 151.3282f, 0f, 0f, 0f, 0f, -982.942f, -2422.911f, 19.1683f, 148.0451f);
			iLocal_338 = 1;
			iLocal_344 = 7;
			func_226(2);
			break;
	}
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	GlobalFunc_4967(0, -1, 1);
	func_361(1, 1, 1);
}

void func_361(int iParam0, int iParam1, int iParam2)//Position - 0x2A95F
{
	func_310(0, 0, iParam2, 1);
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





void func_366(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7, struct<3> Param8, float fParam11, struct<3> Param12, float fParam15)//Position - 0x2AAE8
{
	int iVar0;
	
	if (GlobalFunc_105(Param0))
	{
		while (!func_371(&iVar0, 0, Param4, fParam7, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, -1);
		GlobalFunc_190(&iVar0);
	}
	else if (!GlobalFunc_199())
	{
		GlobalFunc_4965(PLAYER::PLAYER_PED_ID(), Param0, fParam3, 0, 1);
	}
	STREAMING::REQUEST_MODEL(iLocal_160);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_160))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_367(&iLocal_168, 16, Param8, fParam11, "RC ABIGAIL 2", 1))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_161 = VEHICLE::CREATE_VEHICLE(iLocal_160, Param12, fParam15, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_160, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
	func_282();
	if (GlobalFunc_105(Param8))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_168, iLocal_161, -1);
	}
}

int func_367(var uParam0, int iParam1, struct<3> Param2, var uParam5, char* sParam6, int iParam7)//Position - 0x2ABAF
{
	if (GlobalFunc_6705(uParam0, iParam1, Param2, uParam5, 1))
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




int func_371(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x2AD15
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_194(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}
































void func_403(bool bParam0, bool bParam1)//Position - 0x2F477
{
	if (bParam0)
	{
		func_404(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_320(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_404(bool bParam0, int iParam1, int iParam2)//Position - 0x2F4AA
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
			func_310(iParam1, iParam2, 1, 1);
		}
	}
}




void func_408()//Position - 0x2F5EC
{
	iLocal_170 = 0;
	iLocal_171 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_340 = 0;
	iLocal_341 = 0;
	iLocal_342 = 0;
	iLocal_344 = 0;
	iLocal_345 = 0;
}


void func_410(int iParam0)//Position - 0x2F63A
{
	GlobalFunc_4948(&uLocal_87, 0, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_160, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
	GlobalFunc_146(&iLocal_169);
	GlobalFunc_132(&iLocal_168, 1, 0, 1);
	if (GlobalFunc_115(iLocal_161))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_161, 1);
	}
	GlobalFunc_190(&iLocal_161);
	GlobalFunc_8954();
	GlobalFunc_200(&uLocal_172, 3);
	func_411(&Local_99, 0, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_352, 0);
	if (iParam0 == 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_411(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2F6A7
{
	GlobalFunc_6690(uParam0, iParam1);
	GlobalFunc_8327(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}


































