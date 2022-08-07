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
	int iLocal_17 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60[2] = { 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80[2];
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97[2] = { 0f, 0f };
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_109 = 0;
	var uLocal_110[2] = { 0, 0 };
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	struct<6> Local_149 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_155 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	bool bLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 16;
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
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
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
	iLocal_17 = 3;
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
	Local_106 = { 154.92f, 6841.12f, 19.14f };
	iLocal_124 = 200;
	Local_138 = { -1161.199f, 934.5912f, 196.7591f };
	Local_141 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_149, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_52))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_52);
			}
		}
		func_205();
	}
	if (func_163(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_130)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_205();
				}
			}
			RECORDING::_0x208784099002BC30("RE_BU", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_146())
					{
						func_205();
					}
					if (!iLocal_65)
					{
						func_145();
					}
					else
					{
						func_144();
					}
					if (bLocal_51)
					{
						iLocal_161 = 1;
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_143();
						switch (iLocal_48)
						{
							case 0:
								func_133();
								iLocal_48 = 1;
								break;
							
							case 1:
								if ((!func_126(iLocal_53[0], &iLocal_127, &uLocal_126, uLocal_125, iLocal_128, 7f, 0) && !func_126(iLocal_53[1], &iLocal_127, &uLocal_126, uLocal_125, iLocal_128, 7f, 0)) && !func_125())
								{
									switch (iLocal_49)
									{
										case 0:
											func_124();
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_77, 50f, 35f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_77, 80f, 65f, 50f, 0, 1, 0))
											{
												func_122();
											}
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_121();
													if (HUD::DOES_BLIP_EXIST(uLocal_113))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(uLocal_113, 0);
													}
													iLocal_63 = 0;
													while (iLocal_63 <= 1)
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_110[iLocal_63]))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(uLocal_110[iLocal_63], 0);
														}
														iLocal_63++;
													}
													if (!GlobalFunc_6827())
													{
														GlobalFunc_9559(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_121();
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if ((func_126(iLocal_53[0], &iLocal_127, &uLocal_126, uLocal_125, iLocal_128, 7f, 0) || func_126(iLocal_53[1], &iLocal_127, &uLocal_126, uLocal_125, iLocal_128, 7f, 0)) || iLocal_128)
								{
									iLocal_128 = 1;
									if (!GlobalFunc_6827())
									{
										GlobalFunc_9559(1);
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_113))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_110[iLocal_63]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(uLocal_110[iLocal_63], 1);
										}
										iLocal_63++;
									}
									switch (iLocal_127)
									{
										case 0:
											func_111();
											break;
										
										case 1:
											func_111();
											break;
										
										case 2:
											func_111();
											break;
										
										case 3:
											func_111();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_111();
											break;
										}
								}
								if (func_125())
								{
									iLocal_74 = 1;
									if (HUD::DOES_BLIP_EXIST(uLocal_113))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_110[iLocal_63]))
										{
											HUD::SHOW_HEIGHT_ON_BLIP(uLocal_110[iLocal_63], 1);
										}
										iLocal_63++;
									}
									if (!func_110())
									{
										switch (iLocal_50)
										{
											case 1:
												func_107();
												break;
											
											case 3:
												func_106();
												break;
											
											case 4:
												func_105();
												break;
											
											case 5:
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_53[0]))
												{
													GlobalFunc_5122(iLocal_53[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_53[1]))
												{
													GlobalFunc_5122(iLocal_53[1], "GENERIC_WAR_CRY", 24);
												}
												func_111();
												break;
											
											case 6:
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												if (!PED::IS_PED_INJURED(iLocal_53[0]))
												{
													GlobalFunc_5122(iLocal_53[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!PED::IS_PED_INJURED(iLocal_53[1]))
												{
													GlobalFunc_5122(iLocal_53[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_111();
												break;
										}
									}
									else
									{
										GlobalFunc_4956();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_53)
										{
											if (!PED::IS_PED_INJURED(iLocal_53[iVar0]))
											{
												AUDIO::PLAY_PAIN(iLocal_53[iVar0], 5, 0, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_53[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_53[iVar0], 1);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
													{
														ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
													}
												}
												if (HUD::DOES_BLIP_EXIST(uLocal_110[iVar0]))
												{
													HUD::REMOVE_BLIP(&(uLocal_110[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_48 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_129)
								{
									func_100();
								}
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_106, 100f, 100f, 100f, 1, 1, 0))
								{
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_53[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_53[1]));
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_138, 200f, 200f, 200f, 1, 1, 0))
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_m_highsec_01"));
										STREAMING::REQUEST_MODEL(joaat("granger"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")) && STREAMING::HAS_MODEL_LOADED(joaat("granger")))
										{
											iLocal_58 = VEHICLE::CREATE_VEHICLE(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1);
											ENTITY::SET_ENTITY_LOD_DIST(iLocal_58, 200);
											VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_58, 1.5f);
											iLocal_56 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_58, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 4, 0, 0, 0);
											WEAPON::GIVE_WEAPON_TO_PED(iLocal_56, joaat("weapon_pistol"), -1, 1, 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, iLocal_176);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_52))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 1)
										{
											if (!iLocal_131)
											{
												func_81(0);
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_131 = 1;
											}
										}
									}
									else
									{
										iLocal_131 = 0;
									}
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_138, Global_21, 1, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_52))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_136))
											{
												HUD::REMOVE_BLIP(&uLocal_136);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_137))
											{
												HUD::REMOVE_BLIP(&uLocal_137);
											}
											if (func_69())
											{
												iLocal_48 = 5;
											}
											else
											{
												iLocal_48 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(Local_138))
										{
											func_81(0);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (GlobalFunc_9562())
										{
											func_81(0);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (GlobalFunc_552(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_123)
								{
									iLocal_48 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (GlobalFunc_552(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_123)
								{
									iLocal_48 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
									{
										if (!PED::IS_PED_INJURED(iLocal_53[0]))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53[0], "random@burial", "a_burial_stop", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
												}
											}
											else
											{
												ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
											}
										}
									}
								}
								if (PED::IS_PED_INJURED(iLocal_53[0]) || PED::IS_PED_INJURED(iLocal_53[1]))
								{
									bLocal_146 = true;
								}
								if (bLocal_146)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
									{
										if (!PED::IS_PED_INJURED(iLocal_53[0]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_53[0]);
											if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_53[0], iLocal_57, -1, 0, 0) || VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_53[0], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													TASK::CLEAR_PED_TASKS(iLocal_53[0]);
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
														{
															ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
														}
													}
													TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_57, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_57, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_53[0], uLocal_64);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
													PED::SET_PED_KEEP_TASK(iLocal_53[0], 1);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53[0], 242628503) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_53[0]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53[0], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_53[0], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_53[0]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_53[0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_53[0], 1);
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_53[1]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_53[1]);
											if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_53[1], iLocal_57, -1, 0, 0) || VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_53[1], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													TASK::CLEAR_PED_TASKS(iLocal_53[1]);
													TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_57, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
													TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_57, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
													PED::SET_PED_KEEP_TASK(iLocal_53[1], 1);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53[1], 242628503) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_53[1]) == 3)
													{
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_53[1], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_53[1]));
														}
													}
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_53[1], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_53[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((GlobalFunc_831() && !GlobalFunc_832()) && iLocal_48 != 9)
						{
							if (!PED::IS_PED_INJURED(iLocal_52))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52, Local_141, 5f, 5f, 5f, 0, 1, 0))
								{
									GlobalFunc_619(0);
									SYSTEM::WAIT(0);
									GlobalFunc_4956();
									iLocal_48 = 9;
								}
							}
						}
						if (GlobalFunc_6568())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
							{
								PED::DELETE_PED(&iLocal_52);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_48 != 3)
						{
							if (func_1())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("RE6_BOTH_DEAD");
								if (!iLocal_73)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_105 = MISC::GET_GAME_TIMER() + 8500;
									iLocal_73 = 1;
								}
								if (!PED::IS_PED_INJURED(iLocal_52))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 20f, 20f, 20f, 0, 1, 1))
									{
										if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_48 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_48 == 1 || iLocal_48 == 2) || iLocal_48 == 3) || iLocal_48 == 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_52))
							{
								if (!bLocal_129)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1785177548) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1785177548) != 0)
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_52);
										uLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(Local_77, -2f, -4f, 18f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, uLocal_342, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_342, 1);
										PED::SET_PED_KEEP_TASK(iLocal_52, 1);
									}
									if (FIRE::IS_ENTITY_ON_FIRE(iLocal_52))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_52, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
									}
								}
								if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_52) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_52)) || (iLocal_124 - ENTITY::GET_ENTITY_HEALTH(iLocal_52)) >= 50)
								{
									PED::SET_ENABLE_HANDCUFFS(iLocal_52, 1);
									PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 1);
									ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
								}
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 5f)
									{
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_52))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_52, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_57, iLocal_52))
									{
										PED::SET_ENABLE_HANDCUFFS(iLocal_52, 1);
										PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 1);
										ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_205();
		}
	}
}

