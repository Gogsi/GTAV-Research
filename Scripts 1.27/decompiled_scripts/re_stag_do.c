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
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[4] = { 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_111 = 0f;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 16;
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
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	char* sLocal_301 = NULL;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
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
	fLocal_42 = 20f;
	iLocal_116 = 1;
	iLocal_307 = 6000;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_56))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
			}
		}
		func_176();
	}
	if (GlobalFunc_433(283, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_146(Local_51, -1, 0, 0, 0))
	{
		if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_115)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10587())
				{
					func_176();
				}
			}
			RECORDING::_0x208784099002BC30("RE_SDRM", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_129())
					{
						func_176();
					}
					if (iLocal_49)
					{
						iLocal_50 = 1;
						iLocal_47 = 1;
					}
					else
					{
						func_120();
					}
					break;
				
				case 1:
					GlobalFunc_502();
					if (!iLocal_113)
					{
						func_118();
						func_115();
						func_104();
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_317))
						{
							func_103();
						}
					}
					else
					{
						func_100();
						if (!bLocal_123)
						{
							func_98();
						}
						func_90();
						func_88();
						func_72();
						GlobalFunc_2232(iLocal_54, 0);
						if (!bLocal_120)
						{
						}
						if (iLocal_48 == 0 && !bLocal_117)
						{
							func_67();
							func_65();
						}
						else
						{
							func_60();
						}
						if (iLocal_48 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_86, 1) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
								}
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if ((((!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_56)) && !PED::IS_PED_INJURED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_57)) && !ENTITY::IS_ENTITY_DEAD(iLocal_131))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", iLocal_54, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", iLocal_56, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", iLocal_55, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", iLocal_57, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
							if (bLocal_117)
							{
								if (GlobalFunc_552(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_56))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, 0))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_321))
									{
										HUD::REMOVE_BLIP(&uLocal_321);
										if (HUD::DOES_BLIP_EXIST(uLocal_319))
										{
											HUD::REMOVE_BLIP(&uLocal_319);
										}
										if (!HUD::DOES_BLIP_EXIST(uLocal_319))
										{
											uLocal_319 = GlobalFunc_5104(Local_66, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_56))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_55))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							func_2();
						}
					}
					GlobalFunc_587();
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}


void func_2()//Position - 0x399
{
	func_176();
}

int func_3()//Position - 0x3A5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(iLocal_54))
		{
			return 1;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::IS_ENTITY_IN_WATER(iLocal_54))
			{
				return 1;
			}
			if (bLocal_115)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_58, 0) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_58)) || ENTITY::IS_ENTITY_IN_WATER(iLocal_58))
		{
			GlobalFunc_4956();
			if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_58))
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		GlobalFunc_4956();
		if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_48 >= 1)
	{
		if (bLocal_122)
		{
			if (PED::IS_PED_INJURED(iLocal_56))
			{
				GlobalFunc_4956();
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_4956();
				return 1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_125)
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_125 = 1;
					}
				}
			}
			else
			{
				iLocal_125 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_48 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_INJURED(iLocal_55) || PED::IS_PED_INJURED(iLocal_57))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0) && iLocal_309)
			{
				if (!iLocal_126)
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}






















void func_25()//Position - 0xF30
{
	switch (iLocal_130)
	{
		case 0:
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_8316(1, 1, 1, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			iLocal_309 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iLocal_130++;
			break;
		
		case 2:
			if ((((!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_56)) && !PED::IS_PED_INJURED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_57)) && !ENTITY::IS_ENTITY_DEAD(iLocal_131))
			{
				if (GlobalFunc_109())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_131, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_54, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_56, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_57, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_131))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_131);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_131, 1);
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				}
				iLocal_130++;
			}
			break;
		
		case 4:
			PED::DELETE_PED(&iLocal_54);
			PED::DELETE_PED(&iLocal_56);
			PED::DELETE_PED(&iLocal_55);
			PED::DELETE_PED(&iLocal_57);
			GlobalFunc_8316(0, 1, 1, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			func_26();
			break;
	}
}

void func_26()//Position - 0x1086
{
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_30(-1, 0);
	GlobalFunc_7068();
	func_176();
}




void func_30(int iParam0, int iParam1)//Position - 0x112F
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_44.x, Local_44.f_1);
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






























