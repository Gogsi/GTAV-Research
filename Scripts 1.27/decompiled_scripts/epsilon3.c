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
	var uLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_143 = NULL;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	char* sLocal_146 = NULL;
	var uLocal_147 = 16;
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
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	bool bLocal_331 = 0;
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
	uLocal_79 = GlobalFunc_4946(60);
	uLocal_80 = GlobalFunc_4946(14);
	sLocal_143 = "rcmepsilonism3";
	iLocal_144 = -1;
	sLocal_146 = "Marnie";
	fLocal_325 = 40f;
	fLocal_326 = 0.25f;
	fLocal_327 = 0.8f;
	fLocal_328 = -0.8f;
	fLocal_329 = 0.04f;
	Local_82 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_82);
	MISC::SET_MISSION_FLAG(1);
	uLocal_318 = GlobalFunc_2835();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (AUDIO::PREPARE_MUSIC_EVENT("EPS_FAIL"))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL"))
			{
			}
		}
		GlobalFunc_9624(1);
		func_309();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_299(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
		GlobalFunc_4972(1843.172f, 4701.249f, 37.5487f, 320.2838f, 1, 0);
		func_297(0);
	}
	if (!GlobalFunc_199())
	{
		GlobalFunc_10364("EP_3_RCM_ALT1", 1);
	}
	GlobalFunc_9621(60, 0, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_AsTT", 0);
		SYSTEM::WAIT(0);
		func_278(Local_82.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_144)
		{
			case -1:
				func_275();
				break;
			
			case 0:
				func_232();
				break;
			
			case 1:
				func_22();
				break;
			
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1A8
{
	char* sVar0;
	
	switch (iLocal_330)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			bLocal_331 = true;
			switch (iLocal_312)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "EPS3_FAILKILL";
					break;
				
				case 2:
					sVar0 = "EPS3_FAILHURT";
					break;
				
				case 3:
					sVar0 = "EPS3_FAILSCARE";
					break;
			}
			if (iLocal_312 == 0)
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sVar0, 1);
			}
			iLocal_330 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_309();
			}
			else if (bLocal_331 == 0)
			{
				if (iLocal_312 == 3)
				{
					bLocal_331 = GlobalFunc_10607(&uLocal_147, "FAN2AU", "FAN2_SCARED", 8, 1, 0, 0);
				}
			}
			break;
	}
}





















void func_22()//Position - 0xAEE
{
	switch (iLocal_145)
	{
		case 0:
			GlobalFunc_164("EPS3_LEAVE", 7500, 1);
			iLocal_321 = MISC::GET_GAME_TIMER() + 7500;
			iLocal_322 = MISC::GET_GAME_TIMER();
			iLocal_323 = 10000;
			iLocal_145 = 1;
			break;
		
		case 1:
			if (iLocal_314 == 1)
			{
			}
			if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 1.4f)
			{
				if ((!GlobalFunc_111() && GlobalFunc_115(Local_82.f_28[0])) && (MISC::GET_GAME_TIMER() - iLocal_322) > 5000)
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10607(&uLocal_147, "EPS3AUD", "EP3_FOLLOW", 8, 1, 0, 0))
						{
							iLocal_321 = MISC::GET_GAME_TIMER();
							iLocal_324++;
						}
					}
					else if (GlobalFunc_10607(&uLocal_147, "EPS3AUD", "EP3_FOLLOW", 8, 0, 0, 0))
					{
						iLocal_321 = MISC::GET_GAME_TIMER();
						iLocal_324++;
					}
				}
			}
			else if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111()) && (MISC::GET_GAME_TIMER() - iLocal_321) > iLocal_323)
			{
				if (GlobalFunc_115(Local_82.f_28[0]))
				{
					if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 10f)
					{
						if (iLocal_324 < 5)
						{
							if (GlobalFunc_10607(&uLocal_147, "EPS3AUD", "EP3_FOLLOW", 8, 0, 0, 0))
							{
								iLocal_321 = MISC::GET_GAME_TIMER();
								iLocal_324++;
							}
						}
						else if (GlobalFunc_10607(&uLocal_147, "EPS3AUD", "EP3_AMB", 8, 0, 0, 0))
						{
							iLocal_321 = MISC::GET_GAME_TIMER();
							iLocal_323 = 1000;
						}
					}
				}
			}
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				if (GlobalFunc_111())
				{
					if (iLocal_324 < 5)
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_82.f_28[0], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_82.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
				else if (PED::IS_PED_HEADTRACKING_PED(Local_82.f_28[0], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_82.f_28[0]);
				}
				if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 1), 3f))
				{
					iLocal_145 = 3;
				}
				if ((((((GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), 5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), 5f, 0)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), joaat("weapon_grenadelauncher"), 5f, 0)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), joaat("weapon_rpg"), 5f, 0)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), joaat("weapon_grenade"), 5f, 0)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), joaat("weapon_molotov"), 5f, 0)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 0), joaat("weapon_flare"), 5f, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					TASK::OPEN_SEQUENCE_TASK(&uLocal_317);
					TASK::TASK_PLAY_ANIM(0, "rcmepsilonism3", "outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_317);
					TASK::TASK_PERFORM_SEQUENCE(Local_82.f_28[0], uLocal_317);
					iLocal_312 = 3;
					func_297(2);
				}
				if (PED::IS_PED_INJURED(Local_82.f_28[0]) || PED::IS_PED_RAGDOLL(Local_82.f_28[0]))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					TASK::TASK_PERFORM_SEQUENCE(Local_82.f_28[0], uLocal_317);
					iLocal_312 = 2;
					func_297(2);
				}
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
				iLocal_312 = 1;
				func_297(2);
			}
			break;
		
		case 3:
			if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_STOP"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_STOP"))
				{
					GlobalFunc_5723(2, 0);
					GlobalFunc_10731(2, 0, 1);
					func_217(2, "EPS_1STEMAIL", 1);
					func_23();
				}
			}
			break;
	}
}

