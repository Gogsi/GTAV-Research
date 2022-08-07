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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	struct<4> Local_43[10];
	bool bLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 16;
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
	char* sLocal_298 = NULL;
	char* sLocal_299 = NULL;
	char* sLocal_300 = NULL;
	char* sLocal_301 = NULL;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	char* sLocal_317 = NULL;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	char* sLocal_321 = NULL;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 1000;
	var uLocal_339 = 1000;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_118 = 1;
	sLocal_301 = "REBTH_HANGAR";
	sLocal_302 = "REBTH_RUNSOF";
	sLocal_303 = "REBTH_TAUNT";
	sLocal_317 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_318 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_320 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_323 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_95 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_213();
	}
	if (SYSTEM::VDIST2(Local_95, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		iLocal_316 = 1;
	}
	else if (SYSTEM::VDIST2(Local_95, 769.3f, -151.66f, 73.79f) < 16f)
	{
		iLocal_316 = 2;
	}
	else if (SYSTEM::VDIST2(Local_95, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		iLocal_316 = 3;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_95, 1) < 100f)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (iLocal_316 != 3)
	{
		if (func_172(Local_95, 26, iLocal_316, 0, 0))
		{
			GlobalFunc_6828(26);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (func_172(Local_95, 8, 0, 0, 0))
	{
		GlobalFunc_6828(8);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_315 = func_167();
	uLocal_324 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 28);
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 13);
			PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 35);
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_88 > 1)
		{
			if (func_146())
			{
				func_145();
				func_213();
			}
			else
			{
				switch (iLocal_88)
				{
					case 0:
						func_142();
						break;
					
					case 1:
						if (func_141())
						{
							func_145();
							func_213();
						}
						else
						{
							func_129();
						}
						break;
					
					case 2:
						func_105();
						func_101();
						func_100();
						func_99();
						func_97();
						func_96();
						func_88();
						break;
					
					case 3:
						func_86();
						func_68();
						func_59();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_213();
		}
	}
}

void func_1()//Position - 0x2D1
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_91))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_91, 1) > 50f)
		{
			GlobalFunc_4702(8);
			func_20();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_128) > 10000)
		{
			GlobalFunc_4702(8);
			func_20();
		}
		else if ((iLocal_328 == 0 && !GlobalFunc_111()) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_300, 4, 0, 0, 0))
		{
			iLocal_328 = 1;
		}
	}
}



