void func_60()//Position - 0x2800
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_54))
	{
		if (!iLocal_116)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0) && PED::IS_PED_IN_VEHICLE(iLocal_54, iLocal_58, 0))
			{
				iLocal_116 = 1;
				if (HUD::DOES_BLIP_EXIST(uLocal_318))
				{
					HUD::REMOVE_BLIP(&uLocal_318);
				}
				if (iLocal_121 && !bLocal_117)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_319))
					{
						uLocal_319 = GlobalFunc_5104(Local_66, 1);
					}
				}
				if (!GlobalFunc_111())
				{
				}
			}
		}
		if (!iLocal_116 && !iLocal_118)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_54, iLocal_58, 0))
				{
					if (!GlobalFunc_111())
					{
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_318))
					{
						HUD::REMOVE_BLIP(&uLocal_318);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_318))
					{
						uLocal_318 = GlobalFunc_6797(iLocal_54, 0, 145);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_318, 1);
					}
					iLocal_116 = 0;
					iLocal_118 = 1;
				}
			}
		}
		if (iLocal_116)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
			{
				if (!GlobalFunc_111())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_318))
				{
					uLocal_318 = GlobalFunc_6783(iLocal_58, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_318, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_319))
				{
					HUD::REMOVE_BLIP(&uLocal_319);
				}
				iLocal_116 = 0;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_54, iLocal_58, 0))
			{
				if (!GlobalFunc_111())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_318))
				{
					uLocal_318 = GlobalFunc_6783(iLocal_58, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_318, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_319))
				{
					HUD::REMOVE_BLIP(&uLocal_319);
				}
				iLocal_116 = 0;
			}
		}
	}
}





void func_65()//Position - 0x2AB8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_320))
					{
						HUD::REMOVE_BLIP(&uLocal_320);
						if (!HUD::DOES_BLIP_EXIST(uLocal_319))
						{
							uLocal_319 = GlobalFunc_5104(Local_66, 1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_320))
					{
						HUD::REMOVE_BLIP(&uLocal_320);
						if (!HUD::DOES_BLIP_EXIST(uLocal_319))
						{
							uLocal_319 = GlobalFunc_5104(Local_66, 1);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_319))
				{
					HUD::REMOVE_BLIP(&uLocal_319);
					if (!HUD::DOES_BLIP_EXIST(uLocal_320))
					{
						uLocal_320 = GlobalFunc_6797(iLocal_54, 0, 145);
					}
				}
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_319))
			{
				HUD::REMOVE_BLIP(&uLocal_319);
				if (!HUD::DOES_BLIP_EXIST(uLocal_320))
				{
					uLocal_320 = GlobalFunc_6797(iLocal_54, 0, 145);
				}
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_54))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
				}
			}
		}
	}
}


void func_67()//Position - 0x2C5C
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_70())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_54))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_54, 0, 0);
				}
				if (!iLocal_124)
				{
					if (!GlobalFunc_111())
					{
						iLocal_124 = 1;
						if (GlobalFunc_4716())
						{
							GlobalFunc_10630(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							GlobalFunc_10630(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_124 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1227113341) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1227113341) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					if (!PED::IS_PED_IN_GROUP(iLocal_54))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
					}
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_54) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
		}
	}
}