void func_23()//Position - 0xE9C
{
	int iVar0;
	
	if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_STOP"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_STOP"))
		{
		}
	}
	if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL == 0)
	{
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 6)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 6, 1);
		GlobalFunc_4(23, 6);
	}
	GlobalFunc_200(&uLocal_147, 3);
	GlobalFunc_11314(75, 1);
	func_309();
}


































































































































































































void func_217(int iParam0, char* sParam1, bool bParam2)//Position - 0x253A6
{
	int iVar0;
	
	iVar0 = GlobalFunc_2329(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_218(iParam0);
	}
}

void func_218(int iParam0)//Position - 0x254C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = GlobalFunc_2329(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {GlobalFunc_2030(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		GlobalFunc_9247(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				GlobalFunc_9247(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				GlobalFunc_9247(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				GlobalFunc_9247(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}














void func_232()//Position - 0x26B4A
{
	switch (iLocal_145)
	{
		case 0:
			iLocal_320 = 0;
			if (GlobalFunc_199())
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				GlobalFunc_10364("EP_3_RCM_ALT1", 0);
				HUD::REQUEST_ADDITIONAL_TEXT("EPS3", 0);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED() && !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
				{
					SYSTEM::WAIT(0);
				}
				func_272(0, 0, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_8320();
			}
			else if (func_260(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_82.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_82.f_28[0], sLocal_146, 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 0, 0);
				}
				GlobalFunc_8954();
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(0);
				if (GlobalFunc_199())
				{
					GlobalFunc_79(500, 0);
				}
				GlobalFunc_9628(1842.19f, 4707.64f, 36.87587f, 1845.486f, 4701.726f, 40.28056f, 9f, 1819.401f, 4707.289f, 38.1416f, 274.5804f, 1, 1, 1, 0, 0);
				func_246(1835.53f, 4705.86f, 38.1f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_145 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_145 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					iLocal_314 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_146, 0))
			{
				if (GlobalFunc_115(Local_82.f_28[0]))
				{
					TASK::TASK_PLAY_ANIM(Local_82.f_28[0], sLocal_143, "base_loop", 1000f, -8f, -1, 262145, 0.01f, 0, 0, 0);
					GlobalFunc_5705(Local_82.f_28[0], 1843.82f, 4705.74f, 40.8f, 143.14f, 1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_82.f_28[0], 1, 0);
				}
			}
			if (!iLocal_314)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_237(1, 1, 1, 1);
				iLocal_145 = 3;
			}
			else if (!iLocal_320)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_START"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_START"))
					{
						iLocal_320 = 1;
					}
				}
			}
			break;
		
		case 2:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_235(1, 1, 1);
			}
			func_237(1, 1, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				TASK::TASK_PLAY_ANIM(Local_82.f_28[0], sLocal_143, "base_loop", 1000f, -8f, -1, 262145, 0, 0, 0, 0);
				GlobalFunc_5705(Local_82.f_28[0], 1843.82f, 4705.74f, 40.8f, 143.14f, 1, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					iLocal_314 = 1;
				}
			}
			SYSTEM::WAIT(250);
			GlobalFunc_79(250, 0);
			iLocal_145 = 3;
			break;
		
		case 3:
			GlobalFunc_702(0, 0, 1);
			GlobalFunc_4923(&Local_82, 0, 1);
			func_297(1);
			break;
	}
}



void func_235(bool bParam0, int iParam1, int iParam2)//Position - 0x26FA9
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
			func_237(iParam1, iParam2, 1, 1);
		}
	}
}