void func_20()//Position - 0xB8E
{
	int iVar0;
	
	if (iLocal_316 == 3)
	{
		GlobalFunc_8039(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), 4, 5);
	}
	else
	{
		GlobalFunc_8039(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), 1, 3);
	}
	if (iLocal_316 != 3)
	{
		func_33(26, iLocal_316);
	}
	else
	{
		func_33(8, 0);
	}
	if (iLocal_316 == 1)
	{
		iVar0 = GlobalFunc_8315();
		switch (iVar0)
		{
			case 0:
				while (!GlobalFunc_7022(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!GlobalFunc_7022(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!GlobalFunc_7022(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	GlobalFunc_7068();
	func_213();
}













void func_33(int iParam0, int iParam1)//Position - 0x10F0
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8310(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_85.x, Local_85.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}


























void func_59()//Position - 0x26AE
{
	if (GlobalFunc_115(iLocal_91) && GlobalFunc_4947(iLocal_92))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 0))
		{
			func_66(&uLocal_341);
			GlobalFunc_846(&uLocal_131);
			if (iLocal_129 == 0 && !HUD::DOES_BLIP_EXIST(uLocal_130))
			{
				uLocal_130 = GlobalFunc_6783(iLocal_92, 0, 0);
			}
		}
		else
		{
			GlobalFunc_846(&uLocal_130);
			if (!HUD::DOES_BLIP_EXIST(uLocal_131))
			{
				uLocal_131 = GlobalFunc_6797(iLocal_91, 0, 145);
				if (iLocal_342 == 0)
				{
					GlobalFunc_4713(&uLocal_341);
					iLocal_342 = 1;
				}
			}
		}
	}
}







void func_66(var uParam0)//Position - 0x2881
{
	*uParam0 = (MISC::GET_GAME_TIMER() - 5000);
}


void func_68()//Position - 0x28BE
{
	float fVar0;
	
	if (GlobalFunc_115(iLocal_91) && GlobalFunc_4947(iLocal_92))
	{
		GlobalFunc_4715(uLocal_131, &uLocal_341);
		if (fLocal_123 > 0f)
		{
			fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_91, 1);
			if (fVar0 > (fLocal_123 + fLocal_116))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 0))
				{
					GlobalFunc_4702(7);
					func_20();
				}
				else
				{
					func_213();
				}
			}
		}
		else
		{
			fLocal_123 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_91, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_92, 0);
				AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_307 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
			{
				func_84();
				if (iLocal_310 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 0) && PED::IS_PED_FACING_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 30f)) && func_75(iLocal_91, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7)) && !PED::IS_PED_RAGDOLL(iLocal_91)) && !TASK::IS_PED_GETTING_UP(iLocal_91)) && GlobalFunc_10618(&uLocal_133, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_91, sLocal_322, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_310 = 1;
						}
					}
					else
					{
						iLocal_310 = 1;
					}
				}
			}
		}
		else if (((!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_92, iLocal_91, 35f, 35f, 35f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 0)) && !func_74()) && GlobalFunc_10618(&uLocal_133, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_72(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91, 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_121, 1862763509);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_91, 1);
			TASK::TASK_COMBAT_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_KEEP_TASK(iLocal_91, 1);
			SYSTEM::WAIT(0);
			GlobalFunc_4702(7);
			func_20();
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, 0))
		{
			if (!GlobalFunc_111() && GlobalFunc_10618(&uLocal_133, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_128 = MISC::GET_GAME_TIMER();
			iLocal_88 = 4;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_92, iLocal_91, 20f, 20f, 20f, 0, 1, 0))
		{
			if (func_71())
			{
				if (!GlobalFunc_6964(iLocal_91, 242628503))
				{
					iLocal_129 = 1;
					func_72(0);
					func_66(&uLocal_341);
					GlobalFunc_846(&uLocal_131);
					GlobalFunc_846(&uLocal_130);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_92, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					if (iLocal_307 == 0)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_92, 20000, -1, 2f, 8, 0);
					}
					else
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_92, 20000, -1, 2f, 262152, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_92, fLocal_113, 786485);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_91, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					PED::SET_PED_KEEP_TASK(iLocal_91, 1);
				}
			}
			else
			{
				switch (iLocal_307)
				{
					case 0:
						if ((((iLocal_310 == 1 && !GlobalFunc_6964(iLocal_91, -2017877118)) && !PED::IS_PED_RAGDOLL(iLocal_91)) && !TASK::IS_PED_GETTING_UP(iLocal_91)) && GlobalFunc_10618(&uLocal_133, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 30f) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, -875674219) == 7)
							{
								TASK::TASK_PLAY_ANIM(iLocal_91, sLocal_322, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_308 = MISC::GET_GAME_TIMER();
							iLocal_307++;
						}
						else
						{
							func_84();
						}
						break;
					
					case 1:
						if (((((MISC::GET_GAME_TIMER() - iLocal_308) > 10000 && !GlobalFunc_6964(iLocal_91, -2017877118)) && !PED::IS_PED_RAGDOLL(iLocal_91)) && !TASK::IS_PED_GETTING_UP(iLocal_91)) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_304, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_72(0);
								TASK::TASK_PLAY_ANIM(iLocal_91, sLocal_323, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_308 = MISC::GET_GAME_TIMER();
							iLocal_307++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					case 2:
						if (((((MISC::GET_GAME_TIMER() - iLocal_308) > 10000 && !GlobalFunc_6964(iLocal_91, -2017877118)) && !PED::IS_PED_RAGDOLL(iLocal_91)) && !TASK::IS_PED_GETTING_UP(iLocal_91)) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_72(0);
								TASK::TASK_PLAY_ANIM(iLocal_91, sLocal_321, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_307++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					default:
						func_72(1);
						break;
					}
				}
			}
	}
}



int func_71()//Position - 0x2DFB
{
	if (iLocal_129 == 1)
	{
		return 1;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_127) < 4000)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 1))
	{
		return 0;
	}
	if (GlobalFunc_115(iLocal_90) && PED::IS_PED_BEING_JACKED(iLocal_90))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_92, -1))
	{
		return 0;
	}
	return 1;
}