int func_1()//Position - 0xE8A
{
	if (!bLocal_129)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_53[0]) && PED::IS_PED_INJURED(iLocal_53[1]))
			{
				return 1;
			}
			if (PED::IS_PED_HURT(iLocal_53[0]) && PED::IS_PED_HURT(iLocal_53[1]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_53[0]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_53[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()//Position - 0xF65
{
	if (PED::IS_PED_INJURED(iLocal_53[0]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_110[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
				{
					ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
				}
			}
			GlobalFunc_200(&uLocal_177, 4);
			HUD::REMOVE_BLIP(&(uLocal_110[0]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53[1]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_110[1]))
		{
			GlobalFunc_200(&uLocal_177, 3);
			HUD::REMOVE_BLIP(&(uLocal_110[1]));
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
		{
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_113))
		{
			GlobalFunc_200(&uLocal_177, 5);
			HUD::REMOVE_BLIP(&uLocal_113);
		}
	}
}


void func_4()//Position - 0x101D
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
	func_205();
}

int func_5()//Position - 0x1031
{
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		return 1;
	}
	return 0;
}






void func_11()//Position - 0x10A1
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53[0]) || !PED::IS_PED_INJURED(iLocal_53[1]))
		{
			if (!GlobalFunc_111())
			{
				switch (iLocal_167)
				{
					case 0:
						if (iLocal_105 < MISC::GET_GAME_TIMER())
						{
							if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 1:
						if (iLocal_105 < MISC::GET_GAME_TIMER())
						{
							if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 2:
						if (iLocal_105 < MISC::GET_GAME_TIMER())
						{
							if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 3:
						if (iLocal_105 < MISC::GET_GAME_TIMER())
						{
							if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								iLocal_167 = 0;
							}
						}
						break;
					}
				}
			}
	}
}