void func_237(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2703A
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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









void func_246(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2732D
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9249(0);
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














int func_260(int iParam0, float fParam1, int iParam2)//Position - 0x27F5E
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
				if (!GlobalFunc_7104(PLAYER::PLAYER_PED_ID(), -828834893))
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












void func_272(int iParam0, int iParam1, int iParam2)//Position - 0x2843E
{
	func_237(0, 0, iParam2, 1);
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



void func_275()//Position - 0x2854A
{
	GlobalFunc_8320();
	if (GlobalFunc_115(Local_82.f_28[0]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 9f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	switch (iLocal_145)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_143);
			HUD::REQUEST_ADDITIONAL_TEXT("EPS3", 0);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_143) && !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
			{
				uLocal_319 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (GlobalFunc_4950(Local_82.f_28[0]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_82.f_28[0], uLocal_319);
				PED::SET_PED_CONFIG_FLAG(Local_82.f_28[0], 132, 1);
			}
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_82.f_28[0], 1);
				PED::SET_PED_KEEP_TASK(Local_82.f_28[0], 1);
			}
			bLocal_313 = false;
			GlobalFunc_1286(&uLocal_147, 3, Local_82.f_28[0], "MARNIE", 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_316);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1817.323f, 4708.106f, 38.1031f, 1f, 20000, 0.25f, 1, 1193033728);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_316);
			if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) >= 4f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (GlobalFunc_115(Local_82.f_28[0]))
					{
						if (GlobalFunc_1720())
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_82.f_28[0], 0f, 0f, -0.5f, 1, 30000, 2000, 2000, 0);
						}
						else
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_82.f_28[0], -0.75f, 0f, -0.5f, 1, 30000, 2000, 2000, 0);
						}
						CAM::SET_GAMEPLAY_HINT_FOV(fLocal_325);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_326);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_327);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_328);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_329);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						GlobalFunc_702(1, 0, 1);
					}
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
			}
			iLocal_145 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				if (iLocal_315 == 0)
				{
					if (((GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 3f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1847.705f, 4703.014f, 36.58427f, 1844.084f, 4709.532f, 39.73755f, 5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1842.977f, 4705.946f, 36.78089f, 1842.161f, 4707.852f, 40.10524f, 2.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1843.527f, 4704.969f, 36.83727f, 1844.178f, 4703.326f, 40.25331f, 2.5f, 0, 1, 0))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 7000, 0, 2);
						iLocal_315 = 1;
					}
				}
				if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) >= 4f)
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (GlobalFunc_115(Local_82.f_28[0]))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_82.f_28[0], -0.75f, 0f, -0.5f, 1, 30000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_325);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_326);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_327);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_328);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_329);
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						}
					}
					else
					{
						CAM::_0xCCD078C2665D2973(1);
					}
				}
			}
			if (!bLocal_313)
			{
				bLocal_313 = GlobalFunc_10607(&uLocal_147, "EPS3AUD", "EP3_RCM_L1", 8, 0, 0, 0);
				if (bLocal_313 && GlobalFunc_115(Local_82.f_28[0]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_82.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(Local_82.f_28[0], sLocal_143, "leadin", 8f, -8f, -1, 786434, 0, 0, 0, 0);
				}
			}
			else if (!GlobalFunc_111())
			{
				SYSTEM::WAIT(500);
				iLocal_145 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Local_82.f_28[0], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_82.f_28[0]);
				}
			}
			func_297(0);
			break;
	}
}



void func_278(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x28A34
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



















void func_297(int iParam0)//Position - 0x2968E
{
	iLocal_144 = iParam0;
	iLocal_145 = 0;
}


int func_299(var uParam0)//Position - 0x29732
{
	int iVar0[1];
	int iVar2;
	struct<3> Var3;
	var uVar6;
	bool bVar7;
	var uVar8;
	
	Var3 = { 1843.82f, 4705.74f, 38.8f };
	uVar6 = GlobalFunc_569(1.99f);
	iVar0[0] = uLocal_79;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 1842.66f, 4704.65f, 37.81f };
			uParam0->f_15 = 9f;
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "EP_3_RCM_ALT1", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmepsilonism3", "base_loop", 0);
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
			bVar7 = true;
			MISC::CLEAR_AREA_OF_PEDS(Var3, 35f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7964(&(uParam0->f_28[0]), 60, Var3, uVar6, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]) && GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
					{
						uVar8 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar8);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmepsilonism3", "ep_3_rcm_marnie_meditating", 1000f, -8f, -1, 786433, 0, 0, 0, 0);
					}
					else
					{
						bVar7 = false;
					}
				}
			}
			if (bVar7)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
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










void func_309()//Position - 0x29B15
{
	GlobalFunc_8954();
	if (GlobalFunc_115(Local_82.f_28[0]))
	{
		if (PED::IS_PED_HEADTRACKING_PED(Local_82.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_82.f_28[0]);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_318, 0);
	if (GlobalFunc_9159())
	{
	}
	GlobalFunc_132(&(Local_82.f_28[0]), 1, 0, 1);
	GlobalFunc_9165(&Local_82, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}








