void func_72(int iParam0)//Position - 0x2E58
{
	if (GlobalFunc_115(iLocal_91))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_IN_GROUP(iLocal_91) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_91, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_91, 1);
				PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 2f, -1082130432, -1082130432);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
		else if (PED::IS_PED_IN_GROUP(iLocal_91))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_91);
		}
	}
}


int func_74()//Position - 0x2EDD
{
	if (iLocal_316 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F22
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_83(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_43[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_78();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_43[iVar4 /*4*/].f_1 = iParam0;
		Local_43[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_76(&(Local_43[iVar4 /*4*/]), Var1, iParam1, &(Local_43[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_43[iVar4 /*4*/].f_3) < iParam4);
}

int func_76(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x2FE3
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!GlobalFunc_115(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { GlobalFunc_167(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_84)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_84)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}


int func_78()//Position - 0x31D4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_43)
	{
		if ((Local_43[iVar0 /*4*/] == 0 && Local_43[iVar0 /*4*/].f_1 == 0) && Local_43[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_83(int iParam0, int iParam1)//Position - 0x332A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_43)
	{
		if (Local_43[iVar0 /*4*/].f_1 == iParam0 && Local_43[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84()//Position - 0x3369
{
	if (iLocal_129 == 0 && GlobalFunc_115(iLocal_91))
	{
		if (GlobalFunc_6964(iLocal_91, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iLocal_91);
		}
		if ((((!GlobalFunc_6964(iLocal_91, -2017877118) && !PED::IS_PED_FACING_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 20f)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, -875674219) == 7) && !PED::IS_PED_RAGDOLL(iLocal_91)) && !TASK::IS_PED_GETTING_UP(iLocal_91))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
}


void func_86()//Position - 0x349C
{
	if (GlobalFunc_115(iLocal_90))
	{
		if (iLocal_119 == 0)
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 2, 0);
			TASK::CLEAR_PED_TASKS(iLocal_90);
			if (GlobalFunc_4947(iLocal_92))
			{
				if (iLocal_316 == 2)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 1))
				{
					PED::KNOCK_PED_OFF_VEHICLE(iLocal_90);
				}
			}
			PED::SET_PED_KEEP_TASK(iLocal_90, 1);
			TASK::TASK_SMART_FLEE_PED(iLocal_90, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
			iLocal_119 = 1;
		}
		else
		{
			if (((((iLocal_120 == 0 && GlobalFunc_156(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) < 30f) && !PED::IS_PED_RAGDOLL(iLocal_90)) && GlobalFunc_6964(iLocal_90, 1805844857)) && !GlobalFunc_111()) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_302, 4, 0, 0, 0))
			{
				iLocal_120 = 1;
			}
			if (GlobalFunc_156(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) > 50f)
			{
				GlobalFunc_2297(&iLocal_90, 1, 0, 1);
			}
		}
	}
}


void func_88()//Position - 0x35E1
{
	if ((GlobalFunc_115(iLocal_90) && GlobalFunc_115(iLocal_91)) && GlobalFunc_4947(iLocal_92))
	{
		if (func_95())
		{
			GlobalFunc_4948(&uLocal_329, 0, 0);
			GlobalFunc_69(&iLocal_90);
			GlobalFunc_6692(&iLocal_92);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 25f, 25f, 25f, 0, 1, 0) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_306, 4, 0, 0, 0))
			{
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_90();
		}
		else
		{
			GlobalFunc_2216(uLocal_130, iLocal_92, fLocal_116, 1061158912, 0);
		}
	}
}


void func_90()//Position - 0x37D4
{
	func_213();
}





int func_95()//Position - 0x39AB
{
	if (GlobalFunc_156(iLocal_92, PLAYER::PLAYER_PED_ID(), 1) > (fLocal_116 + 100f))
	{
		return 1;
	}
	if (GlobalFunc_156(iLocal_92, PLAYER::PLAYER_PED_ID(), 1) > fLocal_116)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91, sLocal_320, "IDLE_A", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91, sLocal_320, "IDLE_A") > 0.99f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91, sLocal_320, "IDLE_B", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91, sLocal_320, "IDLE_B") > 0.99f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_91, sLocal_320, "IDLE_C", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_91, sLocal_320, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_96()//Position - 0x3A65
{
	if ((((((((((iLocal_126 > -1 && (MISC::GET_GAME_TIMER() - iLocal_126) > 5000) && !GlobalFunc_111()) && GlobalFunc_115(iLocal_90)) && GlobalFunc_115(iLocal_91)) && GlobalFunc_4947(iLocal_92)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0)) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_301, 4, 0, 0, 0))
	{
		iLocal_126 = -1;
	}
}

void func_97()//Position - 0x3B38
{
	if (func_98())
	{
		iLocal_127 = MISC::GET_GAME_TIMER();
		GlobalFunc_846(&uLocal_130);
		GlobalFunc_4948(&uLocal_329, 0, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_93, 1, 1);
		}
		if (GlobalFunc_115(iLocal_91))
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
		}
		if ((GlobalFunc_115(iLocal_90) && !GlobalFunc_111()) && GlobalFunc_10618(&uLocal_133, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_88 = 3;
	}
	else
	{
		if (((iLocal_325 == 0 && HUD::DOES_BLIP_EXIST(uLocal_130)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_90))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_90, 1) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_90, 1), 10f, 1))
			{
				iLocal_325 = 1;
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_130, iLocal_325);
			}
		}
		if (((iLocal_316 == 2 && GlobalFunc_115(iLocal_90)) && GlobalFunc_4947(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
		{
			if (iLocal_311 == 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_92, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_311 = 1;
				Local_312 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "RE_BikeThief2"), VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "RE_BikeThief2")) };
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92) || GlobalFunc_713(iLocal_92, Local_312, 1) < 5f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
				}
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_90, iLocal_92, PLAYER::PLAYER_PED_ID(), 8, fLocal_113, 786468, 10f, 1f, 0);
			}
		}
	}
}

