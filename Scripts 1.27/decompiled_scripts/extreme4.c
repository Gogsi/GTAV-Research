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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	struct<61> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	float fLocal_145 = 0f;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	struct<13> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_167 = NULL;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	int iLocal_180 = 0;
	var uLocal_181 = 16;
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
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	int iLocal_346 = 0;
	struct<3> Local_347 = { 0, 0, 0 } ;
	float fLocal_350 = 0f;
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
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	bool bLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(52);
	iLocal_80 = joaat("a_c_retriever");
	Local_142 = { 1726.4f, 83.0424f, 169.67f };
	fLocal_145 = 328.7801f;
	uLocal_366 = AUDIO::GET_SOUND_ID();
	Local_81 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_81);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_321(1);
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		func_315(&Local_81);
		Global_68490 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
	}
	func_308();
	if (!GlobalFunc_199())
	{
		if ((GlobalFunc_4924(Local_81.f_28[0]) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 4f))
		{
			iLocal_382 = 1;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_UR", 0);
		func_289(Local_81.f_9, 0, 0, 0, 0, 0);
		if (iLocal_147 != 4 && iLocal_147 != 0)
		{
			func_288();
		}
		if (iLocal_147 < 3 && iLocal_382)
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1668.882f, -19.65248f, 172.6748f, 1653.855f, 8.008027f, 175.0248f, 7f, 0, 1, 0))
			{
				if (GlobalFunc_4924(Local_154))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_154, 10f))
					{
						func_287();
					}
				}
			}
		}
		switch (iLocal_147)
		{
			case 0:
				func_270();
				break;
			
			case 1:
				func_257();
				break;
			
			case 2:
				func_236();
				break;
			
			case 3:
				func_8();
				break;
			
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x207
{
	switch (iLocal_146)
	{
		case 0:
			GlobalFunc_846(&uLocal_169);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_167))
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sLocal_167, 1);
			}
			iLocal_146 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2(1);
				func_321(0);
			}
			break;
	}
}

void func_2(int iParam0)//Position - 0x263
{
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	GlobalFunc_846(&uLocal_169);
	GlobalFunc_130(&uLocal_174);
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
}






void func_8()//Position - 0x359
{
	switch (iLocal_148)
	{
		case 0:
			iLocal_374 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_148 = 1;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_177))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_177, 1f))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
						OBJECT::DELETE_OBJECT(&iLocal_177);
					}
				}
			}
			if (iLocal_346 == 0)
			{
				func_221();
				iLocal_369 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_115(Local_154))
				{
				}
				iLocal_346 = 1;
			}
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_374 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1624.015f, -5.45107f, 102.0677f, 1639.007f, -52.9875f, 181.3352f, 58.75f, 0, 1, 0) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
					{
						iLocal_374 = 1;
					}
				}
				if (GlobalFunc_115(Local_154))
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						if ((MISC::GET_GAME_TIMER() > iLocal_369 + 25000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1665.729f, -26.27869f, 172.5815f, 1672.652f, -24.58394f, 177.2547f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1650.519f, 5.134407f, 172.6743f, 1656.571f, 9.669823f, 176.7743f, 15.25f, 0, 1, 0))
						{
							iLocal_148 = 2;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() > iLocal_369 + 25000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1665.729f, -26.27869f, 172.5815f, 1672.652f, -24.58394f, 177.2547f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1650.519f, 5.134407f, 172.6743f, 1656.571f, 9.669823f, 176.7743f, 15.25f, 0, 1, 0))
				{
					iLocal_148 = 2;
				}
			}
			if (MISC::GET_GAME_TIMER() < iLocal_369 + 5000)
			{
				if (RECORDING::_IS_RECORDING())
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
			}
			break;
		
		case 2:
			if (((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 2f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_10618(&uLocal_181, "EXT4AUD", "EXT4_WIL2", 8, 0, 0, 0))
				{
					func_9();
				}
			}
			break;
	}
}

void func_9()//Position - 0x5A2
{
	if (iLocal_374 == 1)
	{
		RECORDING::_0x293220DA1B46CEBC(10f, 4f, 0);
		GlobalFunc_553(762);
	}
	func_2(1);
	GlobalFunc_11314(84, 1);
	func_321(1);
}




















































































































































































