int func_70()//Position - 0x2EA9
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
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
			if ((((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_72()//Position - 0x3052
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_6569("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_319))
				{
					uLocal_319 = GlobalFunc_5104(Local_66, 1);
				}
				iLocal_121 = 1;
			}
			if (GlobalFunc_6569("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 13.5f, 13.5f, 13.5f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_54, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (iLocal_48 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_129 == 0)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_4935();
									if (GlobalFunc_10618(&uLocal_135, "stagdau", sLocal_301, 4, 0, 0, 0))
									{
										iLocal_309 = 1;
									}
									bLocal_120 = true;
									iLocal_129++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_129 == 1)
							{
								if (!GlobalFunc_111())
								{
									HUD::DISPLAY_HUD(1);
									HUD::DISPLAY_RADAR(1);
									iLocal_129++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_129 == 2)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_4935();
									if (GlobalFunc_8315() == 0)
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (GlobalFunc_8315() == 1)
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (GlobalFunc_8315() == 2)
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_129++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
					if (!bLocal_123)
					{
						if (iLocal_48 == 3)
						{
							if (!GlobalFunc_111())
							{
								if (iLocal_129 == 0)
								{
									GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_129++;
								}
							}
						}
						if (iLocal_48 == 3)
						{
							if (SYSTEM::TIMERB() > 5000)
							{
								if (iLocal_129 == 0)
								{
									if (!GlobalFunc_111())
									{
										iLocal_129++;
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_302 == 0)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 11)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_302 = 1;
									}
								}
							}
							if (iLocal_302 < 2)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 10)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_302 = 2;
									}
								}
							}
							if (iLocal_302 < 3)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 9)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_302 = 3;
									}
								}
							}
							if (iLocal_302 < 4)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 8)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_302 = 4;
									}
								}
							}
							if (iLocal_302 < 5)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 7)
								{
									if (!GlobalFunc_111())
									{
										iLocal_302 = 5;
									}
								}
							}
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 6)
								{
									if (!GlobalFunc_111())
									{
										iLocal_302 = 6;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 5)
								{
									if (!GlobalFunc_111())
									{
										iLocal_302 = 7;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 4)
								{
									if (!GlobalFunc_111())
									{
										iLocal_302 = 8;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 3)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 9;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 2)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 10;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 1)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 6)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 5)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 4)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 3)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 2)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 1)
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
