int func_98()//Position - 0x3CD2
{
	if (!GlobalFunc_115(iLocal_90))
	{
		return 1;
	}
	else if (GlobalFunc_115(iLocal_92))
	{
		if (iLocal_343 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
			{
				iLocal_343 = 1;
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x3D32
{
	if ((GlobalFunc_115(iLocal_90) && GlobalFunc_4947(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
	{
		if (iLocal_118)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_113 = fLocal_115;
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_90, fLocal_113);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
				iLocal_118 = 0;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_113 = fLocal_114;
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_90, fLocal_113);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
			iLocal_118 = 1;
		}
	}
}

void func_100()//Position - 0x3DE1
{
	if (((((((((iLocal_124 < 5 && !GlobalFunc_111()) && GlobalFunc_115(iLocal_90)) && GlobalFunc_115(iLocal_91)) && GlobalFunc_4947(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && (MISC::GET_GAME_TIMER() - iLocal_125) > 15000) && GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_303, 4, 0, 0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_90))
		{
			TASK::TASK_DRIVE_BY(iLocal_90, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_125 = MISC::GET_GAME_TIMER();
		iLocal_124++;
	}
}

void func_101()//Position - 0x3ED2
{
	if ((((iLocal_309 == 0 && GlobalFunc_115(iLocal_91)) && GlobalFunc_115(iLocal_90)) && GlobalFunc_4947(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
	{
		if (iLocal_326 == 0)
		{
			if (GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_298, 4, func_104(), 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_91);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_90, -1, 2048, 2);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_104, 2f, 20000, 1193033728, 1056964608);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_92, 1000);
				TASK::TASK_PLAY_ANIM(0, sLocal_318, sLocal_319, 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_91, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				iLocal_125 = MISC::GET_GAME_TIMER();
				iLocal_126 = MISC::GET_GAME_TIMER();
				if (iLocal_316 == 3)
				{
					sLocal_299 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_299 = "REBTH_HELP2";
				}
				iLocal_326 = 1;
			}
		}
		else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_91, 1) < 30f)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_133, "REBTHAU", sLocal_299, 4, 0, 0, 0))
					{
						iLocal_309 = 1;
					}
				}
				else if (iLocal_327 == 0)
				{
					GlobalFunc_5105();
					iLocal_327 = 1;
				}
			}
		}
	}
}



int func_104()//Position - 0x410D
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_105()//Position - 0x4151
{
	if ((GlobalFunc_115(iLocal_90) && GlobalFunc_4947(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, 0))
	{
		GlobalFunc_10629(&uLocal_329, iLocal_92, 0, 0, 1, 1, 1);
	}
}
























void func_129()//Position - 0x4FC4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		if (PED::IS_PED_INJURED(iLocal_90))
		{
			func_145();
			func_213();
		}
		else if (func_140())
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_173(&uLocal_133, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				sLocal_300 = "REBTH_RESPM";
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_173(&uLocal_133, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				sLocal_300 = "REBTH_RESPF";
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_173(&uLocal_133, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				sLocal_300 = "REBTH_RESPT";
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, 0) && !PED::IS_PED_INJURED(iLocal_90))
			{
				if (iLocal_316 == 2)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_90, iLocal_92, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_92, 20000, -1, 1073741824, 1, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_92, PLAYER::PLAYER_PED_ID(), 8, fLocal_113, 786468, 10f, 1f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_90, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					PED::SET_PED_KEEP_TASK(iLocal_90, 1);
				}
			}
			GlobalFunc_846(&uLocal_132);
			uLocal_130 = GlobalFunc_6797(iLocal_90, 1, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_130, iLocal_325);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (iLocal_316 == 1)
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0, 0, 1);
			}
			iLocal_88 = 2;
			GlobalFunc_9559(1);
		}
	}
}











