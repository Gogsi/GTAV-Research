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
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 6;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
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
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	struct<3> Local_98 = { 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 16;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
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
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var12;
	
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	iLocal_39 = 3;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_50 = 1;
	iLocal_51 = 65;
	iLocal_52 = 49;
	iLocal_53 = 64;
	uLocal_76 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_77 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_82 = { 500f, 500f, 500f };
	iLocal_107 = -1;
	fLocal_110 = 0f;
	iLocal_116 = 1;
	bVar0 = false;
	iVar1 = 0;
	GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 4);
	GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 256);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_83();
	}
	GlobalFunc_501(16);
	while (true)
	{
		bVar0 = !GlobalFunc_892(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (GlobalFunc_6687(9))
			{
				GlobalFunc_235(&uLocal_117);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_77();
						if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 64))
						{
							GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 64);
						}
						GlobalFunc_8002(&uLocal_123);
						iVar1 = 1;
						GlobalFunc_6715(&uLocal_117);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (GlobalFunc_758(1))
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				if (!GlobalFunc_756() && !Global_87295)
				{
					if (iVar1 != 2)
					{
						if ((!MISC::IS_MINIGAME_IN_PROGRESS() && !bVar0) && !GlobalFunc_39(5))
						{
							func_65();
							if (func_64())
							{
								if (!iLocal_112)
								{
									if (func_62() == 2)
									{
										if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 1))
										{
											switch (GlobalFunc_5585("TC_H_TOODAMAGED"))
											{
												case 2:
													GlobalFunc_6677("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 1);
													break;
												}
										}
									}
									else
									{
										GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 1);
									}
									iLocal_112 = 1;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
								{
									iLocal_105 = 0;
								}
								else if (bLocal_113)
								{
									if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 16384))
									{
										switch (GlobalFunc_5585("TC_ANOTHERJOB"))
										{
											case 2:
												GlobalFunc_6677("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 16384);
												break;
											}
									}
								}
								else if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 16))
								{
									if (!iLocal_115)
									{
										switch (GlobalFunc_5585("TC_HOWTOSTART"))
										{
											case 2:
												GlobalFunc_6677("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_109 = MISC::GET_GAME_TIMER();
												iLocal_115 = 1;
												if (GlobalFunc_74("TC_HOWTOSTART"))
												{
													Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[15]++;
												}
												if (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[15] >= 5)
												{
													GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 16);
												}
												break;
											}
										}
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_104))
								{
									HUD::REMOVE_BLIP(&uLocal_104);
								}
								switch (iLocal_105)
								{
									case 0:
										if (func_62() == 0)
										{
											if (!GlobalFunc_226(&uLocal_117))
											{
												GlobalFunc_7731(&uLocal_117);
											}
											if (GlobalFunc_226(&uLocal_120))
											{
												GlobalFunc_235(&uLocal_120);
											}
											if (GlobalFunc_4981(&uLocal_117) > 20f)
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_2655())
												{
													iLocal_106 = 9;
													StringCopy(&Local_98, "Taxi_Procedural", 24);
													GlobalFunc_173(&uLocal_123, 8, 0, "TaxiDispatch", 0, 1);
													GlobalFunc_10618(&uLocal_123, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													GlobalFunc_6715(&uLocal_117);
													iLocal_105 = 1;
												}
												else if (!GlobalFunc_2655())
												{
													if ((MISC::GET_GAME_TIMER() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!GlobalFunc_226(&uLocal_117))
										{
											GlobalFunc_7731(&uLocal_117);
										}
										if (GlobalFunc_4981(&uLocal_117) >= 6f)
										{
											switch (GlobalFunc_5585("TC_JOBOFFERED"))
											{
												case 2:
													GlobalFunc_6677("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_111 = 1;
													GlobalFunc_6715(&uLocal_117);
													iLocal_105 = 2;
													break;
											}
											if ((MISC::GET_GAME_TIMER() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!GlobalFunc_226(&uLocal_117))
										{
											GlobalFunc_7731(&uLocal_117);
										}
										if (GlobalFunc_4981(&uLocal_117) > 15f)
										{
											if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 32))
											{
												GlobalFunc_159("TC_MISSEDJOB", -1);
												GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 32);
											}
											fLocal_110 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 40f) + GlobalFunc_4981(&uLocal_117));
											iLocal_105 = 3;
										}
										else if (iLocal_111)
										{
											if (GlobalFunc_4981(&uLocal_117) > 6f)
											{
												iLocal_111 = 0;
												HUD::CLEAR_HELP(1);
											}
										}
										break;
									
									case 3:
										if (!GlobalFunc_226(&uLocal_117))
										{
											GlobalFunc_7731(&uLocal_117);
										}
										if (GlobalFunc_4981(&uLocal_117) > fLocal_110)
										{
											GlobalFunc_235(&uLocal_117);
											iLocal_105 = 0;
										}
										break;
								}
								if (((PAD::IS_CONTROL_PRESSED(0, 86) && !ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID())) && !Global_24595) && (MISC::GET_GAME_TIMER() - iLocal_108) > 3000)
								{
									iVar4 = func_62();
									if (iVar4 == 0)
									{
										if (iLocal_105 == 0 || iLocal_105 == 3)
										{
											GlobalFunc_8002(&uLocal_123);
											iLocal_106 = 9;
											func_33(iLocal_106, &Local_98, &uLocal_123, 0);
											iLocal_114 = 1;
											iVar1 = 4;
										}
										else
										{
											HUD::CLEAR_PRINTS();
											HUD::CLEAR_HELP(1);
											if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 128))
											{
												GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 128);
											}
											iVar1 = 4;
										}
										SCRIPT::REQUEST_SCRIPT(&Local_98);
										GlobalFunc_235(&uLocal_117);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_159("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!GlobalFunc_74("TXC_WANTED_WARN"))
											{
												if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 32768))
												{
													GlobalFunc_159("TXC_WANTED_WARN", -1);
													GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!GlobalFunc_226(&uLocal_120))
								{
									GlobalFunc_7731(&uLocal_120);
								}
								else
								{
									if (GlobalFunc_4981(&uLocal_120) < 10f)
									{
										if ((MISC::GET_GAME_TIMER() % 1000) < 50)
										{
										}
									}
									if (GlobalFunc_4981(&uLocal_120) > 10f && iLocal_105 != 0)
									{
										iLocal_105 = 0;
									}
								}
								if (GlobalFunc_2017("TC_HOWTOSTART"))
								{
									GlobalFunc_5696("TC_HOWTOSTART", 1);
								}
								if (GlobalFunc_2017("TC_JOBOFFERED"))
								{
									GlobalFunc_5696("TC_JOBOFFERED", 1);
								}
								if (GlobalFunc_2017("TC_H_TOODAMAGED"))
								{
									GlobalFunc_5696("TC_H_TOODAMAGED", 1);
								}
								if (GlobalFunc_2017("TC_ANOTHERJOB"))
								{
									GlobalFunc_5696("TC_ANOTHERJOB", 1);
								}
								if (((MISC::GET_GAME_TIMER() - iLocal_109) > 60000 && !GlobalFunc_74("TC_HOWTOSTART")) && iLocal_115)
								{
									iLocal_115 = 0;
								}
								if (bLocal_113)
								{
									bLocal_113 = false;
								}
								iLocal_112 = 0;
								GlobalFunc_235(&uLocal_117);
							}
						}
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				{
					iLocal_105 = 0;
				}
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::SET_HORN_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED(&Local_98))
				{
					iVar5 = GlobalFunc_7905(&iLocal_107, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_96408 = 1;
						if (iLocal_114)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_105 = 0;
						iVar1 = 11;
					}
					else
					{
						GlobalFunc_2654("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_116, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&Var6, "OJTX_PLRDE1", 24);
				func_22(&Var6, 1);
				GlobalFunc_10618(&uLocal_123, "OJTXAUD", &Var6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!GlobalFunc_111())
				{
					GlobalFunc_10618(&uLocal_123, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					StringCopy(&Var12, "OJTX_ACCEPT", 24);
					func_22(&Var12, 1);
					GlobalFunc_8002(&uLocal_123);
					GlobalFunc_10618(&uLocal_123, "OJTXAUD", &Var12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_64())
				{
					if (!GlobalFunc_111())
					{
						bLocal_113 = false;
						if (GlobalFunc_2017("TC_HOWTOSTART"))
						{
							GlobalFunc_5696("TC_HOWTOSTART", 1);
						}
						iLocal_97 = SYSTEM::START_NEW_SCRIPT(&Local_98, 17000);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_98);
						if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4))
						{
							GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_561(), 1);
						}
						GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 256);
						StringCopy(&Local_98, "", 24);
						iLocal_114 = 0;
						iVar1 = 10;
						iLocal_105 = 0;
					}
				}
				else
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
					}
					bLocal_113 = false;
					iLocal_114 = 0;
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_98);
					GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 256);
					StringCopy(&Local_98, "", 24);
					iLocal_105 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_97))
				{
					GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 2048);
					if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4))
					{
						GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 4);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_561(), 0);
					}
					Global_96408 = 0;
					iLocal_106 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 1024))
				{
					GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 1024);
					GlobalFunc_7610(GlobalFunc_2653(iLocal_106), 0, 0);
					bLocal_113 = true;
					func_9(iLocal_106, bLocal_113);
					GlobalFunc_842(1, 0);
					GlobalFunc_7068();
				}
				break;
			
			case 11:
				if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 256))
				{
					GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 256);
					GlobalFunc_1997(&iLocal_107);
				}
				iLocal_107 = -1;
				if (!GlobalFunc_486())
				{
					GlobalFunc_842(0, 0);
					GlobalFunc_51();
					StringCopy(&Local_98, "", 24);
					if (iLocal_97 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(iLocal_97))
						{
							SCRIPT::TERMINATE_THREAD(iLocal_97);
							iLocal_97 = 0;
						}
					}
					GlobalFunc_235(&uLocal_117);
					GlobalFunc_778(0);
					iLocal_105 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_83();
				break;
			
			default:
				func_83();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}









