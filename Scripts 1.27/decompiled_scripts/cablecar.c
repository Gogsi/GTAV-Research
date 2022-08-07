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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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
	int iLocal_38 = 0;
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
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<49> Local_73[2];
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	struct<22> Local_176 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
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
	struct<35> Local_328 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	struct<35> Local_363 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_398 = 0;
	var uLocal_399 = 2;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 2;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 2;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = -1027211264;
	var uLocal_421 = 0;
	int iLocal_422 = 0;
	float fLocal_423 = 0f;
	int iLocal_424 = 0;
	float fLocal_425 = 0f;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	struct<3> Local_432 = { 0, 0, 0 } ;
	struct<3> Local_435 = { 0, 0, 0 } ;
	float fLocal_438 = 0f;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	bool bLocal_441 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_52 = 1;
	Local_53 = { -740.3f, 5594.5f, 41.2f };
	Local_56 = { 446.8f, 5571.1f, 780.7f };
	Local_59 = { 0f, 2.48f, -5.3f };
	Local_62 = { 1.3f, 0f, -5.3f };
	Local_65 = { -1.3f, 0f, -5.3f };
	fLocal_68 = 1f;
	fLocal_69 = 10f;
	fLocal_70 = 0.65f;
	iLocal_71 = 120000;
	iLocal_72 = 35000;
	iLocal_172 = joaat("p_cablecar_s");
	iLocal_173 = joaat("p_cablecar_s_door_l");
	iLocal_174 = joaat("p_cablecar_s_door_r");
	fLocal_175 = -15f;
	iLocal_209 = 1;
	fLocal_423 = 3f;
	fLocal_425 = 0f;
	iLocal_427 = 21;
	iLocal_431 = -1;
	Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cablecar")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(227))
	{
		func_296(1, 1, 1, 1);
		Global_24449 = 0;
		func_292(0);
	}
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
	func_284();
	func_283(&(Local_73[0 /*49*/]));
	func_280(&(Local_73[1 /*49*/]));
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", 1, 1);
	func_277(&Local_328, 0, 0, 0, 1065353216);
	func_277(&Local_363, 1, 0, 0, 1065353216);
	func_276();
	Local_328.f_25 = (MISC::GET_GAME_TIMER() + iLocal_72);
	Local_363.f_25 = (MISC::GET_GAME_TIMER() + iLocal_72);
	GlobalFunc_728(iLocal_439);
	GlobalFunc_2453(fLocal_438);
	GlobalFunc_105(Local_435);
	GlobalFunc_105(Local_432);
	while (true)
	{
		if (Global_24447 == 1)
		{
			func_272(&Local_328);
			func_272(&Local_363);
		}
		if (!GlobalFunc_852(PLAYER::PLAYER_PED_ID()) || Global_24447 == 1)
		{
			func_296(1, 1, 1, 1);
			Global_24449 = 0;
			GlobalFunc_1475(&uLocal_421, 0);
			GlobalFunc_431(&Local_176, 0, 1);
			func_292(0);
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (((Var0.x <= -900f || Var0.x >= 740f) || Var0.f_1 <= 5200f) || Var0.f_1 >= 5900f)
		{
			func_292(0);
		}
		func_17(&Local_328);
		func_17(&Local_363);
		func_11(&Local_328);
		func_11(&Local_363);
		if (bLocal_207 == 1)
		{
			GlobalFunc_4995(&Local_176, 0, 1, 0, 0, 1045220557, 0);
		}
		else
		{
			func_5();
		}
		if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::IS_SCREEN_FADED_IN() && iLocal_208 == 0)
			{
				if (func_4())
				{
					Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					if (bLocal_441)
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Var0, CAM::GET_FINAL_RENDERED_CAM_COORD() - Var3);
						Var3 = { Var0 };
					}
					if (MISC::GET_GAME_TIMER() > iLocal_426)
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var0);
						iLocal_426 = MISC::GET_GAME_TIMER() + 5000;
					}
				}
			}
		}
		if ((iLocal_428 == 0 && MISC::GET_MISSION_FLAG()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bailbond3")) == 0)
		{
			func_272(&Local_328);
			func_272(&Local_363);
			GlobalFunc_2348(&(Local_328.f_28));
			GlobalFunc_2348(&(Local_363.f_28));
			iLocal_428 = 1;
		}
		if (iLocal_428 == 1 && !MISC::GET_MISSION_FLAG())
		{
			func_1(&Local_328);
			func_1(&Local_363);
			iLocal_428 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x38B
{
	if (GlobalFunc_852(uParam0->f_2))
	{
		uParam0->f_31 = 0.88f;
		func_2(uParam0, 0.88f);
	}
}

void func_2(var uParam0, float fParam1)//Position - 0x3B2
{
	int iVar0;
	
	if (GlobalFunc_852(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (GlobalFunc_852(uParam0->f_3[iVar0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3[iVar0]))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3[iVar0], 1, 1);
				}
				if (iVar0 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[iVar0], uParam0->f_2, 0, 0f, fParam1, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[iVar0], uParam0->f_2, 0, 0f, -fParam1, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
			}
			if (GlobalFunc_852(uParam0->f_6[iVar0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_6[iVar0]))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_6[iVar0], 1, 1);
				}
				if (iVar0 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[iVar0], uParam0->f_2, 0, 0f, -fParam1, 0f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[iVar0], uParam0->f_2, 0, 0f, fParam1, 0f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
				}
			}
			iVar0++;
		}
	}
}


bool func_4()//Position - 0x4E7
{
	return ((Local_328.f_11 && Local_328.f_34) || (Local_363.f_11 && Local_363.f_34));
}

void func_5()//Position - 0x513
{
	int iVar0;
	
	if (Local_328.f_11 == 1 || Local_363.f_11 == 1)
	{
		return;
	}
	if (iLocal_429 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 446.2582f, 5582.625f, 780.1892f, 446.3005f, 5560.008f, 786.9392f, 12.25f, 0, 1, 0))
	{
		if (Local_328.f_9)
		{
			iVar0++;
		}
		if (Local_363.f_9)
		{
			iVar0++;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -742.3477f, 5587.019f, 40.66549f, -742.1461f, 5602.772f, 49.8471f, 12.25f, 0, 1, 0))
	{
		if (Local_328.f_9)
		{
			iVar0++;
		}
		if (Local_363.f_9)
		{
			iVar0++;
		}
	}
	if (iVar0 == 2)
	{
		GlobalFunc_159("WAIT_CABLE", -1);
		iLocal_429 = 1;
	}
}






void func_11(var uParam0)//Position - 0xC01
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0f;
	if (GlobalFunc_847(uParam0->f_2))
	{
		return;
	}
	if (*uParam0 <= 11)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (MISC::GET_GAME_TIMER() < (uParam0->f_26 + iLocal_71))
		{
			return;
		}
		Var0 = { func_14(&(Local_73[uParam0->f_15 /*49*/]), 0, &iVar3) };
		Var0 = { Var0 + Vector(-0.2f, 0f, 0f) };
		if (CAM::IS_SPHERE_VISIBLE(Var0, 30f))
		{
			return;
		}
	}
	func_284();
	func_277(uParam0, uParam0->f_15, 0, iVar3, 1f);
	GlobalFunc_5398(&uLocal_210, 0);
}



Vector3 func_14(var uParam0, int iParam1, float fParam2)//Position - 0xEA6
{
	if (iParam1 < 0)
	{
		*fParam2 = 0f;
		return *(uParam0[0 /*3*/]);
	}
	if (iParam1 >= (uParam0->f_46 - 1))
	{
		*fParam2 = 0f;
		return *(uParam0[(uParam0->f_46 - 1) /*3*/]);
	}
	if (*fParam2 < 0f)
	{
		*fParam2 = 0f;
	}
	if (*fParam2 > 1f)
	{
		*fParam2 = 1f;
	}
	return GlobalFunc_5778(*(uParam0[iParam1 /*3*/]), *(uParam0[iParam1 + 1 /*3*/]), *fParam2, 1);
}