void func_88()//Position - 0x396B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!iLocal_128 && bLocal_117)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
					iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					if (iVar0 != 0)
					{
						iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
						if (iVar1 != 4)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_54, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || SYSTEM::TIMERA() > 5000)
					{
						iLocal_128 = 1;
						SYSTEM::SETTIMERA(0);
						GlobalFunc_8316(1, 1, 1, 0);
						HUD::CLEAR_HELP(1);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							SYSTEM::WAIT(0);
						}
						uLocal_133 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_134 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						CAM::SHAKE_CAM(uLocal_133, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(uLocal_134, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(uLocal_133, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_134, uLocal_133, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_98, 10f, 0, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_98, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_132 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_132, 1, 0);
								VEHICLE::DELETE_VEHICLE(&iLocal_132);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_58, 1);
							if (!HUD::DOES_BLIP_EXIST(uLocal_318))
							{
								uLocal_318 = GlobalFunc_6783(iLocal_58, 0, 0);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_318, true);
							}
						}
						iLocal_116 = 0;
					}
				}
				if (iLocal_128 && CAM::DOES_CAM_EXIST(uLocal_133))
				{
					if (SYSTEM::TIMERA() > 5700 && !iLocal_316)
					{
						if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_316 = 1;
						}
					}
					if (SYSTEM::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
						GlobalFunc_8316(0, 1, 1, 0);
						CAM::SET_CAM_ACTIVE(uLocal_133, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						CAM::DESTROY_CAM(uLocal_133, 0);
						CAM::STOP_GAMEPLAY_HINT(0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_86, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_122)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_102, 100f, 100f, 100f, 0, 1, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("ig_bestmen"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("ig_bestmen")))
					{
						iLocal_56 = PED::CREATE_PED(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						GlobalFunc_173(&uLocal_135, 4, iLocal_56, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, 1862763509);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_56, 185, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_112);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
						bLocal_122 = true;
					}
				}
			}
			if (!bLocal_123)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_76, 20f, 20f, 20f, 0, 1, 0))
				{
					GlobalFunc_4956();
					if (!GlobalFunc_111())
					{
						GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_123 = true;
					}
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_69, Local_72, fLocal_75, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_54, Local_69, Local_72, fLocal_75, 0, 1, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_66, 0f, 0f, 2f, 1, 1, 0) && GlobalFunc_552(1, 0, 1))) || bLocal_117)
			{
				switch (iLocal_48)
				{
					case 0:
						HUD::REMOVE_BLIP(&uLocal_319);
						if (!bLocal_117)
						{
							Local_66 = { Local_102 };
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, 0);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
							{
								iVar2 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
								if (iVar2 != 0)
								{
									iVar3 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar2);
									if (iVar3 == 4)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 5000, 2052, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_58, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							GlobalFunc_4956();
							if (!GlobalFunc_111())
							{
								GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!PED::IS_PED_INJURED(iLocal_54))
								{
									TASK::CLEAR_PED_TASKS(iLocal_54);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_98, 3f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
									PED::SET_PED_KEEP_TASK(iLocal_54, 1);
								}
								bLocal_117 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_58))
						{
							if ((bLocal_117 && ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_98, 1f, 1f, 1f, 0, 1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
							{
								if (PED::IS_PED_IN_GROUP(iLocal_54))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_8315() == 2)
										{
											GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									PED::REMOVE_PED_FROM_GROUP(iLocal_54);
								}
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_54))
								{
									if (!PED::IS_PED_INJURED(iLocal_54))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_54, 0);
										ENTITY::SET_ENTITY_COLLISION(iLocal_54, 0, 0);
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, 1);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 1);
									}
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(iLocal_54))
										{
											PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 11, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(iLocal_54, 1);
											ENTITY::SET_ENTITY_COLLISION(iLocal_54, 1, 0);
											ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, 0);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 0);
											ENTITY::SET_ENTITY_COORDS(iLocal_54, Local_98, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(iLocal_54, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 17, 1);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_54, 1);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, -1, 2048, 4);
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
												TASK::TASK_ENTER_VEHICLE(0, iLocal_58, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
											}
										}
										SYSTEM::SETTIMERA(0);
										Local_66 = { Local_102 };
										Local_69 = { Local_105 };
										Local_72 = { Local_108 };
										fLocal_75 = fLocal_111;
										iLocal_48 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_58))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, iLocal_58, 5f, 5f, 5f, 0, 1, 0) && !iLocal_127)
							{
								GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_127 = 1;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
								{
									if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_48 = 2;
										bLocal_117 = false;
										iLocal_129 = 0;
									}
								}
								else
								{
									if (iLocal_307 == 0)
									{
										iLocal_307 = MISC::GET_GAME_TIMER();
									}
									if (iLocal_307 != 0 && MISC::GET_GAME_TIMER() > iLocal_307 + 6000)
									{
										GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_307 = 0;
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_117)
						{
							GlobalFunc_4956();
							if (GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
									{
										iLocal_131 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_56) && !PED::IS_PED_INJURED(iLocal_54))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
									{
										iLocal_131 = PED::GET_VEHICLE_PED_IS_IN(iLocal_54, 0);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_131, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_112);
										PED::SET_PED_CONFIG_FLAG(iLocal_56, 185, 0);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_56, iLocal_54, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!HUD::DOES_BLIP_EXIST(uLocal_321))
									{
										uLocal_321 = GlobalFunc_6797(iLocal_56, 0, 145);
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_319))
									{
										HUD::REMOVE_BLIP(&uLocal_319);
									}
								}
								SYSTEM::SETTIMERA(0);
								iLocal_119 = 1;
								bLocal_117 = true;
							}
						}
						if (bLocal_117 && !PED::IS_PED_INJURED(iLocal_54))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7 || SYSTEM::TIMERA() > 12000)
							{
								Local_66 = { Local_76 };
								Local_69 = { Local_79 };
								Local_72 = { Local_82 };
								fLocal_75 = fLocal_85;
								STREAMING::REQUEST_MODEL(joaat("ig_bride"));
								STREAMING::REQUEST_MODEL(joaat("washington"));
								STREAMING::REQUEST_MODEL(joaat("baller2"));
								STREAMING::REQUEST_MODEL(joaat("primo"));
								if (((STREAMING::HAS_MODEL_LOADED(joaat("ig_bride")) && STREAMING::HAS_MODEL_LOADED(joaat("washington"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2"))) && STREAMING::HAS_MODEL_LOADED(joaat("primo")))
								{
									iLocal_55 = PED::CREATE_PED(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 1);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_112);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
									iLocal_57 = PED::CREATE_PED(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 0, 1, 0, 0);
									uLocal_59[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_59[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_59[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_59[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_59[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_59[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_59[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_59[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_48 = 3;
									bLocal_117 = false;
									iLocal_129 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_117)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
									bLocal_117 = true;
									SYSTEM::WAIT(3000);
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_54))
		{
			func_176();
		}
	}
}


void func_90()//Position - 0x461E
{
	if ((iLocal_309 && iLocal_306 != GlobalFunc_208(GlobalFunc_7719())) && !CAM::DOES_CAM_EXIST(uLocal_133))
	{
		GlobalFunc_5277(((iLocal_306 * 1000 * 60 - GlobalFunc_208(GlobalFunc_7719()) * 1000 * 60) + (iLocal_305 * 1000 - GlobalFunc_207(GlobalFunc_7719()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iLocal_305 == 0)
	{
		if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()) + 1 && ((((iLocal_305 == (GlobalFunc_207(GlobalFunc_7719()) - 55) || iLocal_305 == (GlobalFunc_207(GlobalFunc_7719()) - 56)) || iLocal_305 == (GlobalFunc_207(GlobalFunc_7719()) - 57)) || iLocal_305 == (GlobalFunc_207(GlobalFunc_7719()) - 58)) || iLocal_305 == (GlobalFunc_207(GlobalFunc_7719()) - 59)))
		{
			func_93();
		}
	}
	if (iLocal_306 == GlobalFunc_208(GlobalFunc_7719()))
	{
		func_93();
		GlobalFunc_5105();
		if (!GlobalFunc_111())
		{
			GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				TASK::TASK_USE_MOBILE_PHONE(iLocal_54, 1, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			SYSTEM::WAIT(8500);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, 0);
				}
			}
			SYSTEM::WAIT(2000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
			{
				TASK::CLEAR_PED_TASKS(iLocal_54);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 5000, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_54, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_56))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_56, 500, 0);
			}
			SYSTEM::WAIT(1000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_58))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_58)
				{
					TASK::TASK_ENTER_VEHICLE(0, iLocal_58, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_58, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
				PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_56))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_58)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_58, -1, 0, 2f, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_112);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
					PED::SET_PED_KEEP_TASK(iLocal_56, 1);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			while (GlobalFunc_111())
			{
				SYSTEM::WAIT(0);
			}
			func_2();
		}
	}
}



void func_93()//Position - 0x497B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_SECONDS();
	if (iLocal_308 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_306)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
}





void func_98()//Position - 0x4DAF
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_54, iLocal_58, 0) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_58))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_745())
					{
						GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_54, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}


