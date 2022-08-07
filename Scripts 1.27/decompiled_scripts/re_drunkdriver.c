#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64[2] = { 0, 0 };
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	var uLocal_90[2] = { 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_142[24] = "";
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<3> Local_151 = { 0, 0, 0 } ;
	var uLocal_154[2] = { 0, 0 };
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	struct<3> Local_159 = { 0, 0, 0 } ;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
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
	struct<3> Local_338 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	uLocal_50 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_51 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_86 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_123 = -1;
	StringCopy(&Local_136, "", 24);
	iLocal_164 = -1;
	Local_338 = { -1017.345f, -1354.196f, 4.4568f };
	Local_341 = { 2003.456f, 3071.102f, 46.0499f };
	Local_56 = { ScriptParam_0.f_1[0 /*3*/] };
	func_264();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_230();
	}
	if (func_188(Local_56, 27, iLocal_344, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_158 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_61)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10587())
				{
					func_230();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_52)
			{
				case 0:
					if (iLocal_55)
					{
						iLocal_171 = 1;
						iLocal_52 = 1;
					}
					else
					{
						if (func_171())
						{
							func_230();
						}
						if (!bLocal_59)
						{
							func_170();
						}
						if (bLocal_59)
						{
							func_169();
						}
					}
					break;
				
				case 1:
					func_159();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						GlobalFunc_502();
						func_155();
						if (iLocal_53 == 1 && !ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
						{
							func_70();
							if (func_68() || ENTITY::IS_ENTITY_DEAD(iLocal_93))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_90[0]))
									{
										if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
										{
											PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
										}
										TASK::CLEAR_PED_TASKS(uLocal_90[0]);
										TASK::TASK_SMART_FLEE_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
										GlobalFunc_5471(uLocal_90[0], 120000, 0);
										PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
										GlobalFunc_4956();
										SYSTEM::WAIT(0);
										GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_53 == 2 || (iLocal_53 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_90[1])))
						{
							func_70();
							if (iLocal_54 != 9)
							{
								if (func_68() || ENTITY::IS_ENTITY_DEAD(iLocal_93))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
									{
										if (!PED::IS_PED_INJURED(uLocal_90[0]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
											{
												PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
											}
											TASK::CLEAR_PED_TASKS(uLocal_90[0]);
											TASK::TASK_SMART_FLEE_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											GlobalFunc_5471(uLocal_90[0], 120000, 0);
											PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
									{
										if (!PED::IS_PED_INJURED(uLocal_90[1]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_90[1]))
											{
												PED::REMOVE_PED_FROM_GROUP(uLocal_90[1]);
											}
											TASK::CLEAR_PED_TASKS(uLocal_90[1]);
											TASK::TASK_SMART_FLEE_PED(uLocal_90[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											GlobalFunc_5471(uLocal_90[1], 120000, 0);
											PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
										}
									}
									if (iLocal_53 == 1)
									{
										GlobalFunc_4956();
										SYSTEM::WAIT(0);
										GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_53 == 2)
									{
										GlobalFunc_4956();
										SYSTEM::WAIT(0);
										GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_90[0], 1f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
						{
							if (!PED::IS_PED_INJURED(uLocal_90[1]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_90[1], 1f);
							}
						}
					}
					if ((GlobalFunc_831() && !GlobalFunc_832()) && iLocal_54 != 9)
					{
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_90[0], Local_86, 5f, 5f, 5f, 0, 1, 0))
							{
								if (iLocal_53 == 2)
								{
									if (!PED::IS_PED_INJURED(uLocal_90[1]))
									{
										if (!PED::IS_PED_IN_GROUP(uLocal_90[0]) && !PED::IS_PED_IN_GROUP(uLocal_90[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[0], GlobalFunc_468());
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[1], GlobalFunc_468());
										}
									}
								}
								GlobalFunc_619(0);
								SYSTEM::WAIT(0);
								GlobalFunc_4956();
								iLocal_54 = 9;
							}
						}
					}
					if (GlobalFunc_6568())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
						{
							PED::DELETE_PED(&(uLocal_90[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
						{
							PED::DELETE_PED(&(uLocal_90[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_230();
		}
		func_1();
	}
}

void func_1()//Position - 0x4D4
{
	if (((iLocal_53 == 1 && iLocal_54 == 7) && iLocal_63 == 5) && iLocal_109)
	{
		iLocal_158 = MISC::GET_GAME_TIMER();
		if (func_2())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				Local_159 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
			}
		}
	}
}

int func_2()//Position - 0x52C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (iLocal_53 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(uLocal_90[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x5F9
{
	if (iLocal_53 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_93, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!GlobalFunc_5672("REDR2_DC") && !GlobalFunc_5672("REDR2_AKA")) && !GlobalFunc_5672("REDR2_OFFR")) && !GlobalFunc_5672("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!GlobalFunc_5672("REDR2_DC") && !GlobalFunc_5672("REDR2_AKA")) && !GlobalFunc_5672("REDR2_AKB")) && !GlobalFunc_5672("REDR2_TRY")) && !GlobalFunc_5672("REDR2_JIC")) && !GlobalFunc_5672("REDR2_CH")) && !GlobalFunc_5672("REDR2_WH2")) && !GlobalFunc_5672("REDR2_BCK")) && !GlobalFunc_5672("REDR2_JIA")) && !GlobalFunc_5672("REDR2_JIB")) && !GlobalFunc_5672("REDR2_JIC")) && !GlobalFunc_5672("REDR2_WHA")) && !GlobalFunc_5672("REDR2_WHB")) && !GlobalFunc_5672("REDR2_WHC")) && !GlobalFunc_5672("REDR2_PSM")) && !GlobalFunc_5672("REDR2_PSF")) && !GlobalFunc_5672("REDR2_PST")) && !GlobalFunc_5672("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_93) && ENTITY::GET_ENTITY_HEALTH(iLocal_93) < iLocal_79)
				{
					iLocal_79 = ENTITY::GET_ENTITY_HEALTH(iLocal_93);
					func_5(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_93))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							TASK::TASK_WANDER_STANDARD(uLocal_90[0], 1193033728, 0);
							PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
						}
						if (!PED::IS_PED_INJURED(uLocal_90[1]))
						{
							TASK::TASK_GO_TO_ENTITY(uLocal_90[1], uLocal_90[0], -1, 0f, 1f, 1073741824, 0);
							PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
						}
						return 1;
					}
				}
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_93, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_93, PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_90[0]);
					TASK::TASK_SMART_FLEE_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_90[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_90[1]);
					TASK::TASK_SMART_FLEE_PED(uLocal_90[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
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


void func_5(bool bParam0)//Position - 0x8C4
{
	if (bParam0)
	{
		if (iLocal_135)
		{
			if (GlobalFunc_10626(&uLocal_172, "REDR2AU", &cLocal_142, &Local_136, 8, 0, 0))
			{
				iLocal_135 = 0;
			}
		}
	}
	else if ((!iLocal_135 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5672("REDR1_SWV"))
	{
		cLocal_142 = { GlobalFunc_560() };
		Local_136 = { GlobalFunc_2209() };
		GlobalFunc_5105();
		iLocal_135 = 1;
	}
}























int func_28()//Position - 0x1204
{
	if (iLocal_53 == 1)
	{
		if (PED::IS_PED_INJURED(uLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (PED::IS_PED_INJURED(uLocal_90[0]) && PED::IS_PED_INJURED(uLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()//Position - 0x1247
{
	if (iLocal_53 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()//Position - 0x128D
{
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_34(27, iLocal_344);
	GlobalFunc_7068();
	func_230();
}




void func_34(int iParam0, int iParam1)//Position - 0x1339
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
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


























void func_60()//Position - 0x2761
{
	func_230();
}








int func_68()//Position - 0x2949
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(1);
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if ((MISC::IS_BULLET_IN_AREA(Local_151, 40f, 1) || MISC::IS_BULLET_IN_AREA(GlobalFunc_271(PLAYER::PLAYER_ID()), 10f, 0)) || MISC::IS_PROJECTILE_IN_AREA(Local_151 - Vector(40f, 40f, 40f), Local_151 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(uLocal_90[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::IS_ENTITY_IN_WATER(uLocal_90[0]))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_90[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_90[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_90[0]))
			{
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_90[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_90[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					return 1;
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_90[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_90[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_90[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_70()//Position - 0x2B0F
{
	int iVar0;
	
	switch (iLocal_54)
	{
		case 0:
			if (iLocal_53 == 1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_151, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_151, 15f, 15f, 15f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_150))
					{
						HUD::REMOVE_BLIP(&uLocal_150);
					}
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_154[0]))
						{
							uLocal_154[0] = GlobalFunc_6797(uLocal_90[0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_154[0], 0);
						}
					}
					if (!GlobalFunc_6827())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							iLocal_94 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						GlobalFunc_10691(&uLocal_172, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						GlobalFunc_9559(1);
						GlobalFunc_563(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
						{
							GlobalFunc_2207();
							TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_122 = (MISC::GET_GAME_TIMER() + 60000);
							if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
							{
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_154[0], 1);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_151, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_151, 15f, 15f, 15f, 0, 1, 0))
				{
					func_141();
					if (!GlobalFunc_6827())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							iLocal_94 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						GlobalFunc_9559(1);
						GlobalFunc_563(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, 1, 0))
					{
						GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_154[0], 1);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_154[1]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_154[1], 1);
						}
						iLocal_122 = (MISC::GET_GAME_TIMER() + 120000);
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_122 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_93))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_90[1], 7000, 2060, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_93, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				}
				if (!PED::IS_PED_INJURED(uLocal_90[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_90[0], 7000, 2060, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_54 = 3;
			}
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 80f))
					{
						bLocal_120 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_54 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
				{
					AUDIO::_0xB542DE8C3D1CB210(1);
				}
				else
				{
					AUDIO::_0xB542DE8C3D1CB210(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_53 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[1]))
					{
						if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_54 = 4;
						}
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 80f))
						{
							bLocal_120 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_54 = 4;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_140();
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_619(1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 15f, 15f, 15f, 0, 1, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
								}
								if (!PED::IS_PED_INJURED(uLocal_90[1]))
								{
									TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_54 = 4;
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
						if (!PED::IS_PED_INJURED(uLocal_90[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_54 = 4;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_93, 1.5f, 1.5f, 5f, 0, 1, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_169 = 2;
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_154[iLocal_62]))
								{
									HUD::REMOVE_BLIP(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_157))
							{
								uLocal_157 = GlobalFunc_6783(iLocal_93, 0, 0);
							}
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_90[0]);
							}
							iLocal_54 = 4;
						}
					}
				}
				if (iLocal_122 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_93))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_90[1], -1, 2060, 4);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_93, -1, -1, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_90[0], -1, 2060, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_90[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_93, -1, 0, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_154[iLocal_62]))
								{
									HUD::REMOVE_BLIP(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_53 == 1)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_120)
							{
								AUDIO::_0xB542DE8C3D1CB210(0);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], -1, 2060, 4);
								if ((MISC::GET_GAME_TIMER() + 50000) > iLocal_122 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									GlobalFunc_5105();
									if (bLocal_120)
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_8315() == 0)
											{
												if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_169++;
												}
											}
											else if (GlobalFunc_8315() == 1)
											{
												if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_169++;
												}
											}
											else if (GlobalFunc_8315() == 2)
											{
												if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_169++;
												}
											}
										}
									}
									else
									{
										iLocal_169++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!GlobalFunc_111())
						{
							if (func_136())
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
									if (!PED::IS_PED_INJURED(uLocal_90[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_90[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
									}
									func_135();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10000, 2060, 4);
										GlobalFunc_5105();
										SYSTEM::WAIT(0);
										iLocal_169++;
									}
									else
									{
										func_134(uLocal_90[0], &(uLocal_64[0]));
									}
								}
								if (!GlobalFunc_111())
								{
									iLocal_169++;
								}
							}
						}
						break;
					
					case 2:
						if (func_136())
						{
							iLocal_169 = 6;
						}
						else
						{
							iLocal_169++;
						}
						break;
					
					case 3:
						if (!iLocal_103)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
									SYSTEM::SETTIMERA(0);
									iLocal_103 = 1;
								}
							}
						}
						func_134(uLocal_90[0], &(uLocal_64[0]));
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_169++;
							}
						}
						break;
					
					case 4:
						if (!func_136())
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
									if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_154[0]));
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_154[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_154[1]));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
										if (!PED::IS_PED_INJURED(uLocal_90[0]))
										{
											TASK::TASK_ENTER_VEHICLE(uLocal_90[0], iLocal_93, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_169++;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_154[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_154[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_154[1]));
							}
							iLocal_169++;
						}
						break;
					
					case 5:
						if (func_136())
						{
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_90[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_90[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[0], GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_90[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_90[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_99, 1862763509);
								func_133();
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_93)
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_8315() == 0)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (GlobalFunc_8315() == 1)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (GlobalFunc_8315() == 2)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_54 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_134(uLocal_90[0], &(uLocal_64[0]));
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_136())
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_169 = 10;
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_136())
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_8315() == 0)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_169 = 10;
										}
									}
									else if (GlobalFunc_8315() == 1)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_169 = 10;
										}
									}
									else if (GlobalFunc_8315() == 2)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_169 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 10:
						if (func_136())
						{
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_90[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_90[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[0], GlobalFunc_468());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_90[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_90[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_99, 1862763509);
								func_133();
							}
							iLocal_169++;
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 11:
						iLocal_54 = 7;
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_FACING_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									if (GlobalFunc_620())
									{
										GlobalFunc_619(0);
									}
									GlobalFunc_5105();
									SYSTEM::WAIT(0);
									if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_169++;
									}
								}
								else
								{
									func_134(uLocal_90[0], &(uLocal_64[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
							SYSTEM::SETTIMERA(0);
							iLocal_169++;
						}
						break;
					
					case 2:
						func_134(uLocal_90[0], &(uLocal_64[0]));
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_154[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_154[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_154[1]));
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_157))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
								{
									uLocal_157 = GlobalFunc_6783(iLocal_93, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
								}
							}
						}
						if (!GlobalFunc_111())
						{
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 20f, 20f, 20f, 0, 1, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
									if (iVar0 < 60)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, 1))
							{
								iLocal_54 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_93))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_93, -1) == uLocal_90[0])
					{
						if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_93))
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_93, -1) && PED::IS_PED_IN_VEHICLE(uLocal_90[0], iLocal_93, 0))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_90[0], iLocal_93);
										iLocal_54 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_93, -1) == uLocal_90[0])
									{
										iLocal_54 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_93, -1) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_54 = 7;
									}
									else
									{
										GlobalFunc_5471(uLocal_90[0], 120000, 0);
										TASK::TASK_WANDER_STANDARD(uLocal_90[0], 1193033728, 0);
										PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
										SYSTEM::WAIT(0);
										func_60();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								GlobalFunc_5471(uLocal_90[0], 120000, 0);
								TASK::TASK_WANDER_STANDARD(uLocal_90[0], 1193033728, 0);
								PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
								SYSTEM::WAIT(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_93, -1))
							{
								if (!PED::IS_PED_INJURED(uLocal_90[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_93, -1, -1, 1f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
								}
							}
							if (!PED::IS_PED_INJURED(uLocal_90[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_93, -1, 0, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_53 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], iLocal_93, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 355471868) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 355471868) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_93, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_93, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_93, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_93, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_93, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
								PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[0], iLocal_93) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[1], iLocal_93))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_93, 1);
							TASK::CLEAR_PED_TASKS(uLocal_90[1]);
							TASK::TASK_STAND_STILL(uLocal_90[1], -1);
							PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
							iLocal_54 = 5;
						}
						if (!iLocal_100)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[0], iLocal_93) && !PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[1], iLocal_93))
							{
								TASK::CLEAR_PED_TASKS(uLocal_90[0]);
								TASK::TASK_STAND_STILL(uLocal_90[0], -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[0], iLocal_93) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_90[1], iLocal_93))
							{
								TASK::CLEAR_PED_TASKS(uLocal_90[1]);
								TASK::TASK_STAND_STILL(uLocal_90[1], -1);
							}
							iLocal_100 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_90[0]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_93, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, 0f, 2f, 0f), 10f, 0, iLocal_97, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_93, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_93, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_93, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_93, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_93, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
					PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
				}
			}
			iLocal_54 = 6;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(uLocal_90[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_53 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[1], 50f, 50f, 50f, 0, 1, 0))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_90[1]));
					}
				}
				switch (iLocal_63)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_154[0]))
							{
								uLocal_154[0] = GlobalFunc_6797(uLocal_90[0], 0, 145);
							}
							iLocal_63++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(uLocal_90[0]))
							{
								if (func_136())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
									{
										fLocal_163 = GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 1);
										iLocal_63++;
									}
								}
								else if (!iLocal_118)
								{
									if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_118 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_131();
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							if (func_136())
							{
								if (!iLocal_117)
								{
									if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 1) > (fLocal_163 + 5f))
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_117 = 1;
										}
									}
								}
							}
							else if (!iLocal_118)
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_118 = 1;
								}
							}
						}
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_154[0]));
							}
							if (GlobalFunc_8315() == 2 && !GlobalFunc_832())
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_102))
								{
									uLocal_102 = GlobalFunc_5104(Local_86, 0);
									HUD::SET_BLIP_SPRITE(uLocal_102, 269);
									func_127();
								}
							}
							iLocal_61 = 1;
							iLocal_63++;
						}
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							if (GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!GlobalFunc_111())
						{
							SYSTEM::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							if (GlobalFunc_8315() == 0)
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (GlobalFunc_8315() == 1)
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (GlobalFunc_8315() == 2)
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 4:
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_170 = MISC::GET_GAME_TIMER();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_126();
						func_125();
						func_131();
						if (!iLocal_109)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_170) > 7000)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_170 = MISC::GET_GAME_TIMER();
										iLocal_109 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_108 && !bLocal_107)
							{
								func_124();
							}
							else
							{
								func_121();
								func_120();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
							}
						}
						if (func_119(Local_80))
						{
							func_5(0);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_118())
						{
							func_5(0);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_90[0], Local_80, Global_21, 1, 1, 0))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_101))
								{
									HUD::REMOVE_BLIP(&uLocal_101);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_102))
								{
									HUD::REMOVE_BLIP(&uLocal_102);
								}
								iLocal_54 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_63)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, 1))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_154[0]))
								{
									uLocal_154[0] = GlobalFunc_6797(uLocal_90[0], 0, 145);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_154[1]))
								{
									uLocal_154[1] = GlobalFunc_6797(uLocal_90[1], 0, 145);
								}
								if (!GlobalFunc_111())
								{
									SYSTEM::SETTIMERA(0);
									if (GlobalFunc_8315() == 0)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (GlobalFunc_8315() == 1)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (GlobalFunc_8315() == 2)
									{
										if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_93))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_90[0]);
							TASK::TASK_ENTER_VEHICLE(uLocal_90[0], iLocal_93, 30000, 2, 2f, 1, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_63++;
						break;
					
					case 2:
						if (!PED::IS_PED_INJURED(uLocal_90[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_93))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_93, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_93, 30000, 1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_63++;
						break;
					
					case 3:
						func_126();
						func_125();
						if (!iLocal_116)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_116 = 1;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_90[1]))
								{
									if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(uLocal_90[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_99, 1862763509);
										func_133();
										iLocal_62 = 0;
										while (iLocal_62 <= (iLocal_89 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_154[iLocal_62]))
											{
												HUD::REMOVE_BLIP(&(uLocal_154[iLocal_62]));
											}
											iLocal_62++;
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_157))
										{
											HUD::REMOVE_BLIP(&uLocal_157);
										}
										if (GlobalFunc_8315() == 2 && !GlobalFunc_832())
										{
											if (!HUD::DOES_BLIP_EXIST(uLocal_102))
											{
												uLocal_102 = GlobalFunc_5104(Local_86, 0);
												HUD::SET_BLIP_SPRITE(uLocal_102, 269);
												func_127();
											}
										}
										if (GlobalFunc_8315() == 0)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_63++;
											}
										}
										else if (GlobalFunc_8315() == 1)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_63++;
											}
										}
										else if (GlobalFunc_8315() == 2)
										{
											if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_63++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_126();
						func_125();
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_61 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_170 = MISC::GET_GAME_TIMER();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_126();
						if (iLocal_345 == 0 || iLocal_345 == 9)
						{
							func_125();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_170) > 9000)
						{
							func_112();
						}
						if (iLocal_345 == 9 && ((MISC::GET_GAME_TIMER() - iLocal_346) > 6000 && (MISC::GET_GAME_TIMER() - iLocal_346) < 6500))
						{
							GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_119(Local_80))
						{
							func_5(0);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_118())
						{
							func_5(0);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
						{
							if ((!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_90[0], Local_80, Global_21, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_90[1], Local_80, Global_21, 0, 1, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 6:
						if (HUD::DOES_BLIP_EXIST(uLocal_101))
						{
							HUD::REMOVE_BLIP(&uLocal_101);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_102))
						{
							HUD::REMOVE_BLIP(&uLocal_102);
						}
						iLocal_54 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_62 = 0;
			while (iLocal_62 <= (iLocal_89 - 1))
			{
				if (!PED::IS_PED_INJURED(uLocal_90[iLocal_62]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_90[iLocal_62], 0);
				}
				iLocal_62++;
			}
			if (iLocal_53 == 1)
			{
				if (GlobalFunc_552(1, 0, 1) && iLocal_123 == -1)
				{
					GlobalFunc_5105();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_93)
						{
							iLocal_123 = 0;
						}
						else
						{
							iLocal_123 = 1;
						}
					}
					else
					{
						iLocal_123 = 2;
					}
				}
				if (iLocal_123 == 0)
				{
					func_110();
				}
				if (iLocal_123 == 1)
				{
					func_109();
				}
				if (iLocal_123 == 2)
				{
					func_108();
				}
				if (bLocal_129)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_30();
				}
			}
			if (iLocal_53 == 2)
			{
				if (GlobalFunc_552(1, 0, 1) && iLocal_123 == -1)
				{
					GlobalFunc_4956();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 4f), 2, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					GlobalFunc_8316(1, 1, 1, 0);
					while (GlobalFunc_111())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_93)
						{
							iLocal_123 = 0;
						}
					}
				}
				if (iLocal_123 == 0)
				{
					func_98();
				}
				else if (iLocal_123 == 1)
				{
					func_97();
				}
				else if (iLocal_123 == 2)
				{
					func_71();
				}
				if (bLocal_129)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()//Position - 0x4B89
{
	switch (iLocal_125)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10000, 2060, 4);
			}
			if (!PED::IS_PED_INJURED(uLocal_90[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
			}
			GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_125++;
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_90[0], Local_83, 1f, -1, 1193033728, 1056964608);
					iLocal_124 = MISC::GET_GAME_TIMER() + 500;
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_90[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_90[1], Local_83, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			GlobalFunc_10829(GlobalFunc_8315(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}


























void func_97()//Position - 0x5C87
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_90[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
						}
						if (!PED::IS_PED_INJURED(uLocal_90[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_90[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[1]);
						}
					}
					GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_90[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				iLocal_124 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_124 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_125 = 7;
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_124 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_125 = 7;
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_124 = MISC::GET_GAME_TIMER() + 750;
					iLocal_125 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_124 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_125++;
					}
				}
				if (GlobalFunc_8315() == 1 || GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_124 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			if (!GlobalFunc_111())
			{
				iLocal_125++;
			}
			break;
		
		case 8:
			GlobalFunc_10829(GlobalFunc_8315(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_98()//Position - 0x5F3C
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_125)
	{
		case 0:
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_93))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_90[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_90[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 4000, 2060, 4);
						}
						if (!PED::IS_PED_INJURED(uLocal_90[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_90[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[1]);
						}
					}
					StringCopy(&cLocal_142, "", 24);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
			{
				uLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				uLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				CAM::SHAKE_CAM(uLocal_127, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_128, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_127, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA(Local_80, 8f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_93, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_93, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_93);
				iLocal_124 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_125++;
			}
			break;
		
		case 2:
			if (iLocal_124 - 500) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(uLocal_90[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[1], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
						PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
					}
				}
			}
			if (iLocal_124 - 1000) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
						PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
					}
				}
			}
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(uLocal_127, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_128, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_127, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_124 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(uLocal_127, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_128, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_127, 1500, 1, 1);
				if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_90[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_90[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(uLocal_90[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_90[1], 262.1522f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (GlobalFunc_8315() == 1)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_124 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125 = 7;
			break;
		
		case 6:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_124 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_125++;
					}
				}
				if (GlobalFunc_8315() == 1 || GlobalFunc_8315() == 0)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_124 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			GlobalFunc_8316(0, 1, 1, 0);
			PED::DELETE_PED(&(uLocal_90[0]));
			PED::DELETE_PED(&(uLocal_90[1]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 7);
			}
			if (iLocal_130)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_93))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_93, 1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
			}
			CAM::SET_CAM_ACTIVE(uLocal_127, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_10829(GlobalFunc_8315(), 1, 40, 0, 1);
			bLocal_129 = true;
	}
	if (iLocal_125 != 0)
	{
		if (GlobalFunc_4926(1000))
		{
			GlobalFunc_4956();
			iLocal_130 = 1;
			iLocal_125 = 7;
		}
	}
}










void func_108()//Position - 0x6792
{
	switch (iLocal_125)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10000, 2060, 4);
				}
				if (bLocal_107)
				{
					GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_125++;
			}
			break;
		
		case 1:
			iLocal_124 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_125++;
			break;
		
		case 2:
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
				iLocal_124 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			GlobalFunc_10829(GlobalFunc_8315(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_109()//Position - 0x6971
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_90[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			iLocal_125++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
			}
			GlobalFunc_5471(uLocal_90[0], 120000, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_124 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_125++;
			break;
		
		case 4:
			iLocal_124 = MISC::GET_GAME_TIMER() + 3000;
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 5:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				iLocal_125++;
			}
			break;
		
		case 6:
			GlobalFunc_10829(GlobalFunc_8315(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_110()//Position - 0x6BA4
{
	switch (iLocal_125)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_93) && !GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_90[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
				GlobalFunc_5471(uLocal_90[0], 120000, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_124 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_125++;
			}
			break;
		
		case 3:
			iLocal_124 = MISC::GET_GAME_TIMER() + 3000;
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < MISC::GET_GAME_TIMER())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			iLocal_125++;
			break;
		
		case 7:
			GlobalFunc_10829(GlobalFunc_8315(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}


void func_112()//Position - 0x6EBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
		if (iVar1 != 0)
		{
			iVar2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((GlobalFunc_4705(64) || PAD::IS_CONTROL_PRESSED(0, 86)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73)) || PAD::IS_CONTROL_PRESSED(0, 68)) || PAD::IS_CONTROL_PRESSED(0, 75)) || iVar0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	switch (iLocal_345)
	{
		case 0:
			if (func_116())
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], uLocal_90[1], -1, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], uLocal_90[0], -1, 2060, 4);
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90[0], uLocal_98);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90[1], uLocal_98);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
					iLocal_346 = MISC::GET_GAME_TIMER();
					iLocal_345++;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_346 = MISC::GET_GAME_TIMER();
				iLocal_345++;
			}
			break;
		
		case 2:
			if (func_116())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_346) > 5000)
				{
					if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_346 = MISC::GET_GAME_TIMER();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_346) > 15000)
			{
				if (func_116())
				{
					TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_345++;
				}
			}
			break;
		
		case 4:
			if (func_116())
			{
				GlobalFunc_5077();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_346 = MISC::GET_GAME_TIMER();
						iLocal_345++;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_90[0]);
				TASK::CLEAR_PED_TASKS(uLocal_90[1]);
				iLocal_345 = 3;
			}
			break;
		
		case 5:
			if (func_116())
			{
				GlobalFunc_5077();
				func_113();
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_90[1], 0), 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_346) > 15000)
					{
						bVar3 = false;
						iVar4 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
						if (iVar4 != 0)
						{
							iVar5 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_98);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
						}
						if (GlobalFunc_8315() == 0)
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_346 = MISC::GET_GAME_TIMER();
								iLocal_345++;
							}
						}
						else if (GlobalFunc_8315() == 1)
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_346 = MISC::GET_GAME_TIMER();
								iLocal_345++;
							}
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_346 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_345++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			GlobalFunc_5077();
			func_113();
			if ((MISC::GET_GAME_TIMER() - iLocal_346) > 5000 && func_116())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_90[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_345++;
						}
					}
				}
			}
			break;
		
		case 7:
			GlobalFunc_5077();
			if (func_116())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_346 = MISC::GET_GAME_TIMER();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 8:
			GlobalFunc_5077();
			if (func_116())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_90[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_345 = 6;
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_346) > 10000)
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_90[0]);
					TASK::CLEAR_PED_TASKS(uLocal_90[1]);
					iLocal_346 = MISC::GET_GAME_TIMER();
					iLocal_345++;
				}
			}
			break;
	}
}