void func_17(var uParam0)//Position - 0xF5B
{
	struct<3> Var0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return;
	}
	uParam0->f_27 = (MISC::GET_GAME_TIMER() - uParam0->f_25);
	if (uParam0->f_27 < 0)
	{
		uParam0->f_27 = 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && *uParam0 < 11)
	{
		GlobalFunc_2348(&(uParam0->f_28));
		*uParam0 = 11;
	}
	if (iLocal_424 == 1)
	{
		fLocal_425 = (fLocal_425 + MISC::GET_FRAME_TIME());
		STREAMING::SET_SRL_TIME(fLocal_425);
	}
	uParam0->f_33 = func_269(PLAYER::PLAYER_PED_ID(), uParam0, 0f, 0);
	if (uParam0->f_33)
	{
		if (uParam0->f_28 != -1)
		{
			GlobalFunc_2348(&(uParam0->f_28));
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
	switch (*uParam0)
	{
		case 0:
		case 1:
			if (uParam0->f_31 < 0.88f)
			{
				uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
				if (uParam0->f_31 > 0.88f)
				{
					uParam0->f_31 = 0.88f;
				}
			}
			func_2(uParam0, uParam0->f_31);
			func_253(uParam0);
			break;
		
		case 2:
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_2, 0);
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
				*uParam0 = 3;
				uParam0->f_20 = 0f;
				uParam0->f_9 = 1;
				uParam0->f_16 = 0f;
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_27 = 0;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Leave_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_73[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], 1);
				if (uParam0->f_11 == 1)
				{
					GlobalFunc_159("FGND_SWTCHCAM", -1);
				}
			}
			func_2(uParam0, uParam0->f_31);
			break;
		
		case 3:
			if (uParam0->f_11 == 1)
			{
				func_242(uParam0);
			}
			if (!uParam0->f_33)
			{
				uParam0->f_16 = (uParam0->f_16 + ((fLocal_70 * SYSTEM::TIMESTEP()) * fLocal_68));
				if (uParam0->f_16 >= fLocal_69)
				{
					uParam0->f_16 = fLocal_69;
					*uParam0 = 4;
					uParam0->f_31 = 0f;
					func_2(uParam0, uParam0->f_31);
				}
			}
			break;
		
		case 4:
			if (uParam0->f_11 == 1)
			{
				func_242(uParam0);
			}
			if (!uParam0->f_33 && uParam0->f_9)
			{
				if (uParam0->f_28 == -1)
				{
					uParam0->f_28 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				}
			}
			if (!uParam0->f_32)
			{
				uParam0->f_16 = (uParam0->f_16 + ((fLocal_70 * SYSTEM::TIMESTEP()) * fLocal_68));
				if (uParam0->f_16 >= fLocal_69)
				{
					uParam0->f_16 = fLocal_69;
				}
			}
			if ((Local_73[uParam0->f_15 /*49*/].f_48 - uParam0->f_20) < 75f)
			{
				*uParam0 = 5;
				if (uParam0->f_11 == 1)
				{
					if (bLocal_207 == 1)
					{
						func_241();
						if (func_240(uParam0) == 0)
						{
							func_239(&uLocal_398, &uLocal_421, 0, 0, 1, 1);
						}
						else
						{
							func_238(&uLocal_398, &uLocal_421);
						}
					}
					func_235(uParam0);
				}
			}
			if (!uParam0->f_9 || uParam0->f_20 >= Local_73[uParam0->f_15 /*49*/].f_48)
			{
				*uParam0 = 6;
			}
			if (uParam0->f_32 && uParam0->f_11 == 1)
			{
				uParam0->f_16 = (uParam0->f_16 - (((fLocal_70 * SYSTEM::TIMESTEP()) * fLocal_68) * 2f));
				if (uParam0->f_16 <= 0f)
				{
					uParam0->f_16 = 0f;
					*uParam0 = 8;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				}
			}
			break;
		
		case 8:
			uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
			if (uParam0->f_31 > 0.88f)
			{
				uParam0->f_31 = 0.88f;
				uParam0->f_32 = 1;
				*uParam0 = 9;
				func_234(uParam0);
			}
			func_2(uParam0, uParam0->f_31);
			break;
		
		case 9:
			if (func_227(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					func_102(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					*uParam0 = 10;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				}
			}
			else if (!func_227(PLAYER::PLAYER_PED_ID(), uParam0, 1.1f, 0))
			{
				*uParam0 = 10;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
				uParam0->f_11 = 0;
			}
			break;
		
		case 10:
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
				*uParam0 = 4;
				if (uParam0->f_11 == 1)
				{
					func_99(uParam0);
					func_97(func_240(uParam0));
				}
				uParam0->f_32 = 0;
			}
			func_2(uParam0, uParam0->f_31);
			break;
		
		case 5:
			if (uParam0->f_11 == 1)
			{
				func_242(uParam0);
			}
			if (!uParam0->f_33)
			{
				uParam0->f_16 = (uParam0->f_16 - ((fLocal_70 * SYSTEM::TIMESTEP()) * fLocal_68));
				if (uParam0->f_16 <= 1f)
				{
					uParam0->f_16 = 1f;
				}
				if (!uParam0->f_9)
				{
					*uParam0 = 6;
					uParam0->f_16 = 0f;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
					GlobalFunc_2348(&(uParam0->f_28));
				}
			}
			break;
		
		case 6:
			uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
			if (uParam0->f_31 > 0.88f)
			{
				uParam0->f_31 = 0.88f;
				func_40(uParam0, 0);
			}
			func_2(uParam0, uParam0->f_31);
			break;
		
		case 7:
			if (!func_227(PLAYER::PLAYER_PED_ID(), uParam0, 1.125f, 0))
			{
				*uParam0 = 1;
				uParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE((iLocal_72 - 8000), iLocal_72 + 8000));
				uParam0->f_17 = (uParam0->f_17 * -1f);
			}
			break;
		
		case 11:
			if (func_227(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			func_38(uParam0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 0);
			uParam0->f_26 = MISC::GET_GAME_TIMER();
			HUD::CLEAR_HELP(1);
			if (uParam0->f_11 == 1)
			{
				func_234(uParam0);
				HUD::CLEAR_HELP(1);
				func_33(uParam0, 0);
				return;
			}
			else if (STREAMING::STREAMVOL_IS_VALID(uLocal_51))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_51);
			}
			*uParam0 = 12;
			return;
		
		case 12:
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 0) };
			if (!CAM::IS_SPHERE_VISIBLE(Var0, 10f))
			{
				func_33(uParam0, 0);
				return;
			}
			break;
	}
	if (uParam0->f_11)
	{
		func_23(uParam0);
	}
	if (uParam0->f_9)
	{
		if (uParam0->f_17 >= 0f)
		{
			func_22(uParam0);
		}
		else
		{
			func_18(uParam0);
		}
	}
}

int func_18(var uParam0)//Position - 0x15AE
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	
	if (*uParam0 >= 8)
	{
		return 0;
	}
	if (!uParam0->f_9)
	{
		return 1;
	}
	Var1 = { uParam0->f_12 };
	if (uParam0->f_30 != 0f)
	{
		fVar0 = ((uParam0->f_17 * uParam0->f_16) / uParam0->f_30);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_33)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar4 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_68);
		if (!func_4())
		{
			if (!func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 50f))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_2))
				{
					fVar4 = (fVar4 * fLocal_423);
				}
			}
		}
		uParam0->f_19 = (uParam0->f_19 + fVar4);
		if (uParam0->f_19 < 0f)
		{
			uParam0->f_19 = 1f;
			if (uParam0->f_11 == 1)
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var5);
			}
			uParam0->f_18 = (uParam0->f_18 - 1);
			if (uParam0->f_18 < 0)
			{
				uParam0->f_18 = 0;
				uParam0->f_19 = 0f;
				uParam0->f_16 = 0f;
				uParam0->f_9 = 0;
				uParam0->f_12 = { Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/] };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
				return 1;
			}
			func_20(uParam0);
			uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_73[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], 1);
		}
		if (uParam0->f_18 < (Local_73[uParam0->f_15 /*49*/].f_46 - 1))
		{
			uParam0->f_12 = { GlobalFunc_5778(Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_73[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], uParam0->f_19, 1) };
			func_19(uParam0);
		}
		uParam0->f_20 = (uParam0->f_20 + MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_12, Var1, 1));
	}
	return 0;
}

void func_19(var uParam0)//Position - 0x176B
{
	if (Local_328.f_11 || Local_363.f_11)
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(uParam0->f_12 + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
		return;
	}
}

void func_20(var uParam0)//Position - 0x1818
{
	char cVar0[16];
	
	StringCopy(&cVar0, "C", 16);
	StringIntConCat(&cVar0, uParam0->f_15 + 1, 16);
	if (func_240(uParam0) == 0)
	{
		switch (uParam0->f_18)
		{
			case 0:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			
			case 1:
				StringConCat(&cVar0, "_up_1", 16);
				break;
			
			case 3:
				StringConCat(&cVar0, "_up_3", 16);
				break;
			
			case 5:
				StringConCat(&cVar0, "_up_4", 16);
				break;
			
			case 7:
				StringConCat(&cVar0, "_up_5", 16);
				break;
			
			case 9:
				StringConCat(&cVar0, "_up_6", 16);
				break;
			
			case 11:
				StringConCat(&cVar0, "_up_8", 16);
				break;
			
			case 12:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			
			default:
				return;
		}
	}
	else
	{
		switch (uParam0->f_18)
		{
			case 0:
				StringConCat(&cVar0, "_down_1", 16);
				break;
			
			case 1:
				StringConCat(&cVar0, "_down_2", 16);
				break;
			
			case 3:
				StringConCat(&cVar0, "_down_3", 16);
				break;
			
			case 5:
				StringConCat(&cVar0, "_down_4", 16);
				break;
			
			case 7:
				StringConCat(&cVar0, "_down_5", 16);
				break;
			
			case 9:
				StringConCat(&cVar0, "_down_6", 16);
				break;
			
			case 11:
				StringConCat(&cVar0, "_down_8", 16);
				break;
			
			case 12:
				StringConCat(&cVar0, "_down_9", 16);
				break;
			
			default:
				return;
			}
	}
	ENTITY::PLAY_ENTITY_ANIM(uParam0->f_2, &cVar0, "p_cablecar_s", 8f, 0, 1, 0, 0, 0);
}