void func_100()//Position - 0x4E89
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_54, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_56, 0);
	}
	if (((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0) || iLocal_48 == 1) || iLocal_125) || iLocal_126) || iLocal_124) || bLocal_117)
	{
		if ((((((iLocal_48 >= 2 && iLocal_119) && iLocal_48 != 1) && !iLocal_125) && !iLocal_126) && !iLocal_124) && !bLocal_117)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
			else if (GlobalFunc_111() && !GlobalFunc_620())
			{
				GlobalFunc_619(1);
			}
		}
		else if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
	}
	else if (GlobalFunc_111() && !GlobalFunc_620())
	{
		GlobalFunc_619(1);
	}
}



void func_103()//Position - 0x4FAB
{
	if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			TASK::CLEAR_PED_TASKS(iLocal_54);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
			{
				ENTITY::DETACH_ENTITY(iLocal_65, 1, 1);
			}
		}
		while (GlobalFunc_111())
		{
			SYSTEM::WAIT(0);
		}
		func_2();
	}
}

void func_104()//Position - 0x5029
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_54))
	{
		if (!iLocal_114)
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 130f, 60f, 50f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_54)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_320))
				{
					uLocal_320 = GlobalFunc_6797(iLocal_54, 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_320, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_320))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_320, 1);
					}
					SYSTEM::SETTIMERB(0);
					GlobalFunc_5105();
					while (GlobalFunc_111())
					{
						SYSTEM::WAIT(0);
					}
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 0)
						{
							GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 1)
						{
							GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (GlobalFunc_8315() == 2)
						{
							GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_114 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_54))
			{
				if ((!GlobalFunc_6827() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && HUD::DOES_BLIP_EXIST(uLocal_320))
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						iLocal_64 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					GlobalFunc_9034(1);
				}
			}
		}
		else if (!iLocal_300)
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_300 = 1;
				}
			}
		}
	}
}