void func_221()//Position - 0x255C7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	float fVar7;
	
	iVar0 = 0;
	fVar1 = 1f;
	iLocal_373 = MISC::GET_GAME_TIMER();
	if (!CAM::DOES_CAM_EXIST(uLocal_351))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_352))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_353))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_354))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_355))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_356))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_357))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_358))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_359))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_360))
	{
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_361))
	{
	}
	MISC::SET_TIME_SCALE(fVar1);
	HUD::DISPLAY_HUD(0);
	HUD::DISPLAY_RADAR(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
	AUDIO::STOP_AUDIO_SCENE("EXTREME_04_CUSTOM_QUIET_SCENE");
	GlobalFunc_79(800, 0);
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	bLocal_380 = false;
	iLocal_376 = 0;
	iLocal_381 = 0;
	AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_EXTREME_04");
	RECORDING::_0x48621C9FCA3EBD28(0);
	while (MISC::GET_GAME_TIMER() < iLocal_373 + 11000 && !CAM::IS_SCREEN_FADED_OUT())
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_370) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_371))
		{
			if (GlobalFunc_4926(400))
			{
				bLocal_380 = true;
			}
		}
		if (bLocal_380)
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		SYSTEM::WAIT(0);
		if (!iLocal_378)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_370))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_370) == 1f)
				{
					if (GlobalFunc_4924(Local_154))
					{
						uLocal_371 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
						uLocal_363 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_154, uLocal_371, "rcmextreme4", "Base_Jump_Spot_02", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_371, 0);
						CAM::SET_CAM_ACTIVE(uLocal_363, 1);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_363, uLocal_371, "Base_Jump_Spot_02_CAM", "rcmextreme4");
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_154, 0, 0);
						CAM::DESTROY_CAM(uLocal_362, 0);
						iLocal_378 = 1;
					}
				}
			}
		}
		else if (!iLocal_379)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_371) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_371) >= 0.2f)
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_372))
				{
					AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("RCM_Extreme4_Fall_and_impact", 0);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_371) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_371) == 1f)
			{
				if (GlobalFunc_4924(Local_154))
				{
					uLocal_372 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
					uLocal_364 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_154, uLocal_372, "rcmextreme4", "Fall_and_impact", 1000f, -1000f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_372, 1);
					CAM::SET_CAM_ACTIVE(uLocal_364, 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_364, uLocal_372, "Fall_and_impact_CAM", "rcmextreme4");
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_372);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_154, 0, 0);
					CAM::DESTROY_CAM(uLocal_363, 0);
					iLocal_379 = 1;
				}
			}
		}
		else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_372) >= 0.323f)
		{
			if (!iLocal_375)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_extrm4_water_splash", 1655.27f, -20.8134f, 133.841f, 0f, 0f, 0f, 1f, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(1f);
				GlobalFunc_4956();
				iLocal_375 = 1;
			}
			else if (!iLocal_381)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_372) >= 0.44f)
				{
					uLocal_179 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_extrm4_water_blood", 1655.27f, -20.8134f, 133.842f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(uLocal_179, 1f);
					iLocal_381 = 1;
				}
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 600 && fVar1 == 1f)
		{
			if (!iLocal_376)
			{
				iLocal_376 = 1;
			}
		}
		fVar2 = (1f / 30f);
		fVar3 = (MISC::GET_FRAME_TIME() / fVar2);
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 630)
		{
			fVar1 = (fVar1 + (0.035f * fVar3));
			if (fVar1 > 1f)
			{
				fVar1 = 1f;
			}
			MISC::SET_TIME_SCALE(fVar1);
		}
		else
		{
			fVar1 = (fVar1 - (0.07f * fVar3));
			if (fVar1 < 0.1f)
			{
				fVar1 = 0.1f;
			}
			MISC::SET_TIME_SCALE(fVar1);
		}
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 563)
		{
			if (iVar0 == 1)
			{
				GlobalFunc_130(&uLocal_174);
				if (GlobalFunc_4924(Local_154))
				{
				}
				iVar0 = 2;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 871)
		{
			if (iVar0 == 2)
			{
				if (GlobalFunc_4924(Local_154))
				{
				}
				iVar0 = 3;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 2000)
		{
			if (iVar0 == 3)
			{
				if (GlobalFunc_4924(Local_154))
				{
				}
				iVar0 = 4;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 3500)
		{
			if (iVar0 == 4)
			{
				iVar0 = 5;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_373 + 10000)
		{
			if (iVar0 != 7)
			{
				CAM::DESTROY_CAM(uLocal_364, 0);
				uLocal_361 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				CAM::SET_CAM_PARAMS(uLocal_361, 1659.893f, -6.552459f, 174.871f, -29.25931f, 1E-06f, 122.4502f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(uLocal_361, 1);
				iVar0 = 7;
			}
		}
	}
	if (bLocal_380)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_372))
		{
			AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_372);
		}
		AUDIO::CANCEL_MUSIC_EVENT("EXT4_JUMPED_OS");
		GlobalFunc_4956();
		uLocal_361 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::SET_CAM_PARAMS(uLocal_361, 1659.893f, -6.552459f, 174.871f, -29.25931f, 1E-06f, 122.4502f, 50f, 0, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		CAM::SET_CAM_ACTIVE(uLocal_361, 1);
		if (!iLocal_381)
		{
			uLocal_179 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_extrm4_water_blood", 1655.27f, -20.8134f, 133.842f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(uLocal_179, 1f);
			iLocal_381 = 1;
		}
		CAM::DO_SCREEN_FADE_IN(500);
		SYSTEM::WAIT(100);
	}
	AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_EXTREME_04");
	GlobalFunc_130(&uLocal_174);
	if (GlobalFunc_4924(Local_154))
	{
		if (iVar0 < 3)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_154, 101);
			Var4 = { ENTITY::GET_ENTITY_COORDS(Local_154, 1) };
			if (Var4.f_2 > 155f)
			{
				fVar7 = 155f;
			}
			else
			{
				fVar7 = Var4.f_2;
			}
			ENTITY::SET_ENTITY_COORDS(Local_154, 1657.046f, -17.4571f, fVar7, 1, 0, 0, 1);
		}
	}
	RECORDING::_0x81CBAE94390F9F89();
	func_223(1, 1, 1, 1);
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 128);
	MISC::SET_TIME_SCALE(1f);
	if (GlobalFunc_115(Local_154))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_372))
		{
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_372, 1f);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_154);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_154, 0, 0);
		ENTITY::SET_ENTITY_COORDS(Local_154, 1655.77f, -20.04f, 135.8f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEALTH(Local_154, 0);
	}
	GlobalFunc_173(&uLocal_181, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_10618(&uLocal_181, "EXT4AUD", "EXT4_DUMB", 7, 0, 0, 0);
}