bool func_21(var uParam0, struct<3> Param1, float fParam4)//Position - 0x196E
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	Var3 = { Param1 - Var0 };
	return ((Var3.x * Var3.x) + (Var3.f_1 * Var3.f_1)) <= (fParam4 * fParam4);
}

int func_22(var uParam0)//Position - 0x19A3
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	
	if (*uParam0 >= 8)
	{
		return 0;
	}
	if (!uParam0->f_9)
	{
		return 1;
	}
	if (uParam0->f_18 + 1 >= Local_73[uParam0->f_15 /*49*/].f_46)
	{
		return 1;
	}
	Var1 = { uParam0->f_12 };
	if (uParam0->f_30 != 0f)
	{
		fVar0 = ((uParam0->f_17 * uParam0->f_16) / uParam0->f_30);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_33)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar4 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_68);
		if (!func_4())
		{
			if (!func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 50f))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_2))
				{
					fVar4 = (fVar4 * fLocal_423);
				}
			}
		}
		uParam0->f_19 = (uParam0->f_19 + fVar4);
		if (uParam0->f_19 >= 1f)
		{
			uParam0->f_19 = 0f;
			if (uParam0->f_11 == 1)
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var5);
			}
			uParam0->f_18++;
			if (uParam0->f_18 >= (Local_73[uParam0->f_15 /*49*/].f_46 - 1))
			{
				uParam0->f_18 = (Local_73[uParam0->f_15 /*49*/].f_46 - 1);
				uParam0->f_16 = 0f;
				uParam0->f_9 = 0;
				uParam0->f_12 = { Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/] };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
				return 1;
			}
			func_20(uParam0);
			uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_73[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], 1);
		}
		if (uParam0->f_18 < (Local_73[uParam0->f_15 /*49*/].f_46 - 1))
		{
			uParam0->f_12 = { func_14(&(Local_73[uParam0->f_15 /*49*/]), uParam0->f_18, &(uParam0->f_19)) };
			func_19(uParam0);
		}
		uParam0->f_20 = (uParam0->f_20 + MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_12, Var1, 1));
	}
	return 0;
}

void func_23(var uParam0)//Position - 0x1B71
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (iVar0 < 3 || iVar0 > 5)
	{
		return;
	}
	GlobalFunc_7629();
	GlobalFunc_187();
	if (iVar0 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 236) && uParam0->f_32 == 0)
		{
			if (!bLocal_207)
			{
				GlobalFunc_1475(&uLocal_421, 0);
				func_97(func_240(uParam0));
				func_26(uParam0, 1);
				STREAMING::SET_FOCUS_ENTITY(uParam0->f_2);
			}
			else
			{
				func_26(uParam0, 0);
				func_241();
				func_239(&uLocal_398, &uLocal_421, 0, 0, 1, 1);
			}
		}
	}
	if (bLocal_207 && !func_25())
	{
		if (uParam0->f_29 != -1)
		{
			func_26(uParam0, 0);
		}
	}
	if (iLocal_208 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 18) || (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam0->f_32 == 0))
		{
			iLocal_208 = 1;
			uParam0->f_34 = 0;
			GlobalFunc_2350(500, 0);
		}
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_40(uParam0, 1);
	}
	else if (!CAM::IS_SCREEN_FADING_OUT())
	{
		iLocal_208 = 0;
		uParam0->f_34 = 1;
	}
}


int func_25()//Position - 0x1CA4
{
	if (((MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER")) || MISC::IS_PREV_WEATHER_TYPE("RAIN")) || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0, bool bParam1)//Position - 0x1CE6
{
	GlobalFunc_2348(&(uParam0->f_29));
	if (bParam1)
	{
		if (func_25())
		{
			uParam0->f_29 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_29, "Interior_Rain", PLAYER::PLAYER_PED_ID(), "CABLE_CAR_SOUNDS", 0, 0);
		}
	}
}







void func_33(var uParam0, int iParam1)//Position - 0x1EBA
{
	func_36(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || iParam1)
		{
			GlobalFunc_130(&(uParam0->f_3[0]));
			GlobalFunc_130(&(uParam0->f_3[1]));
			GlobalFunc_130(&(uParam0->f_6[0]));
			GlobalFunc_130(&(uParam0->f_6[1]));
			GlobalFunc_130(&(uParam0->f_2));
		}
		else
		{
			GlobalFunc_129(&(uParam0->f_3[0]), 0);
			GlobalFunc_129(&(uParam0->f_3[1]), 0);
			GlobalFunc_129(&(uParam0->f_6[0]), 0);
			GlobalFunc_129(&(uParam0->f_6[1]), 0);
			GlobalFunc_129(&(uParam0->f_2), 0);
		}
	}
}



void func_36(var uParam0)//Position - 0x1FB8
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
	}
	func_26(uParam0, 0);
	GlobalFunc_2348(&(uParam0->f_28));
	func_37(PLAYER::PLAYER_PED_ID(), uParam0);
	func_38(uParam0);
	uParam0->f_33 = 0;
}

void func_37(var uParam0, var uParam1)//Position - 0x200A
{
	GlobalFunc_852(uParam1->f_2);
	GlobalFunc_852(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0, uParam1->f_2))
		{
			ENTITY::DETACH_ENTITY(uParam0, 1, 1);
		}
	}
}

void func_38(var uParam0)//Position - 0x204D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21[iVar0]))
		{
			GlobalFunc_852(uParam0->f_21[iVar0]);
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_21[iVar0]))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_21[iVar0], 0, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_21[iVar0], 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_21[iVar0]);
			GlobalFunc_131(&(uParam0->f_21[iVar0]));
			uParam0->f_21[iVar0] = 0;
		}
		iVar0++;
	}
	uParam0->f_24 = 0;
}


void func_40(var uParam0, bool bParam1)//Position - 0x210E
{
	bool bVar0;
	
	bVar0 = false;
	func_26(uParam0, 0);
	GlobalFunc_2348(&(uParam0->f_28));
	if (bParam1 && (uParam0->f_11 == 1 || uParam0->f_34 == 1))
	{
		bLocal_207 = false;
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_51))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_51);
		}
		func_95(uParam0);
		if (bParam1)
		{
			if (uParam0->f_15 != Local_328.f_15)
			{
				func_94(&Local_328);
			}
			if (uParam0->f_15 != Local_363.f_15)
			{
				func_94(&Local_363);
			}
		}
		STREAMING::CLEAR_FOCUS();
		GlobalFunc_7629();
		GlobalFunc_187();
		SYSTEM::WAIT(0);
		GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 50f, 13, 5000, 1, 1);
		func_37(PLAYER::PLAYER_PED_ID(), uParam0);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) + Vector(0f, 0f, 6f), 1, 0, 0, 1);
		if (GlobalFunc_852(uParam0->f_2))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
		}
		func_235(uParam0);
		iLocal_208 = 0;
	}
	if (uParam0->f_11 == 1 || uParam0->f_34 == 1)
	{
		if (bParam1)
		{
			func_1(uParam0);
		}
		MISC::CLEAR_BIT(&Global_68493, 4);
		MISC::CLEAR_BIT(&Global_68493, 5);
		if (uParam0->f_24 == 0)
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
		}
	}
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		if (func_227(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			func_234(uParam0);
		}
	}
	if (bParam1)
	{
		func_1(uParam0);
	}
	uParam0->f_9 = 0;
	*uParam0 = 7;
	uParam0->f_20 = 0f;
	if (uParam0->f_11 == 1 || uParam0->f_34 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(500);
		if (bParam1)
		{
			func_1(uParam0);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		GlobalFunc_1475(&uLocal_421, 0);
		func_85(10, 1);
		func_53(GlobalFunc_451(), 10, 1);
		func_53(GlobalFunc_450(), 10, 1);
		uParam0->f_11 = 0;
		GlobalFunc_7610(301, 0, 0);
		STREAMING::CLEAR_FOCUS();
		if (GlobalFunc_852(GlobalFunc_451()))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(GlobalFunc_451(), PLAYER::PLAYER_PED_ID(), -1f, 2f, 0f, 1f, 20000);
			bVar0 = true;
		}
		if (GlobalFunc_852(GlobalFunc_450()))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(GlobalFunc_450(), PLAYER::PLAYER_PED_ID(), 1f, 2f, 0f, 1f, 20000);
			bVar0 = true;
		}
		if (GlobalFunc_39(6))
		{
			if (bVar0)
			{
				SYSTEM::WAIT(1000);
			}
			GlobalFunc_484(iLocal_427, 0);
		}
	}
	if (bParam1)
	{
		func_41(&(Local_73[uParam0->f_15 /*49*/]));
	}
	uParam0->f_34 = 0;
	func_38(uParam0);
}