void func_113()//Position - 0x75A4
{
	if (!PED::IS_PED_INJURED(uLocal_90[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0), 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0), 0, 0, 0);
				}
			}
		}
	}
}



int func_116()//Position - 0x7718
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(uLocal_90[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[1], 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(uLocal_90[1], 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_90[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], iVar0, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2) == uLocal_90[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1) == uLocal_90[1])
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}


int func_118()//Position - 0x77E3
{
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_831())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

int func_119(struct<3> Param0)//Position - 0x785E
{
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_831() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_46 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_120()//Position - 0x78EB
{
	if (!bLocal_107)
	{
		if ((((((((!GlobalFunc_5672("REDR1_SWV") && !GlobalFunc_5672("REDR1_COM")) && !GlobalFunc_5672("REDR1_BANT1")) && !GlobalFunc_5672("REDR1_SIK")) && !GlobalFunc_5672("REDR2_DC")) && !GlobalFunc_5672("REDR1_OFFR")) && !GlobalFunc_5672("REDR2_OFFR")) && !GlobalFunc_5672("REDR1_CULT")) && !GlobalFunc_5672("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_109 && !iLocal_133) && (MISC::GET_GAME_TIMER() - iLocal_170) > 9000)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (iLocal_133 && !iLocal_134)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_148 = MISC::GET_GAME_TIMER() + 6000;
			iLocal_134 = 1;
		}
	}
	if (!bLocal_107)
	{
		if ((iLocal_133 && !iLocal_132) && iLocal_148 < MISC::GET_GAME_TIMER())
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_134 = 0;
					iLocal_132 = 1;
				}
			}
		}
	}
	else if ((bLocal_107 && !iLocal_131) && iLocal_148 < MISC::GET_GAME_TIMER())
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_134 = 0;
				iLocal_131 = 1;
			}
		}
	}
}