void func_223(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25D14
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
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













void func_236()//Position - 0x260A7
{
	if (iLocal_148 < 2)
	{
		AUDIO::PREPARE_MUSIC_EVENT("EXT4_JUMPED_OS");
	}
	switch (iLocal_148)
	{
		case 0:
			iLocal_150 = 0;
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1655.139f, 5.342447f, 172.6748f, 1662.085f, -6.198325f, 175.0248f, 8.25f, 0, 1, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 6, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 5, 8);
			}
			AUDIO::STOP_SOUND(uLocal_366);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Dom", 8, 2, 0, 0);
			}
			if (!GlobalFunc_111())
			{
				if (func_251(1, 20f, 1))
				{
					if ((!iLocal_382 || MISC::GET_GAME_TIMER() > iLocal_383 + 3000) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1658.95f, -5.45f, 173.78f, 0.2f, 0.2f, 0.2f, 0, 1, 0))
					{
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(2048);
						if (GlobalFunc_4924(Local_154))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_154, "Dom", 0, joaat("cs_dom"), 0);
						}
						SYSTEM::WAIT(0);
						iLocal_382 = 0;
						CAM::STOP_GAMEPLAY_HINT(0);
						AUDIO::START_AUDIO_SCENE("EXTREME_04_CUSTOM_QUIET_SCENE");
						if (GlobalFunc_4924(Local_154))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_154, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_178) && !ENTITY::IS_ENTITY_DEAD(iLocal_178))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_178, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_171 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_180 = ENTITY::GET_ENTITY_MODEL(iLocal_171);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_180) == 1 || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_180) == 1)
							{
								Local_347 = { 1649.793f, 11.7826f, 172.7745f };
								fLocal_350 = 220.9923f;
							}
							else
							{
								Local_347 = { 1662.016f, 53.0925f, 171.2482f };
								fLocal_350 = 298.6364f;
							}
							func_242(1654.721f, 4.166876f, 172.5245f, 1662.562f, -8.920052f, 178.2742f, 6.25f, Local_347, fLocal_350, 1, 1, 1, 0, 0);
						}
						else
						{
							Local_347 = { 1649.793f, 11.7826f, 172.7745f };
							fLocal_350 = 220.9923f;
							GlobalFunc_2889(Local_347, fLocal_350);
						}
						func_238(1660.186f, -7.492f, 172.774f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						MISC::CLEAR_AREA_OF_PEDS(1660.186f, -7.492f, 172.774f, 200f, 0);
						uLocal_365 = PED::ADD_SCENARIO_BLOCKING_AREA(1636.691f, -89.8127f, 150f, 1706.146f, 58.721f, 190f, 0, 1, 1, 1);
						iLocal_148 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (!iLocal_153)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_370))
						{
							if (GlobalFunc_4924(Local_154))
							{
								if (!CAM::DOES_CAM_EXIST(uLocal_362))
								{
									uLocal_362 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
								}
								CAM::SET_CAM_ACTIVE(uLocal_362, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								uLocal_370 = PED::CREATE_SYNCHRONIZED_SCENE(1656.378f, -12.057f, 169.038f, 0f, 0f, 115.85f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_154, uLocal_370, "rcmextreme4", "Base_Jump_Spot", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_370, 1);
								CAM::SET_CAM_ACTIVE(uLocal_362, 1);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_362, uLocal_370, "Base_Jump_Spot_CAM", "rcmextreme4");
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_154, 0, 0);
								iLocal_153 = 1;
							}
						}
					}
					iLocal_148 = 2;
				}
				if (GlobalFunc_4924(Local_154))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
					{
						iLocal_148 = 2;
					}
				}
			}
			else
			{
				iLocal_148 = 2;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_178) && !ENTITY::IS_ENTITY_DEAD(iLocal_178))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_178, 1);
			}
			if (iLocal_150 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXT4_JUMPED_OS");
				func_237(3);
			}
			break;
	}
}

