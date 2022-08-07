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
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_156 = 16;
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
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	bool bLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
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
	uLocal_79 = GlobalFunc_4946(64);
	uLocal_80 = GlobalFunc_4946(63);
	iLocal_81 = joaat("u_m_m_aldinapoli");
	iLocal_82 = joaat("premier");
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_330();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_319(&Local_95))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_95, 0, 1);
		Global_68490 = 0;
	}
	uLocal_324 = GlobalFunc_4528();
	GlobalFunc_4527();
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_NAMT", 0);
		func_299(Local_95.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_321)
		{
			case 0:
				func_216();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x129
{
	switch (iLocal_322)
	{
		case 0:
			bLocal_323 = false;
			GlobalFunc_173(&uLocal_156, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_322 = 1;
			break;
		
		case 1:
			if (!bLocal_323)
			{
				bLocal_323 = GlobalFunc_10607(&uLocal_156, "NIG1AAU", "NIG1A_COMM", 7, 0, 0, 0);
			}
			else if (!GlobalFunc_111())
			{
				iLocal_322 = 2;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x199
{
	GlobalFunc_9621(64, 2, 1);
	GlobalFunc_11328(95, 1);
	func_330();
}






















































































































































































































void func_216()//Position - 0x254C6
{
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_322)
	{
		case 0:
			GlobalFunc_9623("NMT_1_RCM", 1);
			iLocal_325 = 0;
			iLocal_322 = 1;
			break;
		
		case 1:
			switch (iLocal_325)
			{
				case 0:
					if (func_292(1, 1093140480, 0))
					{
						if (GlobalFunc_115(Local_95.f_28[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], "Nigel", 0, 0, 0);
						}
						if (GlobalFunc_115(Local_95.f_28[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[1], "MRS_Thornhill", 0, 0, 0);
						}
						GlobalFunc_8954();
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						iLocal_325++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						GlobalFunc_10066(-1103.327f, 786.844f, 157.7133f, -1090.286f, 788.6014f, 168.5228f, 10f, -1107.023f, 788.9111f, 163.0734f, 187.0703f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						GlobalFunc_10606(-1107.023f, 788.9111f, 163.0734f, 187.0703f, 0, 145);
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 1, 0, 0);
						}
						func_234(-1098.907f, 787.6641f, 163.0641f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						iLocal_325++;
					}
					break;
				
				case 2:
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_224(1, 1, 1, 1);
						GlobalFunc_4923(&Local_95, 0, 1);
						if (!GlobalFunc_115(Local_95.f_35[0]))
						{
							func_220(&(Local_95.f_35[0]), -1084.456f, 787.2556f, 163.986f, 100.8542f, 0, 1);
						}
						if (GlobalFunc_115(Local_95.f_35[0]))
						{
							GlobalFunc_5705(Local_95.f_35[0], -1094.484f, 785.5936f, 163.2927f, 102.2748f, 0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_95.f_35[0]);
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_95.f_35[0], 1);
							if (GlobalFunc_115(Local_95.f_28[0]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_95.f_28[0], 1862763509);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_95.f_28[0]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_95.f_28[0], 1);
								PED::SET_PED_INTO_VEHICLE(Local_95.f_28[0], Local_95.f_35[0], -1);
								PED::SET_PED_KEEP_TASK(Local_95.f_28[0], 1);
							}
							if (GlobalFunc_115(Local_95.f_28[1]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_95.f_28[1], 1862763509);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_95.f_28[1]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_95.f_28[1], 1);
								PED::SET_PED_INTO_VEHICLE(Local_95.f_28[1], Local_95.f_35[0], 0);
								PED::SET_PED_KEEP_TASK(Local_95.f_28[1], 1);
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_95.f_35[0], 1, 1);
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_95.f_28[0], Local_95.f_35[0], 20f, 786603);
						}
						RECORDING::_0x81CBAE94390F9F89();
						GlobalFunc_132(&(Local_95.f_28[0]), 1, 0, 1);
						GlobalFunc_132(&(Local_95.f_28[1]), 1, 0, 1);
						GlobalFunc_131(&(Local_95.f_35[0]));
						iLocal_321 = 1;
						iLocal_322 = 0;
					}
					break;
			}
			break;
	}
}




int func_220(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)//Position - 0x258AD
{
	STREAMING::REQUEST_MODEL(iLocal_82);
	if (iParam6 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_82))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_82))
	{
		return 0;
	}
	GlobalFunc_8256(uParam0, iLocal_82, Param1, fParam4);
	if (GlobalFunc_115(*uParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, 65, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*uParam0, 5, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, 0);
		if (iParam5 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
	return 1;
}




void func_224(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25A39
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










void func_234(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x25D3F
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


























































int func_292(int iParam0, int iParam1, int iParam2)//Position - 0x29ACC
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_2307(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6684(PLAYER::PLAYER_PED_ID(), -828834893))
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
		if (!GlobalFunc_Has_Cutscene_Loaded())
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







void func_299(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x29DEE
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




















int func_319(var uParam0)//Position - 0x2A9AF
{
	int iVar0[3];
	int iVar4;
	var uVar5;
	bool bVar6;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = uLocal_80;
	iVar0[2] = iLocal_82;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			GlobalFunc_2360(&uLocal_83, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
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
			bVar6 = true;
			if (!GlobalFunc_7967(&(uParam0->f_28[0]), 64, -1100.5f, 789.8f, 164.34f, 1.82f, "RC: NIGEL", 1))
			{
				bVar6 = false;
			}
			if (!GlobalFunc_7967(&(uParam0->f_28[1]), 63, -1099.35f, 789.15f, 164.47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar6 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iLocal_82, -1077.959f, 793.9361f, 164.6374f, 172.8563f);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				}
			}
			if (bVar6)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_115(uParam0->f_28[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
				uVar5 = PED::CREATE_SYNCHRONIZED_SCENE(-1100.558f, 789.8862f, 163.3285f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar5, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uVar5, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			func_320(37, 1);
			return 1;
			break;
	}
	return 0;
}

void func_320(int iParam0, bool bParam1)//Position - 0x2AC50
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				uLocal_94 = GlobalFunc_4528();
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				GlobalFunc_4527();
				MISC::CLEAR_AREA_OF_PEDS(-1100.5f, 789.8f, 164.34f, 20f, 0);
				GlobalFunc_4526(0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				GlobalFunc_4526(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				uLocal_94 = PED::ADD_SCENARIO_BLOCKING_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1, 1, 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				PED::SET_PED_NON_CREATION_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 1);
				MISC::CLEAR_AREA_OF_PEDS(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				MISC::CLEAR_AREA_OF_PEDS(-573.394f, 289.3696f, 79.06918f, 15f, 0);
				MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 1);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
				PED::CLEAR_PED_NON_CREATION_AREA();
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 0);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 1, 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				uLocal_94 = PED::ADD_SCENARIO_BLOCKING_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				MISC::CLEAR_AREA(-1035.73f, 365.44f, 68.91f, 35f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1035.73f, 365.44f, 68.91f, 27f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 1, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				uLocal_94 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f);
				MISC::CLEAR_AREA(-1096.855f, 67.6858f, 52.952f, 15f, 1, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				uLocal_94 = PED::ADD_SCENARIO_BLOCKING_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
	}
}










void func_330()//Position - 0x2B301
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	GlobalFunc_4526(1);
	GlobalFunc_200(&uLocal_156, 2);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_324, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	GlobalFunc_9165(&Local_95, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






