void func_121()//Position - 0x7AA6
{
	if (func_2() && iLocal_110 < 2)
	{
		if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (!GlobalFunc_5672("REDR1_SWV"))
			{
				func_5(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_162 += 6;
			}
		}
		func_122(Local_159, (MISC::GET_GAME_TIMER() - iLocal_158));
	}
	if (iLocal_162 > 17)
	{
		iLocal_108 = 1;
	}
}

void func_122(struct<3> Param0, int iParam3)//Position - 0x7B37
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_123(Var3, iParam3) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !GlobalFunc_5672("REDR1_SWV"))
			{
				if (iLocal_164 == -1)
				{
					iLocal_164 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_164 < MISC::GET_GAME_TIMER())
				{
					iLocal_162 += 3;
					func_5(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_164 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_162++;
		if (!GlobalFunc_5672("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_162++;
		if (!GlobalFunc_5672("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.x > 0.025f)
	{
		iLocal_162++;
		if (!GlobalFunc_5672("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.x < -0.025f)
	{
		iLocal_162++;
		if (!GlobalFunc_5672("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_123(struct<3> Param0, int iParam3)//Position - 0x7D19
{
	struct<3> Var0;
	
	Var0.x = (Param0.x / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_124()//Position - 0x7D45
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uLocal_90[0]))
	{
		switch (iLocal_110)
		{
			case 0:
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_110++;
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_90[0]);
						TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_110++;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_1", sLocal_113);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_104)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_104 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
							if (GlobalFunc_8315() == 0)
							{
								GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8315() == 1)
							{
								GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8315() == 2)
							{
								GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_106)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_90[0], "random@drunk_driver_1", sLocal_113) > 0.8f)
					{
						iLocal_110++;
					}
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
				}
				if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_104 = 0;
					iLocal_110++;
				}
				break;
			
			case 4:
				AUDIO::STOP_SOUND(uLocal_111);
				bLocal_107 = true;
				break;
			}
	}
}

void func_125()//Position - 0x7FCE
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_167)
		{
			iLocal_165 = MISC::GET_GAME_TIMER();
			iLocal_167 = 1;
		}
		else
		{
			iLocal_166 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_166 = 0;
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
	if ((iLocal_166 - iLocal_165) > 50000 && !iLocal_168)
	{
		if (iLocal_53 == 1)
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_168 = 1;
	}
	if ((iLocal_166 - iLocal_165) > 60000 && iLocal_168)
	{
		if (iLocal_53 == 2)
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_90[0]) && !PED::IS_PED_INJURED(uLocal_90[1]))
		{
			TASK::TASK_WANDER_STANDARD(uLocal_90[0], 1193033728, 0);
			GlobalFunc_5471(uLocal_90[0], 120000, 0);
			PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
			if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_90[1], uLocal_90[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			GlobalFunc_5471(uLocal_90[1], 120000, 0);
			PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
			if (PED::IS_PED_IN_GROUP(uLocal_90[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_90[1]);
			}
		}
		func_60();
	}
}

void func_126()//Position - 0x8118
{
	if (iLocal_53 == 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_90[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_136() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(uLocal_90[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[0], GlobalFunc_468());
					PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_90[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_90[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_90[0]))
					{
						TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
						iLocal_119 = 0;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(uLocal_90[0], 0, 0);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
					{
						TASK::STOP_ANIM_PLAYBACK(uLocal_90[0], 0, 0);
					}
				}
				if (GlobalFunc_111() && !iLocal_119)
				{
					GlobalFunc_619(1);
					iLocal_119 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_154[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_154[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_101))
				{
					uLocal_101 = GlobalFunc_5104(Local_80, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_154[0]))
				{
					uLocal_154[0] = GlobalFunc_6797(uLocal_90[0], 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_101))
				{
					HUD::REMOVE_BLIP(&uLocal_101);
				}
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_93) && !PED::IS_PED_INJURED(uLocal_90[0])) && !PED::IS_PED_INJURED(uLocal_90[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 150f, 150f, 150f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[0]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
						{
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
						}
						TASK::CLEAR_PED_TASKS(uLocal_90[0]);
						TASK::TASK_SMART_FLEE_PED(uLocal_90[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						GlobalFunc_5471(uLocal_90[0], 120000, 0);
						PED::SET_PED_KEEP_TASK(uLocal_90[0], 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_90[1]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_90[1]))
						{
							PED::REMOVE_PED_FROM_GROUP(uLocal_90[1]);
						}
						TASK::CLEAR_PED_TASKS(uLocal_90[1]);
						TASK::TASK_SMART_FLEE_PED(uLocal_90[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						GlobalFunc_5471(uLocal_90[1], 120000, 0);
						PED::SET_PED_KEEP_TASK(uLocal_90[1], 1);
					}
				}
				func_60();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_90[0], iLocal_93, 0) && PED::IS_PED_IN_VEHICLE(uLocal_90[1], iLocal_93, 0))
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
						iLocal_119 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_101))
					{
						uLocal_101 = GlobalFunc_5104(Local_80, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_157))
				{
					HUD::REMOVE_BLIP(&uLocal_157);
				}
			}
			else
			{
				if ((GlobalFunc_111() && !iLocal_119) && iLocal_63 > 3)
				{
					GlobalFunc_619(1);
					iLocal_119 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_157))
				{
					uLocal_157 = GlobalFunc_6783(iLocal_93, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_101))
				{
					HUD::REMOVE_BLIP(&uLocal_101);
				}
			}
		}
	}
}

void func_127()//Position - 0x8516
{
	if (GlobalFunc_8315() == 2)
	{
		if (!Global_24680)
		{
			GlobalFunc_159("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}




void func_131()//Position - 0x8594
{
	if (!PED::IS_PED_INJURED(uLocal_90[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_136())
			{
				if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(uLocal_90[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_90[0], 0, 0);
				}
				if (!iLocal_121)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10618(&uLocal_172, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_121 = 1;
					}
				}
			}
			else
			{
				iLocal_121 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_90[0], 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(uLocal_90[0]);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(uLocal_90[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_90[0], GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_90[0], 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_90[0], 0);
		}
	}
}


void func_133()//Position - 0x8714
{
	if (!GlobalFunc_832())
	{
		if (GlobalFunc_8315() == 2)
		{
			Global_24678 = 1;
		}
	}
}

void func_134(int iParam0, var uParam1)//Position - 0x8730
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_98);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_98);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_98);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_98);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_135()//Position - 0x87E9
{
	if (GlobalFunc_8315() == 0)
	{
		if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_169++;
		}
	}
	else if (GlobalFunc_8315() == 1)
	{
		if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_169++;
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_10618(&uLocal_172, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_169++;
		}
	}
}

int func_136()//Position - 0x886C
{
	int iVar0;
	
	if (iLocal_53 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_53 == 2)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if ((((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_140()//Position - 0x8A93
{
	if (!PED::IS_PED_INJURED(uLocal_90[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_114)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
			if (!iLocal_115)
			{
				if (GlobalFunc_10618(&uLocal_172, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
		}
	}
}

void func_141()//Position - 0x8B04
{
	if (HUD::DOES_BLIP_EXIST(uLocal_150))
	{
		HUD::REMOVE_BLIP(&uLocal_150);
	}
	iLocal_62 = 0;
	while (iLocal_62 <= (iLocal_89 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_154[iLocal_62]))
		{
			uLocal_154[iLocal_62] = GlobalFunc_6797(uLocal_90[iLocal_62], 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_154[iLocal_62], 0);
		}
		iLocal_62++;
	}
}














void func_155()//Position - 0x9183
{
	if (func_157())
	{
		sLocal_112 = "drunk_idle_van";
		sLocal_113 = "vomit_van";
	}
	else if (func_156())
	{
		sLocal_112 = "drunk_idle_low";
		sLocal_113 = "vomit_low";
	}
	else
	{
		sLocal_112 = "drunk_idle";
		sLocal_113 = "vomit_outside";
	}
}

int func_156()//Position - 0x91C3
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0)))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0));
			if (((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157()//Position - 0x9288
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0)))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_90[0], 0));
			if ((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184)
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_159()//Position - 0x93C7
{
	if (!iLocal_60)
	{
		GlobalFunc_8536(39, 1);
		GlobalFunc_8536(40, 1);
		GlobalFunc_8536(41, 1);
		GlobalFunc_8536(42, 1);
		GlobalFunc_8536(43, 1);
		MISC::CLEAR_AREA(Local_67, 8f, 1, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_67 - Vector(8f, 8f, 8f), Local_67 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), 0, 1);
		MISC::SET_BIT(&uLocal_149, 5);
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_173(&uLocal_172, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (GlobalFunc_8315() == 1)
		{
			GlobalFunc_173(&uLocal_172, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (GlobalFunc_8315() == 2)
		{
			GlobalFunc_173(&uLocal_172, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &uLocal_99);
		iLocal_93 = VEHICLE::CREATE_VEHICLE(iLocal_97, Local_75, fLocal_78, 1, 1);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_93);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_93);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_97, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_93, 1);
		iLocal_79 = ENTITY::GET_ENTITY_HEALTH(iLocal_93);
		uLocal_90[0] = PED::CREATE_PED(26, iLocal_95, Local_67, fLocal_70, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_90[0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_90[0], uLocal_99);
		PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 185, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_90[0], 65536, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
		AUDIO::STOP_PED_SPEAKING(uLocal_90[0], 1);
		uLocal_90[1] = PED::CREATE_PED(26, iLocal_96, Local_71, fLocal_74, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_90[1], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_90[1], uLocal_99);
		PED::SET_PED_CONFIG_FLAG(uLocal_90[1], 185, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_90[1], 65536, 1);
		AUDIO::STOP_PED_SPEAKING(uLocal_90[1], 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_99, 1862763509);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		if (iLocal_53 == 1)
		{
			TASK::TASK_PLAY_ANIM(uLocal_90[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(uLocal_90[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_90[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_90[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[0], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 4, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_93, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 206, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 299, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_90[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_90[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_90[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			GlobalFunc_173(&uLocal_172, 3, uLocal_90[0], "REDR1Drunk1", 0, 1);
			GlobalFunc_173(&uLocal_172, 4, uLocal_90[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_53 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_80 - Vector(10f, 50f, 30f), Local_80 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_93, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_90[1], 8, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 134, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[1], 134, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 26, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[1], 26, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 206, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_90[1], 206, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_90[0], 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_90[1], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_90[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_90[0], uLocal_90[1], -1, 2060, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_90[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_90[1], 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_90[1], uLocal_90[0], -1, 2060, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_90[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_90[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_90[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_90[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			GlobalFunc_173(&uLocal_172, 3, uLocal_90[0], "REDR2DrunkM", 0, 1);
			GlobalFunc_173(&uLocal_172, 4, uLocal_90[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_60 = 1;
	}
}










void func_169()//Position - 0x9DD4
{
	STREAMING::REQUEST_MODEL(iLocal_95);
	STREAMING::REQUEST_MODEL(iLocal_97);
	STREAMING::REQUEST_MODEL(iLocal_96);
	if (iLocal_53 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0);
	}
	else if (iLocal_53 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_95) && STREAMING::HAS_MODEL_LOADED(iLocal_97)) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK")) && STREAMING::HAS_MODEL_LOADED(iLocal_96))
	{
		if (iLocal_53 == 1)
		{
			if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1")) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", 0))
			{
				iLocal_55 = 1;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_55 = 1;
			}
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_95);
		STREAMING::REQUEST_MODEL(iLocal_97);
		STREAMING::REQUEST_MODEL(iLocal_96);
		if (iLocal_53 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0);
		}
		else if (iLocal_53 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_170()//Position - 0x9F32
{
	if (iLocal_53 == 1)
	{
		Local_151 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_beachvesp_01");
		iLocal_96 = joaat("a_m_y_beachvesp_02");
		Local_67 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_70 = 247.8087f;
		Local_71 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_74 = 66.3861f;
		Local_75 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_78 = 76.9418f;
		iLocal_97 = joaat("baller2");
		Local_80 = { 160.8892f, -111.4167f, 61.2999f };
		Local_83 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_59 = true;
	}
	if (iLocal_53 == 2)
	{
		Local_151 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_genstreet_01");
		iLocal_96 = joaat("a_f_y_hipster_03");
		Local_67 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_70 = 252.0142f;
		Local_71 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_74 = 86.1102f;
		Local_75 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_78 = 299.4672f;
		iLocal_97 = joaat("emperor");
		Local_80 = { 1120.551f, 2647.307f, 36.9963f };
		Local_83 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_59 = true;
	}
}

int func_171()//Position - 0xA08A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
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

















int func_188(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xBD3A
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
	Local_43 = { Param0 };
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
		if (GlobalFunc_4709())
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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










































void func_230()//Position - 0xD35C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_171)
	{
		GlobalFunc_9158(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		GlobalFunc_5105();
		AUDIO::_0xB542DE8C3D1CB210(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), 1, 1);
		GlobalFunc_563(0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 0) && GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), iLocal_94, 1) > 50f)
			{
				GlobalFunc_9554(iLocal_94, 0, 145);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_90[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_90[0], 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[0], 0))
				{
					PED::RESET_PED_LAST_VEHICLE(uLocal_90[0]);
				}
				if (PED::IS_PED_IN_GROUP(uLocal_90[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_90[0]);
				}
			}
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_90[iLocal_62]))
			{
				if (!PED::IS_PED_INJURED(uLocal_90[iLocal_62]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_90[iLocal_62], 317, 1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_90[iLocal_62], 0))
					{
						PED::RESET_PED_LAST_VEHICLE(uLocal_90[iLocal_62]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_90[iLocal_62], 1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_99, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_90[iLocal_62], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_90[iLocal_62]));
			}
			iLocal_62++;
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_154[iLocal_62]))
			{
				HUD::REMOVE_BLIP(&(uLocal_154[iLocal_62]));
			}
			iLocal_62++;
		}
		if (iLocal_53 == 1)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_126))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_126))
			{
				CAM::SET_CAM_ACTIVE(uLocal_126, 0);
			}
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


































Vector3 func_264()//Position - 0xED46
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_338, 1);
		iLocal_337 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_341, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_341, 1);
			iLocal_337 = 2;
		}
		if (iLocal_337 == 1)
		{
			iLocal_344 = 1;
			iLocal_53 = 1;
			return Local_338;
		}
		if (iLocal_337 == 2)
		{
			iLocal_344 = 2;
			iLocal_53 = 2;
			return Local_341;
		}
	}
	return 0f, 0f, 0f;
}