void func_237(int iParam0)//Position - 0x26466
{
	iLocal_147 = iParam0;
	iLocal_148 = 0;
	iLocal_149 = 0;
}

void func_238(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26478
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




void func_242(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x266C7
{
	GlobalFunc_9250(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}









int func_251(int iParam0, float fParam1, int iParam2)//Position - 0x27097
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_2307(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -828834893))
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
	return 1;
}






void func_257()//Position - 0x273A4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 1)
		{
			if (((((((PAD::IS_CONTROL_PRESSED(0, 30) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 1))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 2))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 32)))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	switch (iLocal_148)
	{
		case 0:
			if (GlobalFunc_4924(Local_81.f_28[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_81.f_28[0], 17, 1);
			}
			iLocal_367 = 0;
			iLocal_382 = 1;
			GlobalFunc_164("EXT4_01", 7500, 1);
			uLocal_169 = GlobalFunc_4955(Local_154, 1, 1, 5);
			SYSTEM::SETTIMERA(0);
			iLocal_148 = 1;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_177))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_177, 1f))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
						OBJECT::DELETE_OBJECT(&iLocal_177);
					}
				}
			}
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_4924(Local_154))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_154, 100f))
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_4_rcm_p2_concat", 6, 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Dom", 8, 2, 0, 0);
						}
					}
					if (PED::IS_PED_RAGDOLL(Local_154))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_154, 0);
					}
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_154, 32f))
					{
						if (GlobalFunc_8324(Local_154, 1, 0, 0, 0))
						{
							if (iLocal_168 == 0)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_10630(&uLocal_181, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_1", 7, 0, 0);
									iLocal_168 = 1;
								}
							}
							else if (iLocal_168 == 1)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_10630(&uLocal_181, "EXT4AUD", "EXT4_ATTACK", "EXT4_ATTACK_2", 7, 0, 0);
									iLocal_168 = 2;
								}
							}
						}
						else
						{
							if (!iLocal_377)
							{
								if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_154, 30f) && !GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_181, "EXT4AUD", "EXT4_COMM", 7, 0, 0, 0))
									{
										iLocal_377 = 1;
									}
								}
							}
							func_259();
							if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_154))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_154, -1, 0, 2);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1663.587f, -11.71415f, 172.6748f, 1658.387f, -1.735749f, 175.7748f, 5.5f, 0, 1, 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_148 = 2;
						}
						else
						{
							iLocal_171 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_180 = ENTITY::GET_ENTITY_MODEL(iLocal_171);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_180) == 1 || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_180) == 1)
							{
								iLocal_148 = 2;
							}
						}
					}
					else
					{
						func_258();
					}
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
			GlobalFunc_846(&uLocal_169);
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 1, 0);
					SYSTEM::WAIT(600);
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			func_237(2);
			break;
	}
}