void func_13()//Position - 0x11EE
{
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_6568())
	{
		if (GlobalFunc_8329() == 0)
		{
			GlobalFunc_6831(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (GlobalFunc_8329() == 1)
		{
			GlobalFunc_6831(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (GlobalFunc_8329() == 2)
		{
			GlobalFunc_6831(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	func_17(-1, 0);
	GlobalFunc_7068();
	func_205();
}




void func_17(int iParam0, int iParam1)//Position - 0x1329
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
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





























void func_46()//Position - 0x2B29
{
	switch (iLocal_135)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_52) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_58, 0))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_52))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_52);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_58, -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_52, uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_135++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_58, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_52, iLocal_58, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_57, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_56, 1);
					}
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_58, 1);
					iLocal_135++;
				}
			}
			break;
		
		case 2:
			iLocal_135++;
			break;
		
		case 3:
			iLocal_135++;
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				iLocal_135++;
			}
			break;
		
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_47()//Position - 0x2C70
{
	switch (iLocal_135)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_176, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_176);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, 0);
				if (!PED::IS_PED_INJURED(iLocal_52) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_58, 0))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_52))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_52);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_58, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52, uLocal_64);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
					PED::SET_PED_KEEP_TASK(iLocal_52, 1);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_135++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) > 0.1f)
						{
							if (GlobalFunc_8329() == 0)
							{
								GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (GlobalFunc_8329() == 1)
							{
								GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (GlobalFunc_8329() == 2)
							{
								GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_135++;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_58, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_52, iLocal_58, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_56, iLocal_58, 10f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_56, 1);
					}
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_58, 1);
					iLocal_135++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				bLocal_123 = true;
			}
			break;
	}
}



int func_50(struct<3> Param0)//Position - 0x2FB7
{
	if (GlobalFunc_8329() == 2)
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

void func_51()//Position - 0x3044
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if ((((((GlobalFunc_6569("REBU2_LV2_2") || GlobalFunc_6569("REBU2_LV2_3")) || GlobalFunc_6569("REBU2_LV2_4")) || GlobalFunc_6569("REBU2_LV2_5")) || GlobalFunc_6569("REBU2_LV2_6")) || GlobalFunc_6569("REBU2_LV2_7")) || GlobalFunc_6569("REBU2_LV2_8"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_52, 1, 1);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_52);
		}
		if (GlobalFunc_6569("REBU2_LV2_9") || iLocal_71 > 1)
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_52, 0, 1);
		}
	}
	if (func_69() && !GlobalFunc_111())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_71)
		{
			case 0:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 1:
				iLocal_72 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_71++;
				break;
			
			case 2:
				if (iLocal_72 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 3:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 4:
				iLocal_72 = MISC::GET_GAME_TIMER() + 500;
				iLocal_71++;
				break;
			
			case 5:
				if (iLocal_72 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 6:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 7:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 8:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 9:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 10:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 11:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 12:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 13:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 14:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 15:
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 16:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 17:
				iLocal_72 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_71++;
				break;
			
			case 18:
				if (iLocal_72 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 19:
				iLocal_72 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_71++;
				break;
			
			case 20:
				if (iLocal_72 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_71++;
				}
				break;
			}
	}
}

int func_52()//Position - 0x35CA
{
	if (((((((((GlobalFunc_5672("REBU2_WV") || GlobalFunc_5672("REBU2_UNS1")) || GlobalFunc_5672("REBU2_UNS2")) || GlobalFunc_5672("REBU2_CULT")) || GlobalFunc_5672("REBU2_NEAR")) || GlobalFunc_5672("REBU2_WRONG")) || GlobalFunc_5672("REBU2_STOP")) || GlobalFunc_5672("REBU2_GETOUT")) || GlobalFunc_5672("REBU2_JACK")) || GlobalFunc_5672("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}





void func_57()//Position - 0x3717
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!iLocal_132)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_52, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (!GlobalFunc_5672("REBU2_LV2"))
					{
						func_81(0);
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_132 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_52, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_132 = 0;
			}
		}
		if (!iLocal_133)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_133 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_133 = 0;
		}
		if (!iLocal_134)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_81(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_134 = 0;
		}
	}
}

