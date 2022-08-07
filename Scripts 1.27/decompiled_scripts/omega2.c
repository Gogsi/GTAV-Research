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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	struct<61> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char* sLocal_148[3] = { NULL, NULL, NULL };
	var uLocal_152[3] = { 0, 0, 0 };
	char* sLocal_156 = NULL;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 16;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	bool bLocal_336 = 0;
	var uLocal_337 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(69);
	sLocal_146 = "Omega";
	sLocal_147 = "FRANKLIN";
	sLocal_156 = "Flying_Saucer";
	Local_159 = { 2328.601f, 2570.337f, 46.808f };
	Local_162 = { 90f, 0f, -45.358f };
	iLocal_165 = joaat("prop_cs_power_cell");
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (iLocal_141 != 3)
		{
			GlobalFunc_10544(1);
		}
		func_338();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_328(&Local_80))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_80, 0, 1);
		Global_68490 = 0;
	}
	func_326(1, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_Omega2", 0);
		func_310(Local_80.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_141)
		{
			case 0:
				func_308();
				break;
			
			case 1:
				func_279();
				break;
			
			case 2:
				func_233();
				break;
			
			case 3:
				func_5();
				break;
			
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x174
{
	char* sVar0;
	
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			switch (iLocal_143)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "O2_FAILKILL";
					break;
				
				case 2:
					sVar0 = "O2_FAILHURT";
					break;
				
				case 3:
					sVar0 = "O2_FAILSCARE";
					break;
			}
			if (iLocal_143 == 0)
			{
				GlobalFunc_10544(1);
			}
			else
			{
				GlobalFunc_10816(sVar0, 1);
			}
			iLocal_142 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_338();
			}
			break;
	}
}




void func_5()//Position - 0x276
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_173(&uLocal_171, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_128(&iLocal_170, &(Local_80.f_35[0]));
			bLocal_336 = false;
			GlobalFunc_9165(&Local_80, 1, 0, 0);
			iLocal_142 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2326.3f, 2564.445f, 40.6678f, 2333.708f, 2581.939f, 65.6678f, 9f, 0, 1, 0))
				{
					func_23();
					iLocal_142 = 2;
				}
				else if (!bLocal_336)
				{
					if (GlobalFunc_115(iLocal_170) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_170, 1))
					{
						bLocal_336 = GlobalFunc_10607(&uLocal_171, "SCRAPAU", "SCRAP_DOCK", 7, 0, 0, 0);
					}
				}
			}
			break;
		
		case 2:
			func_338();
			break;
	}
}


















void func_23()//Position - 0xB62
{
	GlobalFunc_11328(67, 1);
}


















































































































































































































void func_233()//Position - 0x25649
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_601(23, 1);
			uLocal_337 = Global_24690;
			Global_24690 = 0;
			GlobalFunc_9623("SCRAP_2_RCM", 0);
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_80.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_80.f_28[0], sLocal_146, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (GlobalFunc_115(uLocal_152[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_152[2], sLocal_148[2], 1, 0, 0);
				}
				if (GlobalFunc_115(uLocal_152[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_152[0], sLocal_148[0], 0, 0, 0);
				}
				if (GlobalFunc_115(uLocal_152[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_152[1], sLocal_148[1], 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_147, 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_157, sLocal_156, 2, joaat("p_cs_saucer_01_s"), 0);
				GlobalFunc_8954();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				SYSTEM::WAIT(0);
				GlobalFunc_10064(2314.601f, 2592.442f, 43.6477f, 2331.976f, 2571.058f, 50.62959f, 19f, 2313.334f, 2600.843f, 45.8162f, 352.0448f, 1, 1, 1, 0, 0);
				func_248(2486.81f, 3433.98f, 50.09f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_OBJECTS(2333.833f, 2576.746f, 45.6678f, 3f, 0);
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_148[0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_152[0], 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_148[1], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_152[1], 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_147, 0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_157))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, 0)))
				{
					iLocal_157 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, 0));
				}
			}
			else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_156, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_157, 1);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_326(1, 1, 1, 1);
				GlobalFunc_4923(&Local_80, 0, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_158) && STREAMING::HAS_MODEL_LOADED(iLocal_165))
				{
					iLocal_158 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_165, Local_159, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_158, Local_162, 2, 0);
				}
				GlobalFunc_9804(18, 0);
				GlobalFunc_601(23, 0);
				Global_24690 = uLocal_337;
				iLocal_142 = 2;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_234(3);
			break;
	}
}

void func_234(int iParam0)//Position - 0x258DB
{
	iLocal_141 = iParam0;
	iLocal_142 = 0;
}














void func_248(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x25B9D
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
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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































void func_279()//Position - 0x26D57
{
	GlobalFunc_8535();
	func_301();
	if (func_281())
	{
		if (MISC::GET_GAME_TIMER() < iLocal_145 && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 5f))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_80.f_28[0], 0f, 0f, 0f, 1, 2000, 2500, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(35f);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.02f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.05f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 2000, 0, 2);
		}
		else
		{
			func_234(2);
		}
	}
}