void func_258()//Position - 0x276DC
{
	if (GlobalFunc_4924(Local_154))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_154, 242628503) != 1)
		{
			TASK::TASK_PERFORM_SEQUENCE(Local_154, uLocal_170);
		}
	}
}

void func_259()//Position - 0x27704
{
	if (!GlobalFunc_111())
	{
		if (iLocal_367 < 5)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_368 + (8000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))))
			{
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_366))
				{
					if (GlobalFunc_10618(&uLocal_181, "EXT4AUD", "EXT4_DOM", 6, 0, 0, 0))
					{
						iLocal_368 = MISC::GET_GAME_TIMER();
						iLocal_367++;
						return;
					}
				}
			}
		}
	}
	if (!GlobalFunc_111())
	{
		if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_A", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_B", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_C", 0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(uLocal_366))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_366, "DOM", Local_154, "EXTREME_04_SOUNDSET", 0, 0);
			}
		}
	}
}











void func_270()//Position - 0x27C1A
{
	if (GlobalFunc_199() == 0)
	{
		func_281();
	}
	else
	{
		GlobalFunc_4972(1732.133f, 91.9424f, 169.7872f, 128.6917f, 1, 0);
		GlobalFunc_4967(0, -1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1723.452f, 80.729f, 169.6701f, 1f, -1, 1f, 2113, 40000f);
		GlobalFunc_79(800, 0);
		iLocal_151 = 1;
		func_277(1, 1, 1);
	}
	if (iLocal_151 == 1)
	{
		GlobalFunc_4923(&Local_81, 0, 1);
		func_271();
	}
}

void func_271()//Position - 0x27CD3
{
	if (GlobalFunc_115(Local_81.f_28[0]))
	{
		GlobalFunc_5705(Local_81.f_28[0], 1737.453f, 101.7498f, 170.0243f, 288.5211f, 0, 1);
	}
	else
	{
		func_272(&(Local_81.f_28[0]), 1737.453f, 101.7498f, 170.0243f, 288.5211f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_81.f_28[0], 1826.662f, 146.9161f, 170.4472f, 1f, -1, 0.25f, 0, 40000f);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_154.f_1, 20f, 0, 0, 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		iLocal_172 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 1662.88f, -14.255f, 172.7742f, 205.3516f, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		iLocal_173 = VEHICLE::CREATE_VEHICLE(joaat("bmx"), 1633.766f, -23.6768f, 127.0535f, 55.7565f, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		iLocal_175 = OBJECT::CREATE_OBJECT(joaat("prop_box_wood01a"), 1666.282f, -11.20408f, 172.7773f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_175, 0.000637f, -0.000136f, 10.66059f, 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		iLocal_176 = OBJECT::CREATE_OBJECT(joaat("prop_box_wood01a"), 1667.076f, -12.07778f, 173.2611f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_176, 90.03932f, -0.257438f, -13.86142f, 2, 1);
	}
	if (GlobalFunc_4924(Local_154))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_154, 242628503) != 1)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_170);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "fidget_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmextreme4", "fidget_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_170, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_170);
			TASK::TASK_PERFORM_SEQUENCE(Local_154, uLocal_170);
		}
	}
	if (GlobalFunc_4924(Local_154))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_154, 0);
		GlobalFunc_173(&uLocal_181, 4, Local_154, "DOM", 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_154, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		iLocal_178 = OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_parachute"), 1665.264f, -11.4427f, 172.7747f, 7, -1, joaat("p_parachute_s"), 1, 1);
	}
	ENTITY::SET_ENTITY_ROTATION(iLocal_178, -111.8225f, -0.454914f, -162.2231f, 2, 1);
	ENTITY::PLAY_ENTITY_ANIM(iLocal_178, "Chute_Off_Bag", "skydive@parachute@", 4f, 0, 1, 0, 0.99f, 0);
	func_237(1);
}