void func_58()//Position - 0x3848
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_61())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_52))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_52);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_52, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_52, 0, 4194304);
				}
				if (!iLocal_131)
				{
					func_81(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					iLocal_131 = 1;
					if (!GlobalFunc_4716())
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_131 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 1227113341) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_52);
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_52) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_52, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, 242628503) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_52, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_52, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_52, 0);
		}
	}
}



int func_61()//Position - 0x3A37
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
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
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()//Position - 0x3B59
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_52))
		{
			if (!iLocal_169)
			{
				iLocal_170 = MISC::GET_GAME_TIMER();
				iLocal_169 = 1;
			}
			else
			{
				iLocal_171 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_169 = 0;
		}
	}
	if ((iLocal_171 - iLocal_170) > 180000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_52))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_52);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_52, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()//Position - 0x3C1E
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_172)
		{
			iLocal_173 = MISC::GET_GAME_TIMER();
			iLocal_172 = 1;
		}
		else
		{
			iLocal_174 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_172 = 0;
	}
	if ((iLocal_174 - iLocal_173) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_52))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_52);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_52, Local_138, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_52, 0, 4194304);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()//Position - 0x3CDE
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_52, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_113))
				{
					uLocal_113 = GlobalFunc_7491(iLocal_52, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_136))
				{
					HUD::REMOVE_BLIP(&uLocal_136);
				}
			}
			else
			{
				if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_113))
					{
						HUD::REMOVE_BLIP(&uLocal_113);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_136))
				{
					uLocal_136 = GlobalFunc_5104(Local_138, 1);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_113))
		{
			uLocal_113 = GlobalFunc_7491(iLocal_52, 0, 145);
		}
		if (!PED::IS_PED_IN_GROUP(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 8f, 8f, 8f, 0, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_52);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_52, GlobalFunc_468());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_52, 1);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_52, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::CLEAR_PED_TASKS(iLocal_52);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_52, GlobalFunc_468());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_52, 1);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_52, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}





int func_69()//Position - 0x3F8B
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_168 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}












void func_81(bool bParam0)//Position - 0x464D
{
	if (bParam0)
	{
		if (iLocal_148)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_155))
			{
				if (GlobalFunc_10699(&uLocal_177, "REBU2AU", &Local_155, &Local_149, 8, 0, 0))
				{
					iLocal_148 = 0;
				}
			}
			else
			{
				iLocal_148 = 0;
			}
		}
	}
	else if ((!iLocal_148 && GlobalFunc_111()) && !func_52())
	{
		Local_155 = { GlobalFunc_560() };
		Local_149 = { GlobalFunc_2209() };
		GlobalFunc_5105();
		iLocal_148 = 1;
	}
}




void func_85()//Position - 0x4741
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			PED::SET_PED_RESET_FLAG(iLocal_52, 394, 1);
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_52, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_52, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_176, 1862763509);
				TASK::TASK_COMBAT_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_56, 1);
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_50 = 4;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_52, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_176, 1862763509);
					TASK::TASK_COMBAT_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_56, 1);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_50 = 4;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_52, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_52, 1);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_50 = 4;
		}
	}
}