void func_115()//Position - 0x57AE
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
				ENTITY::SET_ENTITY_HEALTH(iLocal_54, 99);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 1);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_54))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
						ENTITY::SET_ENTITY_HEALTH(iLocal_54, 99);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_552(1, 0, 1))
					{
						if (!iLocal_310)
						{
							GlobalFunc_9034(1);
							GlobalFunc_8316(1, 1, 1, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
							HUD::CLEAR_HELP(1);
							HUD::DISPLAY_HUD(0);
							HUD::DISPLAY_RADAR(0);
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 5f, 1, 0, 0, 0);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f);
							}
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_54, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								uLocal_317 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_133 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_317, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_133, uLocal_317, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_54, uLocal_317, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_54, 0, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_317, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								CAM::SET_CAM_ACTIVE(uLocal_133, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								iLocal_310 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_310 && !iLocal_312)
	{
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (GlobalFunc_8315() == 1)
		{
			GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (GlobalFunc_8315() == 2)
		{
			GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_312 = 1;
	}
	if (iLocal_310 && !iLocal_311)
	{
		if (!iLocal_315)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_317) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_317) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_315 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_317) > 0.4647059f && !iLocal_316)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_316 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_317) > 0.5f)
		{
			iLocal_311 = 1;
		}
		if (GlobalFunc_4926(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_311 = 1;
			iLocal_314 = 1;
		}
	}
	if (iLocal_311 && !iLocal_313)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
		{
			ENTITY::DETACH_ENTITY(iLocal_65, 1, 1);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		CAM::SET_CAM_ACTIVE(uLocal_133, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_133, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
		GlobalFunc_8316(0, 1, 1, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
			PED::SET_PED_CAN_RAGDOLL(iLocal_54, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_54, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_54, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_54, 0, 0);
		}
		if (iLocal_314)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_314 = 0;
		}
		iLocal_316 = 0;
		iLocal_313 = 1;
	}
	if (iLocal_313 && !PED::IS_PED_INJURED(iLocal_54))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if ((((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, 0, 1, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2048, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_54))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_54))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		uLocal_319 = GlobalFunc_5104(Local_66, 1);
		iLocal_113 = 1;
		bLocal_115 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_304 = GlobalFunc_208(GlobalFunc_7719());
		iLocal_306 = iLocal_304 + 5;
		iLocal_303 = GlobalFunc_207(GlobalFunc_7719());
		if (iLocal_303 >= 30)
		{
			iLocal_305 = 0;
			iLocal_306++;
		}
		if (iLocal_306 > 24)
		{
			iLocal_306 = (iLocal_306 - 24);
		}
		if (iLocal_306 == 0)
		{
			sLocal_301 = "stagd_ptime0";
		}
		else if (iLocal_306 == 1)
		{
			sLocal_301 = "stagd_ptime1";
		}
		else if (iLocal_306 == 2)
		{
			sLocal_301 = "stagd_ptime2";
		}
		else if (iLocal_306 == 3)
		{
			sLocal_301 = "stagd_ptime3";
		}
		else if (iLocal_306 == 4)
		{
			sLocal_301 = "stagd_ptime4";
		}
		else if (iLocal_306 == 5)
		{
			sLocal_301 = "stagd_ptime5";
		}
		else if (iLocal_306 == 6)
		{
			sLocal_301 = "stagd_ptime6";
		}
		else if (iLocal_306 == 7)
		{
			sLocal_301 = "stagd_ptime7";
		}
		else if (iLocal_306 == 8)
		{
			sLocal_301 = "stagd_ptime8";
		}
		else if (iLocal_306 == 9)
		{
			sLocal_301 = "stagd_ptime9";
		}
		else if (iLocal_306 == 10)
		{
			sLocal_301 = "stagd_ptim10";
		}
		else if (iLocal_306 == 11)
		{
			sLocal_301 = "stagd_ptim11";
		}
		else if (iLocal_306 == 12)
		{
			sLocal_301 = "stagd_ptim12";
		}
		else if (iLocal_306 == 13)
		{
			sLocal_301 = "stagd_ptim13";
		}
		else if (iLocal_306 == 14)
		{
			sLocal_301 = "stagd_ptim14";
		}
		else if (iLocal_306 == 15)
		{
			sLocal_301 = "stagd_ptim15";
		}
		else if (iLocal_306 == 16)
		{
			sLocal_301 = "stagd_ptim16";
		}
		else if (iLocal_306 == 17)
		{
			sLocal_301 = "stagd_ptim17";
		}
		else if (iLocal_306 == 18)
		{
			sLocal_301 = "stagd_ptim18";
		}
		else if (iLocal_306 == 19)
		{
			sLocal_301 = "stagd_ptim19";
		}
		else if (iLocal_306 == 20)
		{
			sLocal_301 = "stagd_ptim20";
		}
		else if (iLocal_306 == 21)
		{
			sLocal_301 = "stagd_ptim21";
		}
		else if (iLocal_306 == 22)
		{
			sLocal_301 = "stagd_ptim22";
		}
		else if (iLocal_306 == 23)
		{
			sLocal_301 = "stagd_ptim23";
		}
	}
}