void func_272(var uParam0, struct<3> Param1, float fParam4)//Position - 0x27FD0
{
	func_273(uParam0, iLocal_80, Param1, fParam4, 26);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "EXTREME LAUNCHER RC");
}

void func_273(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6)//Position - 0x28003
{
	GlobalFunc_881(uParam0);
	*uParam0 = PED::CREATE_PED(iParam6, iParam1, Param2, uParam5, 0, 0);
}




void func_277(int iParam0, int iParam1, int iParam2)//Position - 0x281B1
{
	func_223(0, 0, iParam2, 1);
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




void func_281()//Position - 0x28352
{
	switch (iLocal_149)
	{
		case 0:
			func_286();
			iLocal_150 = 0;
			GlobalFunc_9623("es_4_rcm_p1", 0);
			if (GlobalFunc_7956(1, 1093140480, 0))
			{
				if (!iLocal_382 || MISC::GET_GAME_TIMER() > iLocal_383 + 3500)
				{
					GlobalFunc_8954();
					RECORDING::_0x48621C9FCA3EBD28(1);
					CUTSCENE::START_CUTSCENE(0);
					if (GlobalFunc_115(Local_81.f_28[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[0], "Hudson", 0, joaat("a_c_retriever"), 0);
					}
					SYSTEM::WAIT(0);
					CAM::STOP_GAMEPLAY_HINT(0);
					func_242(1729.922f, 89.4162f, 174.0123f, 1739.745f, 101.2816f, 167.8282f, 7f, 1739.956f, 97.8651f, 169.9797f, 140.876f, 1, 1, 1, 0, 0);
					func_242(1743.115f, 105.833f, 169.6362f, 1732.029f, 93.77112f, 172.6075f, 4f, 1739.956f, 97.8651f, 169.9797f, 140.876f, 1, 1, 1, 0, 0);
					func_238(1733.315f, 95.2246f, 169.9192f, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					iLocal_149 = 1;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				iLocal_149 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				iLocal_149 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 1732.222f, 92.0087f, 169.7867f, 138.1854f, 0, 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1723.452f, 80.729f, 169.6701f, 1f, -1, 1f, 2113, 40000f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_151 = 1;
			func_223(1, 1, 1, 1);
			break;
	}
}





void func_286()//Position - 0x28634
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = 35f;
	fVar1 = 0.4f;
	fVar2 = 0f;
	fVar3 = -0.85f;
	fVar4 = 0f;
	if (((!GlobalFunc_199() && GlobalFunc_4924(Local_81.f_28[0])) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && iLocal_382 == 1)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], -1, 0, 2);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 0f, 0f, 0f, 1f, -1, 0.5f, 1);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], -0.5f, 0f, -0.2f, 1, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fVar3);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fVar4);
			iLocal_383 = MISC::GET_GAME_TIMER();
		}
		else
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 4f))
			{
				iLocal_383 = (iLocal_383 - 10000);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::_0xCCD078C2665D2973(1);
		}
	}
}

void func_287()//Position - 0x2873D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = 35f;
	fVar1 = 0.45f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0.07f;
	if (iLocal_382)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_154, -1, 0, 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1658.95f, -5.45f, 173.78f, 1f, -1, 0.25f, 0, -161.08f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_154, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fVar3);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fVar4);
			iLocal_383 = MISC::GET_GAME_TIMER();
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::_0xCCD078C2665D2973(1);
		}
	}
}