void func_86()//Position - 0x48BA
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 1.2f, 1.2f, 5f, 0, 1, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_552(1, 0, 1))
			{
				bLocal_129 = true;
				if (!iLocal_114)
				{
					GlobalFunc_8316(1, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 24);
					HUD::CLEAR_HELP(1);
					HUD::DISPLAY_HUD(0);
					HUD::DISPLAY_RADAR(0);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_52, 5f, 5f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_87, 5f, 5f, 5f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_52, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(iLocal_57))
						{
							GlobalFunc_2882(iLocal_57);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_57, 200f);
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, iLocal_52, 8f, 8f, 8f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_57, Local_87, 0, 0, 0, 1);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57);
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						iLocal_168 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_52, 1), 5f, 0, 2);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_168))
						{
							if (FIRE::IS_ENTITY_ON_FIRE(iLocal_168))
							{
								GlobalFunc_2882(iLocal_168);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_168, 200f);
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_168, ENTITY::GET_ENTITY_COORDS(iLocal_52, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					FIRE::STOP_FIRE_IN_RANGE(Local_77, 10f);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_77, 10f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_77, 4.5f, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_52, Local_77, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_77, 1, 0, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_53)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_52, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								PED::DELETE_PED(&(iLocal_53[iVar0]));
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						uLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_76 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_76, uLocal_342, "untie_cam", "random@burial");
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 18.2311f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_52, 200);
						PED::SET_ENABLE_HANDCUFFS(iLocal_52, 0);
						PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_52);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, uLocal_342, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52, 0, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_342, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[0], uLocal_342, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[1], uLocal_342, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						CAM::SET_CAM_ACTIVE(uLocal_76, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						iLocal_119 = MISC::GET_GAME_TIMER();
						iLocal_114 = 1;
					}
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_116)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_342))
		{
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_342) > 0.115f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_342) < 0.12f) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_342) > 0.355f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_342) < 0.36f))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_342) > 0.6f)
			{
				if (!iLocal_115)
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_115 = 1;
					}
				}
			}
		}
		iLocal_118 = MISC::GET_GAME_TIMER();
		if (((iLocal_118 - iLocal_119) > 9700 && !iLocal_122) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_122 = 1;
		}
		if ((iLocal_118 - iLocal_119) > 10000)
		{
			iLocal_116 = 1;
		}
		if (GlobalFunc_4926(1000))
		{
			GlobalFunc_4956();
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_116 = 1;
			bLocal_117 = true;
		}
	}
	if (iLocal_116 && !bLocal_121)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_342, 1f);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256.7693f);
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_52);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_52, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_52, 73.449f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(26.1578f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.1198f, 1065353216);
		CAM::SET_CAM_ACTIVE(uLocal_76, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_76, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		if (bLocal_117)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_121 = true;
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (bLocal_121)
		{
			if (!iLocal_120)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_176, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_176);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, 0, 1, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) > 0)
						{
							TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
						}
						else if (!PED::IS_PED_IN_GROUP(iLocal_52))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_52, GlobalFunc_468());
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_52, 1);
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_52, 0);
						}
					}
					else if (!PED::IS_PED_IN_GROUP(iLocal_52))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_52, GlobalFunc_468());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_52, 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_52, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_52, uLocal_64);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
					if (HUD::DOES_BLIP_EXIST(uLocal_113))
					{
						HUD::REMOVE_BLIP(&uLocal_113);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_136))
					{
						uLocal_136 = GlobalFunc_5104(Local_138, 1);
					}
					if (GlobalFunc_8329() == 2 && !GlobalFunc_832())
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_137))
						{
							uLocal_137 = GlobalFunc_5104(Local_141, 0);
							HUD::SET_BLIP_SPRITE(uLocal_137, 269);
							GlobalFunc_9564();
						}
					}
					GlobalFunc_9563();
					iLocal_130 = 1;
					iLocal_120 = 1;
					SYSTEM::SETTIMERA(0);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					GlobalFunc_8316(0, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 4);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					iLocal_48 = 4;
				}
			}
		}
	}
}














void func_100()//Position - 0x53E3
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500));
						iLocal_167 = 0;
					}
				}
				break;
			}
	}
}





void func_105()//Position - 0x5726
{
	if (!iLocal_66 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_106, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_53[1]))
		{
			if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_66 = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_53[0]))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_53[0], iLocal_57, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, 1);
			PED::SET_PED_KEEP_TASK(iLocal_53[0], 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_53[1]))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_53[1], iLocal_57, -1, 0, 3f, 1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_53[1], 1);
		}
	}
	else
	{
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_53[iLocal_63]))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_53[iLocal_63], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_53[iLocal_63], 1);
			}
			iLocal_63++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_106()//Position - 0x5831
{
	if (!PED::IS_PED_INJURED(iLocal_53[0]) && !PED::IS_PED_INJURED(iLocal_53[1]))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_53[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_53[1]))
		{
			if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_SHOOTING(iLocal_53[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53[1]);
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_53[1], PLAYER::PLAYER_PED_ID(), -1, -957453492);
				}
			}
		}
	}
	iLocal_48 = 7;
}