void func_118()//Position - 0x5FE9
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0);
			}
		}
		iLocal_132 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 30f, 0, 4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_132))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_132, -1))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_132, iLocal_54, 30f, 30f, 30f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_132, 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_132, 0))
					{
						VEHICLE::START_VEHICLE_HORN(iLocal_132, 3000, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (!GlobalFunc_111() && !iLocal_114)
							{
								GlobalFunc_10618(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_132);
				}
			}
		}
	}
}


void func_120()//Position - 0x612B
{
	GlobalFunc_8536(39, 1);
	GlobalFunc_8536(40, 1);
	GlobalFunc_8536(41, 1);
	GlobalFunc_8536(42, 1);
	GlobalFunc_8536(43, 1);
	STREAMING::REQUEST_MODEL(joaat("u_m_y_staggrm_01"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("prop_stag_do_rope"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("u_m_y_staggrm_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("superd"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_stag_do_rope")))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_54 = PED::CREATE_PED(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, 1862763509);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 1);
	PED::SET_PED_MONEY(iLocal_54, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 11, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(iLocal_54, -1143637011);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_54, 3);
	PED::SET_PED_CONFIG_FLAG(iLocal_54, 206, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_54, 134, 1);
	iLocal_65 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_65, iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_58 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_58, 1);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_58, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_58, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_58, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(iLocal_58, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(iLocal_58, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(iLocal_58, 11, 1, 0);
	VEHICLE::SET_VEHICLE_MOD(iLocal_58, 12, 1, 0);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_58, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_58, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_58);
	Local_76 = { -352.88f, 6164.31f, 30.5f };
	Local_79 = { -355.2565f, 6164.931f, 30.2944f };
	Local_82 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_85 = 25.375f;
	Local_86 = { -343.5804f, 6156.198f, 30.489f };
	Local_89 = { -1991.126f, 457.991f, 101.1808f };
	Local_92 = { -2002.69f, 460.539f, 99.828f };
	Local_95 = { -1997.605f, 445.6651f, 105.0519f };
	Local_98 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_101 = 24.6875f;
	Local_102 = { -2205.351f, 4298.79f, 47.265f };
	Local_105 = { -2207.525f, 4301.697f, 47.1803f };
	Local_108 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_111 = 12.5625f;
	Local_66 = { Local_89 };
	Local_69 = { Local_92 };
	Local_72 = { Local_95 };
	fLocal_75 = fLocal_101;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_86 - Vector(20f, 20f, 20f), Local_86 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_54, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 10f, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
		PED::SET_PED_KEEP_TASK(iLocal_54, 1);
	}
	if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_173(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_173(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_173(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	GlobalFunc_173(&uLocal_135, 3, iLocal_54, "GROOM", 0, 1);
	iLocal_49 = 1;
}









int func_129()//Position - 0x6ACE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
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

















int func_146(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x87C2
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
	Local_44 = { Param0 };
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
		if (GlobalFunc_2(0))
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
			if ((Var1.f_2 - Local_44.f_2) > 50f)
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






























void func_176()//Position - 0x9AF8
{
	if (iLocal_50)
	{
		GlobalFunc_9158(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 1, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		GlobalFunc_4956();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_64))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_64, 50f, 50f, 50f, 0, 1, 0))
			{
				GlobalFunc_9554(iLocal_64, 0, 145);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, iLocal_56, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_112);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_112);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, iLocal_54, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_112);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_112);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_112);
			}
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_132);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_58);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_54, 317, 1);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, 0);
			}
			PED::REMOVE_PED_FROM_GROUP(iLocal_54);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
		{
			ENTITY::DETACH_ENTITY(iLocal_65, 1, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54);
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_56, 317, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_55);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

