void func_41(var uParam0)//Position - 0x2399
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (iLocal_209 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (uParam0->f_46 - 2))
	{
		fVar1 = 0f;
		while (fVar1 < 1f)
		{
			Var2 = { GlobalFunc_5778(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), fVar1, 1) };
			HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var2);
			fVar1 = (fVar1 + 0.125f);
		}
		SYSTEM::WAIT(0);
		iVar0++;
	}
	HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(*(uParam0[(uParam0->f_46 - 1) /*3*/]));
	iLocal_209 = 0;
}












void func_53(var uParam0, int iParam1, int iParam2)//Position - 0x2D3B
{
	int iVar0;
	
	if (!GlobalFunc_852(uParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	else
	{
		iVar0 = GlobalFunc_6782(uParam0);
		if (iVar0 == 145)
		{
			iVar0 = GlobalFunc_7124(uParam0);
		}
		GlobalFunc_10834(iVar0, iParam2, iParam1);
	}
}
































void func_85(int iParam0, int iParam1)//Position - 0x3D70
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = GlobalFunc_6899(PLAYER::PLAYER_ID());
		if (iVar0 > 0)
		{
			if (iVar0 >= iParam0)
			{
				GlobalFunc_5283(-iParam0, 1, 1, 0);
			}
			else
			{
				GlobalFunc_5283(-iVar0, 1, 1, 0);
			}
		}
	}
	else
	{
		GlobalFunc_10834(GlobalFunc_8354(), iParam1, iParam0);
	}
}









void func_94(var uParam0)//Position - 0x4051
{
	func_95(uParam0);
	func_1(uParam0);
	uParam0->f_9 = 0;
	*uParam0 = 7;
	uParam0->f_20 = 0f;
}

void func_95(var uParam0)//Position - 0x4073
{
	int iVar0;
	
	iVar0 = func_240(uParam0);
	if (uParam0->f_15 == 0)
	{
		if (iVar0 == 1)
		{
			func_96(uParam0, 0, 0f);
		}
		else
		{
			func_96(uParam0, (Local_73[uParam0->f_15 /*49*/].f_46 - 1), 0f);
		}
	}
	else if (iVar0 == 0)
	{
		func_96(uParam0, 0, 0f);
	}
	else
	{
		func_96(uParam0, (Local_73[uParam0->f_15 /*49*/].f_46 - 1), 0f);
	}
}

void func_96(var uParam0, int iParam1, float fParam2)//Position - 0x40D6
{
	uParam0->f_12 = { func_14(&(Local_73[uParam0->f_15 /*49*/]), iParam1, &fParam2) };
	if (GlobalFunc_852(uParam0->f_2))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
	}
	uParam0->f_18 = iParam1;
	uParam0->f_19 = fParam2;
}