int func_140()//Position - 0x5711
{
	switch (iLocal_316)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_141()//Position - 0x57DC
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 16f, 16f, 6f };
	Var3 = { -16f, -16f, -6f };
	if (GlobalFunc_115(iLocal_90))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (GlobalFunc_4947(iLocal_92))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_92, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (GlobalFunc_115(iLocal_91))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_91, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_91, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_91, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(iLocal_91))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_142()//Position - 0x5930
{
	if (iLocal_117 == 0)
	{
		switch (iLocal_316)
		{
			case 1:
				Local_101 = { 433.57f, -1916.68f, 24.04f };
				fLocal_111 = 248.5f;
				Local_104 = { 439.054f, -1920.145f, 23.5581f };
				Local_107 = { 434.31f, -1908.87f, 25.92f };
				fLocal_112 = -163.17f;
				Local_98 = { 435.18f, -1915.18f, 24.68f };
				fLocal_110 = 226.13f;
				fLocal_114 = 10f;
				fLocal_115 = 20f;
				iLocal_89 = joaat("scorcher");
				fLocal_116 = 250f;
				sLocal_304 = "REBTH_THX2";
				sLocal_305 = "REBTH_THX3";
				sLocal_306 = "REBTH_GONE";
				break;
			
			case 2:
				Local_101 = { 774.06f, -155.63f, 73.44f };
				fLocal_111 = 144.3932f;
				Local_104 = { 769.8723f, -156.9548f, 73.5144f };
				Local_107 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_112 = 151.6004f;
				Local_98 = { 771.41f, -154.29f, 74.09f };
				fLocal_110 = 150.54f;
				fLocal_114 = 10f;
				fLocal_115 = 20f;
				iLocal_89 = joaat("scorcher");
				fLocal_116 = 250f;
				sLocal_304 = "REBTH_THX2";
				sLocal_305 = "REBTH_THX3";
				sLocal_306 = "REBTH_GONE";
				break;
			
			case 3:
				Local_101 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_111 = 285.0046f;
				Local_104 = { -1934.785f, 253.2105f, 83.8164f };
				Local_107 = { -1931.04f, 252.19f, 84.99f };
				fLocal_112 = 42.33f;
				Local_98 = { -1932.27f, 254.5f, 84.4f };
				fLocal_110 = 96.81f;
				fLocal_114 = 10f;
				fLocal_115 = 35f;
				iLocal_89 = joaat("bati");
				fLocal_116 = 400f;
				sLocal_304 = "REBTH_THX2X";
				sLocal_305 = "REBTH_THX3X";
				sLocal_306 = "REBTH_GONEX";
				break;
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f));
		MISC::CLEAR_AREA(Local_101, 20f, 1, 0, 0, 0);
		iLocal_117 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("g_m_y_strpunk_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_beachvesp_01"));
	STREAMING::REQUEST_MODEL(iLocal_89);
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_strpunk_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beachvesp_01"))) && STREAMING::HAS_MODEL_LOADED(iLocal_89)) && func_144()) && func_143())
	{
		iLocal_92 = VEHICLE::CREATE_VEHICLE(iLocal_89, Local_98, fLocal_110, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_89);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_89, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, 1, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_92, 0);
		VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_92, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_92, 1);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_92, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_113 = fLocal_115;
		if (iLocal_316 == 3)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_92, 49, 0);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_92, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 16, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 11, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 12, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 13, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 23, 10, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_92, 24, 10, 0);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_92, 22, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_92, 17, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_92, 21, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_92, 20, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_92, 19, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_92, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_92, 0, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_92, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupVictim", &uLocal_121);
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupThief", &uLocal_122);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_122, uLocal_121);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_122, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_121, 1862763509);
		iLocal_90 = PED::CREATE_PED(19, joaat("g_m_y_strpunk_01"), Local_107, fLocal_112, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_strpunk_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_90, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90, uLocal_122);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_90, 3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90, 17, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90, 13, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 1, 1);
		PED::SET_PED_HELMET(iLocal_90, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_90, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_90, 281, 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_90, 2);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_90, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		TASK::TASK_PLAY_ANIM(iLocal_90, sLocal_317, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_91 = PED::CREATE_PED(19, joaat("a_m_y_beachvesp_01"), Local_101, fLocal_111, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beachvesp_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_91, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_91, 8, 1);
		if (iLocal_316 == 3)
		{
			PED::SET_PED_HELMET(iLocal_91, 1);
		}
		else
		{
			PED::SET_PED_HELMET(iLocal_91, 0);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_91, 26, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_91, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_91, 167, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_91, 281, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91, iLocal_121);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_91, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_91, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		GlobalFunc_173(&uLocal_133, 1, iLocal_90, "BThief", 0, 1);
		GlobalFunc_173(&uLocal_133, 2, iLocal_91, "BThiefVictim", 0, 1);
		if (iLocal_315 == 0)
		{
			if (iLocal_316 == 3)
			{
				sLocal_298 = "REBTH_HELPX";
			}
			else
			{
				sLocal_298 = "REBTH_HELP";
			}
			sLocal_302 = "REBTH_RUNSOF";
			sLocal_303 = "REBTH_TAUNT";
			sLocal_319 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_315 == 1)
		{
			if (iLocal_316 == 3)
			{
				sLocal_298 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_298 = "REBTH_HLPB";
			}
			sLocal_302 = "REBTH_RUNB";
			sLocal_303 = "REBTH_TNTB";
			sLocal_319 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_298 = "REBTH_HLPC";
			sLocal_302 = "REBTH_RUNC";
			sLocal_303 = "REBTH_TNTC";
			sLocal_319 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		PED::SET_CREATE_RANDOM_COPS(0);
		iLocal_88 = 1;
	}
}