void func_288()//Position - 0x287F8
{
	float fVar0;
	
	if (iLocal_147 == 1)
	{
		if (!GlobalFunc_4924(Local_154))
		{
			sLocal_167 = "EXT4_F1";
			iLocal_147 = 4;
		}
		else
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_154, 1), 1);
			if (iLocal_152 == 0)
			{
				if (fVar0 > 160f)
				{
					iLocal_152 = 1;
				}
			}
			else if (fVar0 > 200f)
			{
				sLocal_167 = "EXT4_F2";
				iLocal_147 = 4;
			}
			if (fVar0 > 150f)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_169))
				{
					HUD::SET_BLIP_FLASHES(uLocal_169, 1);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_169))
			{
				HUD::SET_BLIP_FLASHES(uLocal_169, 0);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1660.332f, -20.45607f, 136.7029f, 1584.419f, -30.29117f, 120.6038f, 32f, 0, 1, 0))
		{
			sLocal_167 = "EXT4_F2";
			iLocal_147 = 4;
		}
	}
}

void func_289(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x288C6
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



















void func_308()//Position - 0x2937B
{
	GlobalFunc_9621(52, 1, 0);
	iLocal_152 = 0;
	Local_154.f_1 = { 1658.42f, -8.02f, (174.78f - 1f) };
	Local_154.f_4 = 116.87f;
	Local_154.f_5 = GlobalFunc_4946(52);
	Local_154.f_9 = { 1660.324f, -11.7125f, 173.9638f };
	Local_154.f_12 = 119.6007f;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT4", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_MODEL(joaat("prop_box_guncase_03a"));
	STREAMING::REQUEST_MODEL(joaat("prop_box_wood01a"));
	STREAMING::REQUEST_MODEL(joaat("p_parachute_s"));
	STREAMING::REQUEST_MODEL(joaat("bmx"));
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("prop_box_guncase_03a")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood01a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_parachute_s"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bmx")))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_174))
	{
		iLocal_174 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_box_guncase_03a"), 1658.299f, -7.930665f, 173.71f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_174, 90f, 0f, -63f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_174, 0);
	}
	func_312(1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_154))
	{
		GlobalFunc_7964(&Local_154, 52, Local_154.f_1, Local_154.f_4, "Ext4-Dom", 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_154, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_154, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_154, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_154, 8, 2, 0, 0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_154, 1);
		PED::SET_PED_CONFIG_FLAG(Local_154, 137, 1);
		PED::SET_PED_CONFIG_FLAG(Local_154, 118, 0);
		PED::SET_PED_CONFIG_FLAG(Local_154, 208, 1);
		PED::SET_PED_MONEY(Local_154, 5000);
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_181, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_374 = 0;
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	bLocal_380 = false;
	iLocal_382 = 0;
	iLocal_153 = 0;
	func_237(0);
}




void func_312(int iParam0)//Position - 0x29686
{
	STREAMING::REQUEST_MODEL(Local_154.f_5);
	STREAMING::REQUEST_ANIM_DICT("rcmextreme4");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_PTFX_ASSET();
	if (iParam0 == 1)
	{
		while ((((!STREAMING::HAS_MODEL_LOADED(Local_154.f_5) || !STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme4")) || !STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
		}
	}
}



int func_315(var uParam0)//Position - 0x2992F
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_80;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 12f;
			StringCopy(&(uParam0->f_9), "ES_4_RCM_P1", 24);
			uParam0->f_27 = 0;
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmextreme4", "idle_a", "idle_c");
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
			func_272(&(uParam0->f_28[0]), 1732.27f, 96.36f, 170.29f, -98.56f);
			PED::SET_PED_CAN_LEG_IK(uParam0->f_28[0], 1);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}






void func_321(int iParam0)//Position - 0x29B13
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		func_2(iParam0);
		func_334();
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_365, 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GlobalFunc_129(&iLocal_175, 0);
	GlobalFunc_129(&iLocal_176, 0);
	GlobalFunc_129(&iLocal_177, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 1);
	GlobalFunc_9165(&Local_81, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}













void func_334()//Position - 0x29E00
{
	GlobalFunc_9165(&Local_81, 1, 0, 0);
	GlobalFunc_132(&(Local_81.f_28[0]), 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("rcmextreme4");
}



