void func_107()//Position - 0x58B1
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_53[0]) && !PED::IS_PED_INJURED(iLocal_53[1]))
	{
		if (!iLocal_68)
		{
			if (!iLocal_67)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				iLocal_67 = 1;
			}
			if (PED::IS_PED_FACING_PED(iLocal_53[1], PLAYER::PLAYER_PED_ID(), 90f))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_53[0]) && !PED::IS_PED_INJURED(iLocal_53[1]))
				{
					fVar0 = GlobalFunc_156(iLocal_53[0], PLAYER::PLAYER_PED_ID(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					ENTITY::DETACH_ENTITY(iLocal_59, 0, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_59, iLocal_53[0], PED::GET_PED_BONE_INDEX(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::CLEAR_PED_TASKS(iLocal_53[0]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53[0], uLocal_64);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_53[1], joaat("weapon_sawnoffshotgun"), 1);
					TASK::CLEAR_PED_TASKS(iLocal_53[1]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fVar0, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
					iLocal_68 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
					}
				}
			}
		}
		if (iLocal_68 && !iLocal_164)
		{
			if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
				iLocal_164 = 1;
			}
		}
		if (iLocal_164 && !iLocal_165)
		{
			if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_53[0], PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				iLocal_165 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (iLocal_165 && !bLocal_166)
		{
			if (SYSTEM::TIMERB() > 15000 && !GlobalFunc_111())
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53[0], PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53[1], PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_166 = true;
				}
			}
		}
		if (((!iLocal_69 && iLocal_164) && !PED::IS_PED_INJURED(iLocal_53[0])) && !PED::IS_PED_INJURED(iLocal_53[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_745())
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_53[1], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_53[1], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53[0], uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_53[0], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_53[0], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				SYSTEM::SETTIMERB(15000);
				iLocal_144 = 0;
				iLocal_165 = 1;
				iLocal_69 = 1;
			}
		}
		if (bLocal_166)
		{
			func_11();
			func_111();
		}
		if (((PED::CAN_PED_SEE_HATED_PED(iLocal_53[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_53[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_53[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_53[1]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_75)
					{
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_75 = 1;
							func_111();
						}
					}
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_75)
					{
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_75 = 1;
							func_111();
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_111();
			}
		}
	}
}



int func_110()//Position - 0x5F1E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if ((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_111()//Position - 0x5FA6
{
	func_11();
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
	if (!iLocal_144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_53[0]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_53[0], 156, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_53[0]);
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
					{
						if (!iLocal_69)
						{
							ENTITY::DETACH_ENTITY(iLocal_59, 0, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_59, iLocal_53[0], PED::GET_PED_BONE_INDEX(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							TASK::CLEAR_PED_TASKS(iLocal_53[0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53[0], uLocal_64);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
							PED::SET_PED_KEEP_TASK(iLocal_53[0], 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_53[0], 0, 0);
							iLocal_144 = 1;
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53[0], uLocal_64);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
						PED::SET_PED_KEEP_TASK(iLocal_53[0], 1);
						iLocal_144 = 1;
					}
				}
			}
			else
			{
				iLocal_144 = 1;
			}
		}
		else
		{
			iLocal_144 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
		{
			if (!PED::IS_PED_INJURED(iLocal_53[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_145)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_53[1]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_53[1], 156, 1);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_53[1]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53[1], uLocal_64);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
				PED::SET_PED_KEEP_TASK(iLocal_53[1], 1);
				iLocal_145 = 1;
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (iLocal_145 && iLocal_144)
	{
		iLocal_105 = MISC::GET_GAME_TIMER() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_48 = 7;
	}
}










void func_121()//Position - 0x6724
{
	if (HUD::DOES_BLIP_EXIST(uLocal_162))
	{
		HUD::REMOVE_BLIP(&uLocal_162);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_113))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
		{
			uLocal_113 = GlobalFunc_7491(iLocal_52, 0, 145);
		}
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_110[iLocal_63]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53[iLocal_63]))
			{
				uLocal_110[iLocal_63] = GlobalFunc_7491(iLocal_53[iLocal_63], 1, 145);
			}
		}
		iLocal_63++;
	}
}

void func_122()//Position - 0x679B
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
						iLocal_167 = 0;
					}
				}
				break;
			}
	}
}

void func_123()//Position - 0x68A5
{
	switch (iLocal_109)
	{
		case 0:
			if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_109++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_177, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 4:
			iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_109++;
			break;
		
		case 5:
			break;
	}
}