int func_143()//Position - 0x5ED7
{
	if (iLocal_316 == 2)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RE_BikeThief2");
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_144()//Position - 0x5F01
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_317);
	STREAMING::REQUEST_ANIM_DICT(sLocal_318);
	STREAMING::REQUEST_ANIM_DICT(sLocal_320);
	STREAMING::REQUEST_ANIM_DICT(sLocal_321);
	STREAMING::REQUEST_ANIM_DICT(sLocal_323);
	STREAMING::REQUEST_ANIM_DICT(sLocal_322);
	if (((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_317) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_318)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_320)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_321)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_323)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_322))
	{
		return 1;
	}
	return 0;
}

void func_145()//Position - 0x5F7E
{
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (GlobalFunc_6964(iLocal_91, 993674639))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_91);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_91);
		}
		PED::SET_PED_KEEP_TASK(iLocal_91, 1);
		TASK::TASK_SMART_FLEE_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_90))
	{
		PED::SET_PED_KEEP_TASK(iLocal_90, 1);
		TASK::TASK_SMART_FLEE_PED(iLocal_90, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 1);
	}
}

int func_146()//Position - 0x5FE9
{
	if (iLocal_88 == 0 && func_165())
	{
		return 1;
	}
	if (iLocal_88 == 1 && GlobalFunc_10587())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		if (PED::IS_PED_INJURED(iLocal_91))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_4956();
			GlobalFunc_5157(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_147(iLocal_91, 170f))
		{
			GlobalFunc_4956();
			GlobalFunc_5157(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_310 == 1)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_92) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, 0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, float fParam1)//Position - 0x60B7
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
				if (func_148(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_148(int iParam0, float fParam1)//Position - 0x612D
{
	return func_75(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

















int func_165()//Position - 0x7D99
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_85) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9556(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}


int func_167()//Position - 0x7E27
{
	int iVar0;
	
	if (GlobalFunc_2046(26, 1))
	{
		iVar0++;
	}
	if (GlobalFunc_2046(26, 2))
	{
		iVar0++;
	}
	if (GlobalFunc_2046(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}





int func_172(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x7F05
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_85 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_9556(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_85.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_6509(GlobalFunc_8315()) == 4 || GlobalFunc_6509(GlobalFunc_8315()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (!GlobalFunc_9557(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10548())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_9039(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8315() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}









































void func_213()//Position - 0x9514
{
	GlobalFunc_4948(&uLocal_329, 0, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, 0))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_92, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_316 != 3)
	{
		GlobalFunc_10823(26);
	}
	else
	{
		GlobalFunc_10823(8);
	}
	if (iLocal_316 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_324, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), 1, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_92, 1);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
		}
	}
	if (iLocal_316 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
	}
	GlobalFunc_846(&uLocal_132);
	GlobalFunc_846(&uLocal_130);
	func_66(&uLocal_341);
	GlobalFunc_846(&uLocal_131);
	func_72(0);
	GlobalFunc_200(&uLocal_133, 0);
	GlobalFunc_200(&uLocal_133, 1);
	GlobalFunc_200(&uLocal_133, 2);
	if ((GlobalFunc_115(iLocal_91) && GlobalFunc_115(iLocal_92)) && PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, 0))
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_91, iLocal_92, fLocal_113, 786485);
		PED::SET_PED_KEEP_TASK(iLocal_91, 1);
	}
	GlobalFunc_2297(&iLocal_90, 1, 0, 1);
	GlobalFunc_2297(&iLocal_91, 1, 0, 1);
	GlobalFunc_131(&iLocal_92);
	if (GlobalFunc_115(iLocal_93))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_93);
		GlobalFunc_131(&iLocal_93);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_strpunk_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beachvesp_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bati"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_317);
	STREAMING::REMOVE_ANIM_DICT(sLocal_318);
	STREAMING::REMOVE_ANIM_DICT(sLocal_320);
	STREAMING::REMOVE_ANIM_DICT(sLocal_321);
	STREAMING::REMOVE_ANIM_DICT(sLocal_322);
	STREAMING::REMOVE_ANIM_DICT(sLocal_323);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}