int func_281()//Position - 0x26E11
{
	if (!GlobalFunc_115(Local_80.f_28[0]))
	{
		iLocal_143 = 1;
		func_234(4);
		return 0;
	}
	else if (PED::IS_PED_INJURED(Local_80.f_28[0]) || PED::IS_PED_RAGDOLL(Local_80.f_28[0]))
	{
		iLocal_143 = 2;
		func_234(4);
		return 0;
	}
	else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_283(Local_80.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_282(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 1))
		{
			TASK::TASK_SMART_FLEE_PED(Local_80.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			iLocal_143 = 3;
			func_234(4);
			return 0;
		}
	}
	return 1;
}

int func_282(int iParam0, int iParam1, bool bParam2)//Position - 0x26EC7
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(uParam1))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam1, iParam0))
			{
				if (bParam2)
				{
					if (PED::IS_PED_RAGDOLL(uParam1))
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
	}
	return 0;
}

int func_283(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x26F12
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8640(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return GlobalFunc_2995(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_284(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0, float fParam1)//Position - 0x26FCD
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_2994(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_285(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_285(int iParam0, float fParam1)//Position - 0x27043
{
	return func_286(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_286(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2705B
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_293(iParam0, iParam1);
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
		iVar4 = func_289();
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



int func_289()//Position - 0x2730D
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




int func_293(int iParam0, int iParam1)//Position - 0x27424
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








void func_301()//Position - 0x27844
{
	struct<3> Var0;
	var uVar3;
	
	if (!iLocal_166)
	{
		if (GlobalFunc_115(Local_80.f_35[0]))
		{
			uLocal_169 = INTERIOR::GET_INTERIOR_AT_COORDS(ENTITY::GET_ENTITY_COORDS(Local_80.f_35[0], 1));
			if (INTERIOR::IS_VALID_INTERIOR(uLocal_169))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_169);
				iLocal_166 = 1;
			}
		}
	}
	else if (!iLocal_167)
	{
		if (INTERIOR::IS_INTERIOR_READY(uLocal_169))
		{
			iLocal_167 = 1;
		}
	}
	else if (!iLocal_168)
	{
		if (GlobalFunc_115(Local_80.f_35[0]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_80.f_35[0], 1) };
			uVar3 = ENTITY::GET_ENTITY_HEADING(Local_80.f_35[0]);
			GlobalFunc_6689(&(Local_80.f_35[0]));
			Local_80.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("dune2"), Var0, uVar3, 1, 1);
			INTERIOR::UNPIN_INTERIOR(uLocal_169);
			iLocal_168 = 1;
		}
	}
}







void func_308()//Position - 0x27ACA
{
	GlobalFunc_8535();
	func_301();
	HUD::REQUEST_ADDITIONAL_TEXT("OMEGA2", 0);
	STREAMING::REQUEST_MODEL(iLocal_165);
	if (func_281())
	{
		if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			if (GlobalFunc_115(Local_80.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_80.f_28[0], 1);
				PED::SET_PED_KEEP_TASK(Local_80.f_28[0], 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(Local_80.f_28[0]))
			{
				uLocal_144 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_80.f_28[0], uLocal_144);
			}
			iLocal_145 = MISC::GET_GAME_TIMER() + 3500;
			func_309();
			func_234(1);
		}
	}
}

void func_309()//Position - 0x27B62
{
	uLocal_152[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2333.23f, 2574.97f, 47.03f, 5f, joaat("prop_ch3_01_trlrdoor_l"), 1, 0, 1);
	uLocal_152[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2329.65f, 2576.64f, 47.03f, 5f, joaat("prop_ch3_01_trlrdoor_r"), 1, 0, 1);
	sLocal_148[0] = "Scrap_Door_L";
	sLocal_148[1] = "Scrap_Door_R";
	sLocal_148[2] = "Scrap_Latch";
}

void func_310(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x27BC7
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
















void func_326(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28646
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


int func_328(var uParam0)//Position - 0x287E1
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = joaat("dune2");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2337.376f, 2585.722f, 45.11065f };
			uParam0->f_17[1 /*3*/] = { 2302.158f, 2586.505f, 47.99957f };
			uParam0->f_24 = 26f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_2_RCM", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmrc_omega_2", "omega_idle_looking_around", 0);
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
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 69, 2319.443f, 2583.588f, 46.7663f, 220f, "OMEGA LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], 2331.08f, 2573.53f, 46.13f, 358.61f);
			}
			if (bVar4)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.33f, 44.7f, 2326.446f, 2579.608f, 47.6645f, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(2321.252f, 2578.851f, 46.7f, 10f, 0, 0, 0, 0, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}










void func_338()//Position - 0x28BF8
{
	int iVar0;
	
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_129(&(uLocal_152[iVar0]), 0);
		iVar0++;
	}
	GlobalFunc_129(&iLocal_157, 0);
	GlobalFunc_129(&iLocal_158, 0);
	GlobalFunc_131(&iLocal_170);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.33f, 44.7f, 2326.446f, 2579.608f, 47.6645f, 1, 1);
	GlobalFunc_9165(&Local_80, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

