void func_124()//Position - 0x6979
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
		{
			if (!PED::IS_PED_INJURED(iLocal_53[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial_stop") > 0.124f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.127f)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53[0], "random@burial", "a_burial", 3))
				{
					if (((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") > 0.04f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.043f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") > 0.24f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.243f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") > 0.44f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.443f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") > 0.64f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.643f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") > 0.84f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53[0], "random@burial", "a_burial") < 0.843f))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_125()//Position - 0x6B4C
{
	if (!iLocal_128)
	{
		if (MISC::IS_BULLET_IN_AREA(Local_87, 100f, 1) || MISC::IS_BULLET_IN_AREA(Local_87, 100f, 1))
		{
			if (PED::IS_PED_INJURED(iLocal_53[0]) || PED::IS_PED_INJURED(iLocal_53[1]))
			{
				iLocal_50 = 1;
				return 1;
			}
			else if (!MISC::IS_BULLET_IN_AREA(Local_87, 100f, 1) || !MISC::IS_BULLET_IN_AREA(Local_87, 100f, 1))
			{
				iLocal_50 = 1;
				return 1;
			}
		}
		if (((((((((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || FIRE::IS_EXPLOSION_IN_AREA(2, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f)))
		{
			iLocal_50 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_57))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, 0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_57);
					func_111();
					iLocal_50 = 3;
					return 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_57))
						{
							func_111();
							iLocal_50 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_74)
		{
			if (!PED::IS_PED_INJURED(iLocal_53[0]) && !PED::IS_PED_INJURED(iLocal_53[1]))
			{
				if ((((PED::CAN_PED_SEE_HATED_PED(iLocal_53[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_53[1], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_53[0])) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_53[1])) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_87 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_50 = 1;
						return 1;
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_53[0]) && !PED::IS_PED_INJURED(iLocal_53[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53[1]))
					{
						iLocal_50 = 5;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_52, joaat("weapon_stungun"), 0))
			{
				iLocal_50 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_50 = 4;
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_53[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_53[1]))
		{
			iLocal_50 = 6;
			return 1;
		}
		if (iLocal_74)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x6FE7
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!MISC::IS_BIT_SET(uParam3, 3))
			{
				if (GlobalFunc_4717(iParam0, iParam6))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_130(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, 1))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								GlobalFunc_6524("	aggro Ped knows player is pointing gun\n");
								GlobalFunc_6570("		lockOnTimer = ", *uParam2);
								GlobalFunc_6524("\n");
								GlobalFunc_6570("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_18));
								GlobalFunc_6524("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_18 + *uParam2))
								{
									GlobalFunc_6524("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_130(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_130(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	return 0;
}




void func_130(int iParam0)//Position - 0x7277
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}



void func_133()//Position - 0x72E0
{
	struct<3> Var0;
	struct<3> Var3;
	
	GlobalFunc_8536(39, 1);
	GlobalFunc_8536(40, 1);
	GlobalFunc_8536(41, 1);
	GlobalFunc_8536(42, 1);
	GlobalFunc_8536(43, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_138 - Vector(20f, 40f, 40f), Local_138 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_77 - Vector(20f, 50f, 60f), Local_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_104, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	iLocal_52 = PED::CREATE_PED(26, iLocal_101, Local_77, fLocal_96, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52, 2, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_52, 128, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 6, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_52, 206, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_52, 318, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_52, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_52, 208, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
	ENTITY::SET_ENTITY_HEALTH(iLocal_52, iLocal_124);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), 0);
	PED::ADD_RELATIONSHIP_GROUP("rghKidnappers", &iLocal_175);
	PED::ADD_RELATIONSHIP_GROUP("rghVictim", &iLocal_176);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, iLocal_176);
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		iLocal_53[iLocal_63] = PED::CREATE_PED(26, iLocal_102, Local_80[iLocal_63 /*3*/], fLocal_97[iLocal_63], 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53[iLocal_63], 1);
		PED::SET_PED_AS_ENEMY(iLocal_53[iLocal_63], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53[iLocal_63], 0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53[iLocal_63], 2, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53[iLocal_63], 128, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_53[iLocal_63], 42, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_53[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53[0], 50, 1);
		PED::SET_PED_SHOOT_RATE(iLocal_53[iLocal_63], 50);
		PED::SET_PED_ACCURACY(iLocal_53[iLocal_63], 13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53[iLocal_63], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53[iLocal_63], iLocal_175);
		PED::SET_PED_MONEY(iLocal_53[iLocal_63], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
		iLocal_63++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
	PED::SET_PED_SHOOT_RATE(iLocal_53[1], 100);
	PED::SET_PED_FIRING_PATTERN(iLocal_53[1], -687903391);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_175, 1862763509);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_53[0], joaat("weapon_pistol"), -1, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_53[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_104, Local_87, fLocal_100, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_57, 3);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_57, 5, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_104);
	iLocal_59 = OBJECT::CREATE_OBJECT(joaat("prop_ld_shovel"), Local_106, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shovel"));
	uLocal_60[0] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), Local_106, 1, 1, 0);
	uLocal_60[1] = OBJECT::CREATE_OBJECT(joaat("p_arm_bind_cut_s"), Local_106 + Vector(1f, 1f, 1f), 1, 1, 0);
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_59, iLocal_53[0], PED::GET_PED_BONE_INDEX(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[0], 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[1], 0, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[1], 3, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53[1], 4, 1, 1, 0);
	Var0 = { Local_77 };
	Var3 = { -2f, -4f, 18f };
	uLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, uLocal_342, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_342, 1);
	PED::SET_PED_KEEP_TASK(iLocal_52, 1);
	TASK::TASK_PLAY_ANIM(iLocal_53[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(iLocal_53[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_53[0], Local_90, Local_93, 2.75f, 0, 0);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_53[1], Local_90, Local_93, 2.75f, 0, 0);
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_173(&uLocal_177, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_173(&uLocal_177, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_173(&uLocal_177, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, "KIDNAPPEDFEMALE");
	GlobalFunc_173(&uLocal_177, 4, iLocal_53[0], "KIDNAPPER2", 0, 1);
	GlobalFunc_173(&uLocal_177, 3, iLocal_53[1], "KIDNAPPER1", 0, 1);
	GlobalFunc_173(&uLocal_177, 5, iLocal_52, "KIDNAPPEDFEMALE", 0, 1);
}










void func_143()//Position - 0x7D1D
{
	var uVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_144()//Position - 0x7D89
{
	STREAMING::REQUEST_MODEL(iLocal_101);
	STREAMING::REQUEST_MODEL(iLocal_103);
	STREAMING::REQUEST_MODEL(iLocal_102);
	STREAMING::REQUEST_MODEL(iLocal_104);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
	STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
	STREAMING::REQUEST_ANIM_DICT("random@burial");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0);
	AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_101) && STREAMING::HAS_MODEL_LOADED(iLocal_103)) && STREAMING::HAS_MODEL_LOADED(iLocal_102)) && STREAMING::HAS_MODEL_LOADED(iLocal_104)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shovel"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_arm_bind_cut_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@burial")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0)) && AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS"))
	{
		bLocal_51 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_101);
		STREAMING::REQUEST_MODEL(iLocal_103);
		STREAMING::REQUEST_MODEL(iLocal_102);
		STREAMING::REQUEST_MODEL(iLocal_104);
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shovel"));
		STREAMING::REQUEST_MODEL(joaat("p_arm_bind_cut_s"));
		STREAMING::REQUEST_ANIM_DICT("random@burial");
		STREAMING::REQUEST_PTFX_ASSET();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", 0);
		AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	}
}

void func_145()//Position - 0x7E9D
{
	iLocal_101 = joaat("u_f_y_mistress");
	iLocal_102 = joaat("a_m_m_salton_01");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("bison");
	Local_77 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_96 = 0f;
	Local_80[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_97[0] = 297.0056f;
	Local_80[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_97[1] = 193.3866f;
	Local_87 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_100 = 265.6862f;
	Local_90 = { 164.0896f, 6836.923f, 19.03899f };
	Local_93 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_65 = 1;
}

int func_146()//Position - 0x7F5A
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
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

















int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x9C0B
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
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
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
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
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
		if (GlobalFunc_10550())
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
		if (!GlobalFunc_8988(4))
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
		if (GlobalFunc_42(GlobalFunc_8329()))
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
								if (GlobalFunc_8329() != iVar4)
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










































void func_205()//Position - 0xB22C
{
	int iVar0;
	
	if (iLocal_161)
	{
		GlobalFunc_9158(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		AUDIO::CANCEL_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
		if (iLocal_144 || iLocal_164)
		{
			if (Global_24682)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
			}
		}
		GlobalFunc_825();
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_176, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_176);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_52, 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_52, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_52);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_52))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_52);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_52))
			{
				PED::SET_ENABLE_HANDCUFFS(iLocal_52, 1);
				PED::SET_ENABLE_BOUND_ANKLES(iLocal_52, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_53)
		{
			if (!PED::IS_PED_INJURED(iLocal_53[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_53[iVar0]);
				if (iLocal_68 || iLocal_75)
				{
					TASK::TASK_COMBAT_PED(iLocal_53[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					GlobalFunc_4956();
				}
				PED::SET_PED_KEEP_TASK(iLocal_53[iVar0], 1);
			}
			iVar0++;
		}
		OBJECT::DELETE_OBJECT(&(uLocal_60[0]));
		OBJECT::DELETE_OBJECT(&(uLocal_60[1]));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_57);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_59))
			{
				ENTITY::DETACH_ENTITY(iLocal_59, 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_59);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_162))
		{
			HUD::REMOVE_BLIP(&uLocal_162);
		}
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_110[iLocal_63]))
			{
				HUD::REMOVE_BLIP(&(uLocal_110[iLocal_63]));
			}
			iLocal_63++;
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_113))
		{
			HUD::REMOVE_BLIP(&uLocal_113);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_76))
		{
			CAM::DESTROY_CAM(uLocal_76, 0);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}