void func_97(int iParam0)//Position - 0x4125
{
	struct<3> Var0;
	
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	Local_176.f_20 = 60;
	Local_176.f_21 = 20;
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
	if (iParam0 == 1)
	{
		GlobalFunc_1478(&Local_176, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) + Vector(0f, 0f, fLocal_175), 50f, Local_176.f_20, Local_176.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
	}
	else
	{
		GlobalFunc_1478(&Local_176, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 50f, Local_176.f_20, Local_176.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
	}
	CAM::ATTACH_CAM_TO_ENTITY(Local_176, PLAYER::PLAYER_PED_ID(), 0f, 0.2f, 0.5f, 1);
	iLocal_52 = 1;
	bLocal_207 = true;
}


void func_99(var uParam0)//Position - 0x42D2
{
	struct<3> Var0;
	
	if (!GlobalFunc_852(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_852(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_59 };
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 1, 0, 0, 1);
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	func_101(uParam0);
	func_100(uParam0);
}

void func_100(var uParam0)//Position - 0x4387
{
	struct<3> Var0;
	
	if (!GlobalFunc_852(GlobalFunc_450()) || !GlobalFunc_852(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_59 };
	Var0.x = 1f;
	ENTITY::SET_ENTITY_COORDS(GlobalFunc_450(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 1, 0, 0, 1);
	if (ENTITY::IS_ENTITY_ATTACHED(GlobalFunc_450()))
	{
		ENTITY::DETACH_ENTITY(GlobalFunc_450(), 1, 1);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_450(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_450(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
}

void func_101(var uParam0)//Position - 0x4433
{
	struct<3> Var0;
	
	if (!GlobalFunc_852(GlobalFunc_451()) || !GlobalFunc_852(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_59 };
	Var0.x = -1f;
	ENTITY::SET_ENTITY_COORDS(GlobalFunc_451(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1), 1, 0, 0, 1);
	if (ENTITY::IS_ENTITY_ATTACHED(GlobalFunc_451()))
	{
		ENTITY::DETACH_ENTITY(GlobalFunc_451(), 1, 1);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_451(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_451(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
}

void func_102(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x44DF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9184(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8354())
			{
				case 0:
					if (GlobalFunc_10964(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11265(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10964(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11265(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10964(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10964(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11265(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10964(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11265(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_38 = 0;
			if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}





























































































































bool func_227(var uParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x208B7
{
	struct<8> Var0;
	struct<8> Var8;
	
	Var0 = 2;
	if (!GlobalFunc_852(uParam1->f_2))
	{
		return 0;
	}
	GlobalFunc_2361(&Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, 2.75f, Local_59.f_2) + Vector(1f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, -2.75f, Local_59.f_2) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		func_230(&Var0, 0, 0, 255, 255);
	}
	if (fParam2 > 0f)
	{
		Var8 = { GlobalFunc_5741(Var0, fParam2) };
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Var8[0 /*3*/], Var8[1 /*3*/], Var8.f_7, 0, 1, 0);
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}



void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x20A0A
{
	func_231(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_231(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x20A30
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { GlobalFunc_107(Param3 - Param0) };
	Var3 = { GlobalFunc_277(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[2 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[3 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[0 /*3*/], uParam7, uParam8, uParam9, uParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x6A3E157475DBFCD9(Var13[4 /*3*/], Var13[5 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[5 /*3*/], Var13[6 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[6 /*3*/], Var13[7 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[7 /*3*/], Var13[4 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[4 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[5 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[6 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[7 /*3*/], uParam7, uParam8, uParam9, uParam10);
}



void func_234(var uParam0)//Position - 0x20C9D
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_1475(&uLocal_421, 0);
	if (uParam0->f_11 == 1)
	{
		func_37(PLAYER::PLAYER_PED_ID(), uParam0);
		func_37(GlobalFunc_451(), uParam0);
		func_37(GlobalFunc_450(), uParam0);
	}
	GlobalFunc_431(&Local_176, 0, 1);
	func_296(1, 1, 1, 1);
	if (uParam0->f_11 == 1)
	{
		Global_24449 = 0;
	}
	if (iLocal_424 == 1)
	{
		iLocal_424 = 0;
		STREAMING::END_SRL();
	}
}

void func_235(var uParam0)//Position - 0x20D16
{
	struct<3> Var0;
	
	Var0 = { Local_62 };
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()) && GlobalFunc_852(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	}
	func_237(uParam0);
	func_236(uParam0);
}

void func_236(var uParam0)//Position - 0x20D7D
{
	struct<3> Var0;
	
	Var0 = { Local_62 };
	if (GlobalFunc_852(GlobalFunc_450()) && GlobalFunc_852(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(GlobalFunc_450()))
		{
			ENTITY::DETACH_ENTITY(GlobalFunc_450(), 1, 1);
		}
		Var0.x = (Var0.x - 0.4f);
		Var0.f_1 = (Var0.f_1 - 0.5f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_450(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	}
}

void func_237(var uParam0)//Position - 0x20DF0
{
	struct<3> Var0;
	
	Var0 = { Local_62 };
	if (GlobalFunc_852(GlobalFunc_451()) && GlobalFunc_852(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(GlobalFunc_451()))
		{
			ENTITY::DETACH_ENTITY(GlobalFunc_451(), 1, 1);
		}
		Var0.x = (Var0.x + 0.2f);
		Var0.f_1 = (Var0.f_1 + 0.5f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(GlobalFunc_451(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	}
}

void func_238(var uParam0, var uParam1)//Position - 0x20E63
{
	float fVar0;
	
	fVar0 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	if (uParam0->f_20 <= 0 || GlobalFunc_105(uParam0->f_1[1 /*3*/]))
	{
		func_239(uParam0, uParam1, 0, 0, 1, 1);
		return;
	}
	if (fVar0 == 0f)
	{
		fVar0 = uParam0->f_15[0];
	}
	GlobalFunc_1475(uParam1, 0);
	*uParam1 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_1[1 /*3*/], uParam0->f_8[1 /*3*/], fVar0, 1, 2);
	if (!CAM::DOES_CAM_EXIST(*uParam1))
	{
		return;
	}
	uParam0->f_19 = MISC::GET_GAME_TIMER();
	CAM::SET_CAM_ACTIVE(*uParam1, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	CAM::SET_CAM_PARAMS(*uParam1, uParam0->f_1[0 /*3*/], uParam0->f_8[0 /*3*/], uParam0->f_15[0], uParam0->f_20, 1, 1, 2);
	if (GlobalFunc_852(uParam0->f_21))
	{
		CAM::POINT_CAM_AT_ENTITY(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

void func_239(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x20F4C
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	GlobalFunc_1475(uParam1, 0);
	Var0 = { uParam0->f_1[0 /*3*/] };
	if (bParam2)
	{
		Var0.f_2 = (Var0.f_2 + uParam0->f_18);
	}
	*uParam1 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Var0, uParam0->f_8[0 /*3*/], uParam0->f_15[0], 1, 2);
	if (!CAM::DOES_CAM_EXIST(*uParam1))
	{
		return;
	}
	uParam0->f_19 = MISC::GET_GAME_TIMER();
	CAM::SET_CAM_ACTIVE(*uParam1, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !GlobalFunc_105(uParam0->f_1[1 /*3*/]))
	{
		Var0 = { uParam0->f_1[1 /*3*/] };
		if (bParam2)
		{
			Var0.f_2 = (Var0.f_2 + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		CAM::SET_CAM_PARAMS(*uParam1, Var0, uParam0->f_8[1 /*3*/], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (GlobalFunc_852(uParam0->f_21))
	{
		CAM::POINT_CAM_AT_ENTITY(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

int func_240(var uParam0)//Position - 0x21067
{
	if (uParam0->f_15 == 0)
	{
		if (uParam0->f_17 == 1f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_17 == -1f)
	{
		return 0;
	}
	return 1;
}

void func_241()//Position - 0x2109C
{
	GlobalFunc_431(&Local_176, 0, 1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	func_239(&uLocal_398, &uLocal_421, 0, 0, 1, 1);
	iLocal_52 = 1;
	bLocal_207 = false;
}

void func_242(var uParam0)//Position - 0x210C9
{
	if (func_240(uParam0) == 0)
	{
		func_252(uParam0);
	}
	else
	{
		func_244(uParam0);
	}
	func_243();
}

void func_243()//Position - 0x210EE
{
	return;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_439 = 1;
		iLocal_430 = 0;
		return;
	}
	if (iLocal_430 > 0 && MISC::GET_GAME_TIMER() > iLocal_430)
	{
		iLocal_430 = 0;
		return;
	}
}

void func_244(var uParam0)//Position - 0x21134
{
	int iVar0;
	struct<23> Var1;
	
	iVar0 = 0;
	Var1.f_1 = 2;
	Var1.f_8 = 2;
	Var1.f_15 = 2;
	Var1.f_22 = -1027211264;
	switch (iLocal_422)
	{
		case 0:
			GlobalFunc_5394(&uLocal_398, 461.3928f, 5634.593f, 803.8433f, -21.1986f, 0.0407f, 152.8518f, 0, 0);
			func_249(&uLocal_398, 465.1065f, 5631.494f, 803.8177f, -26.0362f, 0.0546f, 133.1987f, 23000);
			GlobalFunc_2451(&uLocal_398, 40f, 0);
			iLocal_422++;
			iVar0 = 1;
			break;
		
		case 1:
			iLocal_422++;
			break;
		
		case 2:
		case 3:
			func_247(215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 1128792064);
			if (uParam0->f_20 > 112f)
			{
				GlobalFunc_5394(&uLocal_398, 215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 0, 0);
				func_249(&uLocal_398, 221.7997f, 5593.111f, 597.789f, 17.1025f, 0f, -121.5107f, 18000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 4:
			iLocal_422++;
			break;
		
		case 5:
			func_247(251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 1128792064);
			if (uParam0->f_20 > 288f)
			{
				GlobalFunc_5394(&uLocal_398, 251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 0, 0);
				func_249(&uLocal_398, 248.8245f, 5575.748f, 619.0521f, -54.605f, 0f, 89.7301f, 11000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				func_245(&Var1, 16);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 6:
			func_247(-69.826f, 5595.765f, 390.4564f, 25.1669f, 0f, -110.119f, 1128792064);
			if (uParam0->f_20 > 400f)
			{
				GlobalFunc_5394(&uLocal_398, -69.826f, 5595.765f, 390.4564f, 25.1669f, 0f, -110.119f, 0, 0);
				func_249(&uLocal_398, -68.5961f, 5595.183f, 386.8474f, 20.6269f, 0f, -115.1379f, 18000);
				GlobalFunc_2451(&uLocal_398, 40.43f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 7:
		case 8:
		case 9:
		case 10:
			func_247(-6.2591f, 5609.318f, 402.8656f, -0.9222f, 0f, 153.9538f, 1128792064);
			if (uParam0->f_20 > 575f)
			{
				GlobalFunc_5394(&uLocal_398, -6.2591f, 5609.318f, 402.8656f, -0.9222f, 0f, 153.9538f, 0, 0);
				func_249(&uLocal_398, -5.9107f, 5609.613f, 401.1573f, -11.4635f, 0f, 130.2651f, 10000);
				GlobalFunc_2451(&uLocal_398, 55f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 11:
			func_247(-215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 1128792064);
			if (uParam0->f_20 > 660f)
			{
				GlobalFunc_5394(&uLocal_398, -215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 0, 0);
				func_249(&uLocal_398, -199.8146f, 5615.971f, 284.7165f, 22.8233f, 0f, -138.4323f, 10000);
				GlobalFunc_2451(&uLocal_398, 40.026f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 12:
			func_247(-61.8849f, 5558.974f, 338.9037f, -15.2417f, 0f, 104.1686f, 1128792064);
			if (uParam0->f_20 > 740f)
			{
				GlobalFunc_5394(&uLocal_398, -61.8849f, 5558.974f, 338.9037f, -15.2417f, 0f, 104.1686f, 0, 0);
				func_249(&uLocal_398, -58.0053f, 5559.955f, 323.449f, -10.6159f, 0f, 104.1686f, 10000);
				GlobalFunc_2451(&uLocal_398, 47.9808f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 13:
			func_247(-291.6088f, 5570.382f, 227.2185f, 26.4681f, 0f, -73.2798f, 1128792064);
			if (uParam0->f_20 > 840f)
			{
				GlobalFunc_5394(&uLocal_398, -291.6088f, 5570.382f, 227.2185f, 26.4681f, 0f, -73.2798f, 0, 0);
				func_249(&uLocal_398, -292.7007f, 5575.862f, 227.2185f, 24.417f, 0f, -69.0123f, 10000);
				GlobalFunc_2451(&uLocal_398, 40.05f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 14:
			func_247(-509.6508f, 5683.843f, 89.9184f, 21.3193f, 0f, -128.1549f, 1128792064);
			if (uParam0->f_20 > 920f)
			{
				GlobalFunc_5394(&uLocal_398, -509.6508f, 5683.843f, 89.9184f, 21.3193f, 0f, -128.1549f, 0, 0);
				func_249(&uLocal_398, -511.7916f, 5681.12f, 89.9184f, 21.3193f, 0f, -128.1549f, 18000);
				GlobalFunc_2451(&uLocal_398, 40f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 15:
			iLocal_422++;
			break;
		
		case 16:
			func_247(-475.9374f, 5375.989f, 94.2374f, 6.8777f, 0f, 6.4845f, 1128792064);
			if (uParam0->f_20 > 1090f)
			{
				GlobalFunc_5394(&uLocal_398, -475.9374f, 5375.989f, 94.2374f, 6.8777f, 0f, 6.4845f, 0, 0);
				func_249(&uLocal_398, -475.9374f, 5375.989f, 94.2374f, -2.0745f, 0f, 21.1399f, 16000);
				GlobalFunc_2451(&uLocal_398, 30f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 17:
			iLocal_422++;
			break;
		
		case 18:
			iLocal_422++;
			break;
		
		case 19:
			iLocal_422++;
			break;
		
		case 20:
			func_247(-674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 1128792064);
			if (uParam0->f_20 > 1245f)
			{
				GlobalFunc_5394(&uLocal_398, -674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 0, 0);
				func_249(&uLocal_398, -675.0132f, 5576.074f, 41.1581f, 24.5521f, 0f, -57.769f, 13000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 21:
			iLocal_422++;
			break;
		
		case 22:
			func_247(-743.0775f, 5570.776f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 1128792064);
			if (uParam0->f_20 > 1355f)
			{
				GlobalFunc_5394(&uLocal_398, -743.0775f, 5570.776f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 0, 0);
				func_249(&uLocal_398, -749.04f, 5577.421f, 47.9055f, -9.6095f, 0.251f, -48.8215f, 20000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 == 1 && bLocal_207 == 0)
	{
		func_239(&uLocal_398, &uLocal_421, 0, 0, 0, 0);
		iLocal_52 = 1;
	}
}

void func_245(var uParam0, int iParam1)//Position - 0x21922
{
	struct<3> Var0;
	
	return;
	if (iLocal_431 != iParam1)
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		Var0 = { GlobalFunc_590(uParam0->f_8[0 /*3*/]) };
		if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1[0 /*3*/] + Var0 * Vector(140f, 140f, 140f), 141f, 2))
		{
			iLocal_430 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_431 = iParam1;
			Local_432 = { uParam0->f_1[0 /*3*/] };
			Local_435 = { Var0 };
			fLocal_438 = 100f;
			iLocal_439 = 0;
		}
	}
}


void func_247(struct<3> Param0, struct<3> Param3, int iParam6)//Position - 0x219CB
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (iLocal_440 == 1)
	{
		return;
	}
	if (iLocal_52)
	{
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_51))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_51);
		}
		uLocal_51 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Param0, GlobalFunc_590(Param3), iParam6, 12, 127);
		iLocal_52 = 0;
	}
	else if (STREAMING::STREAMVOL_IS_VALID(uLocal_51))
	{
		if (STREAMING::IS_STREAMVOL_ACTIVE())
		{
			if (STREAMING::STREAMVOL_HAS_LOADED(uLocal_51))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_51);
			}
		}
	}
}


void func_249(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)//Position - 0x21A6E
{
	uParam0->f_1[1 /*3*/] = { Param1 };
	uParam0->f_8[1 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_20 = iParam7;
}



void func_252(var uParam0)//Position - 0x21B31
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_422)
	{
		case 0:
			GlobalFunc_5394(&uLocal_398, -733.0331f, 5557.05f, 54.315f, -13.2766f, 0f, 26.2995f, 0, 0);
			func_249(&uLocal_398, -733.0331f, 5557.05f, 54.305f, 3.6561f, 0f, -49.3377f, 20000);
			GlobalFunc_2451(&uLocal_398, 50f, 0);
			iLocal_422++;
			iVar0 = 1;
			break;
		
		case 1:
			func_247(-674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 1128792064);
			if (uParam0->f_20 > 45f)
			{
				GlobalFunc_5394(&uLocal_398, -674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 0, 0);
				func_249(&uLocal_398, -674.4f, 5644f, 40.1f, 7.5f, 0f, -133.2f, 11000);
				GlobalFunc_2451(&uLocal_398, 55f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 2:
			func_247(-539.4792f, 5522.976f, 65.4f, 4.1853f, 0f, 23.2142f, 1128792064);
			if (uParam0->f_20 > 136f)
			{
				GlobalFunc_5394(&uLocal_398, -539.4792f, 5522.976f, 65.4f, 4.1853f, 0f, 23.2142f, 0, 0);
				func_249(&uLocal_398, -536.2819f, 5524.217f, 65.4f, 9.7636f, 0f, 14.8368f, 10000);
				GlobalFunc_2451(&uLocal_398, 55f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 3:
			func_247(-428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 1128792064);
			if (uParam0->f_20 > 220.3f)
			{
				GlobalFunc_5394(&uLocal_398, -428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 0, 0);
				func_249(&uLocal_398, -428.1f, 5383.4f, 102.3f, 1.7164f, 0f, -8.342f, 12000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 4:
			func_247(-443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 1128792064);
			if (uParam0->f_20 > 337.3f)
			{
				GlobalFunc_5394(&uLocal_398, -443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 0, 0);
				func_249(&uLocal_398, -446.9265f, 5570.49f, 150.7141f, 24.0363f, 0f, -84.852f, 12000);
				GlobalFunc_2451(&uLocal_398, 42f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 5:
			iLocal_422++;
			break;
		
		case 6:
			func_247(-237.0857f, 5571.89f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 1128792064);
			if (uParam0->f_20 > 440.5f)
			{
				GlobalFunc_5394(&uLocal_398, -237.0857f, 5571.89f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 0, 0);
				func_249(&uLocal_398, -234.3823f, 5571.384f, 258.7245f, -23.0862f, 0.0082f, 79.4291f, 13500);
				GlobalFunc_2451(&uLocal_398, 44f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 7:
			func_247(-318.7657f, 5556.838f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 1128792064);
			if (uParam0->f_20 > 545.5f)
			{
				GlobalFunc_5394(&uLocal_398, -318.7657f, 5556.838f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 0, 0);
				func_249(&uLocal_398, -311.451f, 5557.42f, 242.3366f, 20.0948f, 0.0339f, -85.4425f, 20000);
				GlobalFunc_2451(&uLocal_398, 50f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 8:
			func_247(46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 1128792064);
			if (uParam0->f_20 > 663.5f)
			{
				GlobalFunc_5394(&uLocal_398, 46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 0, 0);
				func_249(&uLocal_398, 46.513f, 5534.116f, 378.619f, 8.2022f, 0.004f, 56.552f, 20000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 9:
			iLocal_422++;
			break;
		
		case 10:
			func_247(229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 1128792064);
			if (uParam0->f_20 > 855.5f)
			{
				GlobalFunc_5394(&uLocal_398, 229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 0, 0);
				func_249(&uLocal_398, 227.183f, 5534.888f, 523.006f, -2.897f, -0.133f, 52.652f, 21000);
				GlobalFunc_2451(&uLocal_398, 50f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 11:
			func_247(235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 1128792064);
			if (uParam0->f_20 > 1060.36f)
			{
				GlobalFunc_5394(&uLocal_398, 235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 0, 0);
				func_249(&uLocal_398, 234.0372f, 5524.275f, 567.8823f, 18.2202f, 0f, 8.5423f, 12000);
				GlobalFunc_2451(&uLocal_398, 50f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 12:
			func_247(262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 1128792064);
			if (uParam0->f_20 > 1185.504f)
			{
				GlobalFunc_5394(&uLocal_398, 262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 0, 0);
				func_249(&uLocal_398, 268.5094f, 5563.507f, 628.7556f, 33.0263f, 0f, -82.3579f, 12000);
				GlobalFunc_2451(&uLocal_398, 50f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 13:
			func_247(358.3939f, 5507.892f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 1128792064);
			if (uParam0->f_20 > 1285f)
			{
				GlobalFunc_5394(&uLocal_398, 358.3939f, 5507.892f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 0, 0);
				func_249(&uLocal_398, 351.1451f, 5510.497f, 702.6633f, 28.5814f, -0.0966f, -30.1375f, 12000);
				GlobalFunc_2451(&uLocal_398, 45f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 14:
			func_247(419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 1128792064);
			if (uParam0->f_20 > 1380f)
			{
				GlobalFunc_5394(&uLocal_398, 419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 0, 0);
				func_249(&uLocal_398, 426.675f, 5545.488f, 782.306f, 2.839f, 0f, -30.85f, 12000);
				GlobalFunc_2451(&uLocal_398, 40f, 0);
				iLocal_422++;
				iVar0 = 1;
			}
			break;
		
		case 15:
			iLocal_422++;
			break;
	}
	if (iVar0 == 1 && bLocal_207 == 0)
	{
		func_239(&uLocal_398, &uLocal_421, 0, 0, 0, 0);
		iLocal_52 = 1;
	}
}

void func_253(var uParam0)//Position - 0x2235C
{
	bool bVar0;
	struct<35> Var1;
	
	if (uParam0->f_9)
	{
		return;
	}
	if (GlobalFunc_39(14))
	{
		return;
	}
	Var1.f_3 = 2;
	Var1.f_6 = 2;
	Var1.f_17 = 1065353216;
	Var1.f_21 = 2;
	Var1.f_28 = -1;
	Var1.f_29 = -1;
	if (func_227(PLAYER::PLAYER_PED_ID(), uParam0, 1.05f, 0))
	{
		uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_72);
		PAD::SET_INPUT_EXCLUSIVE(2, 51);
		func_268();
		if (uParam0->f_10 == 1 && GlobalFunc_116(0))
		{
			HUD::CLEAR_HELP(1);
			uParam0->f_10 = 0;
		}
		bVar0 = func_261(uParam0);
		if (bVar0 == 1)
		{
			GlobalFunc_1475(&uLocal_421, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				bVar0 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
				while (bVar0 == 1)
				{
					if (!GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
					{
						bVar0 = false;
					}
					else
					{
						bVar0 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					SYSTEM::WAIT(0);
					func_268();
					GlobalFunc_187();
				}
			}
			uParam0->f_11 = 1;
			iLocal_422 = 0;
			*uParam0 = 2;
			iLocal_431 = -1;
			iLocal_430 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_39(6))
			{
				GlobalFunc_5779(iLocal_427, 1);
			}
			func_242(uParam0);
			func_256(uParam0);
			func_99(uParam0);
			if (func_240(uParam0) == 0)
			{
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
			func_255(uParam0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f);
			if (func_240(uParam0) == 0)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			HUD::CLEAR_HELP(1);
			return;
		}
	}
	else if (uParam0->f_10 == 1)
	{
		HUD::CLEAR_HELP(1);
		uParam0->f_10 = 0;
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_25)
	{
		if (MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, Local_62), 1f, 0, 1, 1, 0, 0, 0, 0))
		{
			return;
		}
		if (MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, Local_65), 1f, 0, 1, 1, 0, 0, 0, 0))
		{
			return;
		}
		if (func_4())
		{
			if (func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 200f))
			{
				return;
			}
		}
		else
		{
			Var1 = { func_254(uParam0) };
			if (GlobalFunc_852(Var1.f_2) && (Var1.f_20 > 0f || Var1.f_9))
			{
				if (func_21(uParam0->f_2, Var1.f_12, 200f))
				{
					return;
				}
			}
		}
		func_256(uParam0);
		*uParam0 = 2;
		if (uParam0->f_10 == 1)
		{
			HUD::CLEAR_HELP(1);
			uParam0->f_10 = 0;
		}
		uParam0->f_11 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
	}
}

struct<35> func_254(var uParam0)//Position - 0x2260C
{
	if (uParam0->f_2 == Local_328.f_2)
	{
		return Local_363;
	}
	return Local_328;
}

void func_255(var uParam0)//Position - 0x22632
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iLocal_440 == 1)
	{
		if (func_240(uParam0) == 0)
		{
			iVar1 = "cablecar_up";
		}
		else
		{
			iVar1 = "cablecar_down";
		}
	}
	iLocal_424 = 0;
	Global_24449 = 1;
	func_102(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
	{
		STREAMING::PREFETCH_SRL(iVar1);
		iVar0 = MISC::GET_GAME_TIMER() + 6000;
		while (iVar2 == 0)
		{
			if (STREAMING::IS_SRL_LOADED())
			{
				iLocal_424 = 1;
				iVar2 = 1;
			}
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
			}
			func_2(uParam0, uParam0->f_31);
			if (MISC::GET_GAME_TIMER() > iVar0)
			{
				iVar2 = 1;
				iLocal_424 = 0;
			}
			SYSTEM::WAIT(0);
		}
		if (iLocal_424 == 1)
		{
			fLocal_425 = 0f;
			STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
		}
		else
		{
			STREAMING::END_SRL();
		}
	}
}

void func_256(var uParam0)//Position - 0x22713
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	
	iVar0 = 0;
	iVar1 = 0;
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	if (iVar1 == 0)
	{
		return;
	}
	func_38(uParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (uParam0->f_24 < uParam0->f_21)
		{
			if (GlobalFunc_852(uVar2[iVar0]) && func_258(uVar2[iVar0]))
			{
				if (func_227(uVar2[iVar0], uParam0, 0, 0))
				{
					uParam0->f_21[uParam0->f_24] = uVar2[iVar0];
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_21[uParam0->f_24]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_21[uParam0->f_24], 1, 0);
					}
					func_257(uParam0->f_21[uParam0->f_24], uParam0, uParam0->f_24);
					uParam0->f_24++;
				}
			}
		}
		iVar0++;
	}
}

void func_257(var uParam0, var uParam1, int iParam2)//Position - 0x227E6
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0))
	{
		ENTITY::DETACH_ENTITY(uParam0, 1, 1);
	}
	if (iParam2 == 0)
	{
		Var0 = { 0.6f, -1.21756f, -5.854f };
	}
	else
	{
		Var0 = { -0.6f, -1.21756f, -5.85388f };
	}
	Var0.f_1 = (Var0.f_1 * uParam1->f_17);
	if (uParam1->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0, uParam1->f_2, 0, Var0, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0, uParam1->f_2, 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	ENTITY::SET_ENTITY_HEADING(uParam0, ENTITY::GET_ENTITY_HEADING(uParam1->f_2));
}

int func_258(var uParam0)//Position - 0x22889
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (iVar0 == joaat("cablecar"))
	{
		return 0;
	}
	return (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0));
}



int func_261(var uParam0)//Position - 0x2292E
{
	bool bVar0;
	
	bVar0 = func_227(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0);
	if (bVar0)
	{
		uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_72);
		PAD::SET_INPUT_EXCLUSIVE(2, 51);
		func_268();
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (bVar0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					uParam0->f_1 = 7;
				}
				else if (func_267(uParam0))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					uParam0->f_1 = 3;
				}
				if (uParam0->f_10 == 1)
				{
					GlobalFunc_2452();
				}
				uParam0->f_10 = 0;
			}
			break;
		
		case 1:
			if (!uParam0->f_10)
			{
				GlobalFunc_Display_Help_Text("PLAY_CABLE_NO_CASH");
				uParam0->f_10 = 1;
			}
			if (!bVar0 || func_263() >= 10)
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		
		case 2:
			if (!uParam0->f_10)
			{
				GlobalFunc_Display_Help_Text("CAR_IN_CABLECAR");
				uParam0->f_10 = 1;
			}
			if (!bVar0 || !func_267(uParam0))
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		
		case 7:
			if (!uParam0->f_10)
			{
				GlobalFunc_Display_Help_Text("CABLE_WANTED");
				uParam0->f_10 = 1;
			}
			if (!bVar0 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		
		case 3:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			func_268();
			GlobalFunc_187();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				uParam0->f_10 = 0;
				return 0;
			}
			if (!bVar0)
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				uParam0->f_10 = 0;
				return 0;
			}
			if (GlobalFunc_126(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				GlobalFunc_2452();
				uParam0->f_1 = 0;
				return 0;
			}
			if (func_263() < 10)
			{
				GlobalFunc_2452();
				uParam0->f_1 = 1;
				uParam0->f_10 = 0;
				return 0;
			}
			if (!uParam0->f_10 && !GlobalFunc_116(0))
			{
				GlobalFunc_Display_Help_Text("PLAY_CABLE");
				uParam0->f_10 = 0;
			}
			if (PAD::IS_CONTROL_PRESSED(2, 51) && !GlobalFunc_116(0))
			{
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			func_268();
			GlobalFunc_187();
			uParam0->f_1 = 0;
			uParam0->f_10 = 0;
			uParam0->f_34 = 1;
			if (func_240(uParam0) == 0)
			{
				MISC::SET_BIT(&Global_68493, 4);
			}
			else
			{
				MISC::SET_BIT(&Global_68493, 5);
			}
			HUD::CLEAR_HELP(1);
			return 1;
	}
	return 0;
}


int func_263()//Position - 0x22B9F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GlobalFunc_6899(PLAYER::PLAYER_ID());
	}
	switch (GlobalFunc_8354())
	{
		case 2:
			return GlobalFunc_2033(2);
		
		case 0:
			return GlobalFunc_2033(0);
		
		case 1:
			return GlobalFunc_2033(1);
		
		default:
	}
	return 0;
}




int func_267(var uParam0)//Position - 0x22C26
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	
	iVar0 = 0;
	iVar1 = 0;
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (GlobalFunc_852(uVar2[iVar0]) && !func_258(uVar2[iVar0]))
		{
			if (func_227(uVar2[iVar0], uParam0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_268()//Position - 0x22C9F
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
}

bool func_269(var uParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x22CE8
{
	struct<8> Var0;
	struct<8> Var8;
	
	Var0 = 2;
	if (!GlobalFunc_852(uParam1->f_2))
	{
		return 0;
	}
	GlobalFunc_2361(&Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, 2.75f, (Local_59.f_2 + 2.63f)) + Vector(1f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, -2.75f, (Local_59.f_2 + 2.63f)) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		func_230(&Var0, 0, 0, 255, 255);
	}
	if (fParam2 > 0f)
	{
		Var8 = { GlobalFunc_5741(Var0, fParam2) };
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Var8[0 /*3*/], Var8[1 /*3*/], Var8.f_7, 0, 1, 0);
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}



void func_272(var uParam0)//Position - 0x22E73
{
	if (GlobalFunc_852(uParam0->f_2))
	{
		uParam0->f_31 = 0f;
		func_2(uParam0, 0f);
	}
}




void func_276()//Position - 0x22ED8
{
	GlobalFunc_5398(&uLocal_210, 0);
	GlobalFunc_5398(&uLocal_210, 1);
	GlobalFunc_5398(&uLocal_210, 2);
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x22EF8
{
	var uVar0;
	
	func_279(uParam0);
	uParam0->f_15 = iParam1;
	uParam0->f_18 = iParam2;
	uParam0->f_12 = { func_14(&(Local_73[iParam1 /*49*/]), iParam2, &iParam3) };
	MISC::CLEAR_AREA_OF_OBJECTS(uParam0->f_12 + Vector(-0.2f, 0f, 0f), 2f, 0);
	uParam0->f_2 = OBJECT::CREATE_OBJECT(iLocal_172, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 1, 0);
	uParam0->f_19 = iParam3;
	uParam0->f_17 = iParam4;
	uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_72);
	uParam0->f_32 = 0;
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, 1);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 0, 0, 1);
	uVar0 = GlobalFunc_1695(Local_73[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_73[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], 1);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_2, uVar0);
	uParam0->f_3[0] = OBJECT::CREATE_OBJECT(iLocal_173, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_3[0], uVar0);
	uParam0->f_3[1] = OBJECT::CREATE_OBJECT(iLocal_174, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_3[1], uVar0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[0], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[1], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	uParam0->f_6[0] = OBJECT::CREATE_OBJECT(iLocal_173, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 1, 0);
	uParam0->f_6[1] = OBJECT::CREATE_OBJECT(iLocal_174, uParam0->f_12 + Vector(-0.2f, 0f, 0f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[0], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[1], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
	func_20(uParam0);
	func_1(uParam0);
	if (GlobalFunc_852(uParam0->f_2))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0, 0);
	}
}


void func_279(var uParam0)//Position - 0x2315E
{
	uParam0->f_20 = 0f;
	uParam0->f_9 = 0;
	uParam0->f_16 = 0f;
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_32 = 0;
}

void func_280(var uParam0)//Position - 0x23183
{
	uParam0->f_46 = 0;
	func_282(uParam0, 446.291f, 5566.377f, 786.75f);
	func_282(uParam0, 444.937f, 5566.383f, 786.551f);
	func_282(uParam0, 417.371f, 5567.001f, 777.708f);
	func_282(uParam0, 412.661f, 5567.085f, 774.439f);
	func_282(uParam0, 241.31f, 5570.594f, 603.137f);
	func_282(uParam0, 236.821f, 5570.663f, 599.561f);
	func_282(uParam0, 11.35f, 5575.298f, 426.629f);
	func_282(uParam0, 6.575f, 5575.391f, 423.57f);
	func_282(uParam0, -268.965f, 5580.996f, 243.386f);
	func_282(uParam0, -273.993f, 5581.124f, 240.808f);
	func_282(uParam0, -575.898f, 5587.286f, 79.251f);
	func_282(uParam0, -581.321f, 5587.4f, 77.348f);
	func_282(uParam0, -739.646f, 5590.614f, 47.006f);
	func_282(uParam0, -740.97f, 5590.617f, 47.306f);
	func_281(uParam0);
}

void func_281(var uParam0)//Position - 0x232BC
{
	int iVar0;
	
	uParam0->f_48 = 0f;
	iVar0 = 0;
	while (iVar0 < (uParam0->f_46 - 2))
	{
		uParam0->f_48 = (uParam0->f_48 + MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), 1));
		iVar0++;
	}
}

void func_282(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x23300
{
	if (uParam0->f_46 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_46 /*3*/] = fParam1;
	(uParam0[uParam0->f_46 /*3*/])->f_1 = fParam2;
	(uParam0[uParam0->f_46 /*3*/])->f_2 = fParam3;
	uParam0->f_46++;
}

void func_283(var uParam0)//Position - 0x23341
{
	uParam0->f_46 = 0;
	func_282(uParam0, -740.911f, 5599.341f, 47.25f);
	func_282(uParam0, -739.557f, 5599.346f, 46.997f);
	func_282(uParam0, -581.009f, 5596.517f, 77.379f);
	func_282(uParam0, -575.717f, 5596.388f, 79.22f);
	func_282(uParam0, -273.805f, 5590.844f, 240.795f);
	func_282(uParam0, -268.707f, 5590.744f, 243.395f);
	func_282(uParam0, 6.896f, 5585.668f, 423.614f);
	func_282(uParam0, 11.774f, 5585.591f, 426.711f);
	func_282(uParam0, 236.82f, 5581.445f, 599.642f);
	func_282(uParam0, 241.365f, 5581.369f, 603.183f);
	func_282(uParam0, 412.855f, 5578.216f, 774.401f);
	func_282(uParam0, 417.541f, 5578.124f, 777.688f);
	func_282(uParam0, 444.93f, 5577.589f, 786.535f);
	func_282(uParam0, 446.288f, 5577.59f, 786.75f);
	func_281(uParam0);
}

void func_284()//Position - 0x2347A
{
	func_290(&uLocal_210);
	GlobalFunc_5730(&uLocal_210, 0, iLocal_172);
	GlobalFunc_5730(&uLocal_210, 1, iLocal_173);
	GlobalFunc_5730(&uLocal_210, 2, iLocal_174);
	func_288(&uLocal_210, 3, 4, "CABLE_CAR", "CABLE_CAR_SOUNDS");
	func_288(&uLocal_210, 4, 2, "P_CableCar_S", 0);
	while (!GlobalFunc_5731(&uLocal_210))
	{
		SYSTEM::WAIT(0);
	}
}




int func_288(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x238EB
{
	if (MISC::IS_BIT_SET(uParam0->f_113, iParam1) || MISC::IS_BIT_SET(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 1:
			PED::REQUEST_ACTION_MODE_ASSET(sParam3);
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT(sParam3);
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_SET(sParam3);
			break;
		
		case 4:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam3, 0);
			break;
		
		case 5:
			AUDIO::LOAD_STREAM(sParam3, sParam4);
			break;
		
		case 9:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, 0);
			break;
		
		case 11:
			TASK::REQUEST_WAYPOINT_RECORDING(sParam3);
			break;
		
		default:
			return 0;
	}
	GlobalFunc_1481(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = sParam4;
	return 1;
}


void func_290(var uParam0)//Position - 0x23A11
{
	int iVar0;
	
	uParam0->f_114 = 0;
	uParam0->f_113 = 0;
	uParam0->f_115 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		GlobalFunc_1481(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}


void func_292(bool bParam0)//Position - 0x23A63
{
	struct<3> Var0;
	
	if (func_4())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (iLocal_424 == 1)
	{
		iLocal_424 = 0;
		STREAMING::END_SRL();
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", 0, 1);
	func_296(1, 1, 1, 1);
	Global_24449 = 0;
	GlobalFunc_1475(&uLocal_421, 0);
	GlobalFunc_431(&Local_176, 0, 1);
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
	{
		if (func_4())
		{
			func_37(PLAYER::PLAYER_PED_ID(), &Local_328);
			func_37(PLAYER::PLAYER_PED_ID(), &Local_363);
			if (GlobalFunc_879(PLAYER::PLAYER_PED_ID(), Local_53, 1) < 200f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_53, 1, 0, 0, 1);
			}
			else if (GlobalFunc_879(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 200f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_56, 1, 0, 0, 1);
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(5f, 0f, 0f) };
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				Var0.f_2 = -200f;
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			}
		}
		bParam0 = true;
	}
	if (bParam0)
	{
		func_294(&Local_328);
		func_294(&Local_363);
	}
	else
	{
		func_33(&Local_328, 0);
		func_33(&Local_363, 0);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_6925(&uLocal_210);
	while (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		SYSTEM::WAIT(0);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_51))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_51);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_294(var uParam0)//Position - 0x23BEE
{
	func_36(uParam0);
	GlobalFunc_130(&(uParam0->f_3[0]));
	GlobalFunc_130(&(uParam0->f_3[1]));
	GlobalFunc_130(&(uParam0->f_6[0]));
	GlobalFunc_130(&(uParam0->f_6[1]));
	GlobalFunc_130(&(uParam0->f_2));
}


void func_296(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x23C69
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_5780(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