void func_9(int iParam0, bool bParam1)//Position - 0xB0F
{
	func_10();
	if (bParam1)
	{
		Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[iParam0 /*2*/] = 1;
		Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[iParam0 /*2*/] = 0;
		Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()//Position - 0xB5F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}












void func_22(char* sParam0, bool bParam1)//Position - 0x1522
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}











void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)//Position - 0x1CDD
{
	struct<6> Var0;
	char cVar6[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_48(iParam0), 24);
		cVar6 = { Var0 };
		StringConCat(&cVar6, "_1", 24);
		GlobalFunc_8002(uParam2);
		GlobalFunc_10630(uParam2, "OJTXAUD", &Var0, &cVar6, 8, 0, 0);
	}
}















char* func_48(int iParam0)//Position - 0x2542
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}














int func_62()//Position - 0x2A17
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64())
	{
		return 1;
	}
	else
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar0));
		iVar2 = ENTITY::GET_ENTITY_HEALTH(uVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_63(uVar0))
		{
			return 2;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x2A83
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 0, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 4, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_64()//Position - 0x2B3F
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(uVar0, GlobalFunc_561()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_65()//Position - 0x2B94
{
	if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 8192))
	{
		if (func_64())
		{
			GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 8192);
			func_67();
		}
	}
	else if (!func_64())
	{
		GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 8192);
		func_66();
	}
}

void func_66()//Position - 0x2BE4
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_67()//Position - 0x2C0D
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}










void func_77()//Position - 0x2F45
{
	int iVar0;
	
	if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[0 /*2*/] = 0;
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}






void func_83()//Position - 0x30AB
{
	if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4))
	{
		GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_561(), 0);
	}
	if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 256))
	{
		GlobalFunc_5312(&(Global_SAVE_DATA.TAXI_iGenData), 256);
		GlobalFunc_1997(&iLocal_107);
	}
	if (iLocal_97 != 0)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_97))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_97);
			iLocal_97 = 0;
		}
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_98) != 0)
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_98);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_104))
	{
		HUD::REMOVE_BLIP(&uLocal_104);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



