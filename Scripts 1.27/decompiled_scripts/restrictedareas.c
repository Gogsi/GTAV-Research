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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_46[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<6> Local_71 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_77[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_86 = 16;
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
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_70 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_587();
	GlobalFunc_173(&uLocal_86, 8, 0, "TANNOY", 0, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_35)
			{
				case 0:
					if (GlobalFunc_142())
					{
						iLocal_35 = 2;
					}
					else
					{
						if (iLocal_57)
						{
							iLocal_67 = 0;
							iLocal_68 = 0;
							iLocal_67 = 0;
							while (iLocal_67 < 8)
							{
								if (iLocal_58[iLocal_67])
								{
									if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), iLocal_67 + 1, 0, 0))
									{
										PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
										iLocal_68++;
									}
									else
									{
										iLocal_58[iLocal_67] = 0;
									}
								}
								iLocal_67++;
							}
							if (iLocal_68 == 0)
							{
								iLocal_57 = 0;
							}
						}
						if (SYSTEM::TIMERA() > 125)
						{
							iLocal_36 = iLocal_69 + 1;
							if (GlobalFunc_5360(iLocal_36, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (!iLocal_37[iLocal_69])
								{
									iLocal_37[iLocal_69] = 1;
								}
								if (GlobalFunc_4547(iLocal_36))
								{
									if (!iLocal_46[iLocal_69])
									{
										iLocal_46[iLocal_69] = 1;
									}
									Local_71 = { func_27(iLocal_36) };
									if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Local_71)) == 0)
									{
										if (!Global_24657[iLocal_36])
										{
											GlobalFunc_2434(iLocal_36, Global_24657[iLocal_36]);
										}
									}
								}
								else if (!Global_24657[iLocal_36])
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										bLocal_55 = false;
										switch (iLocal_36)
										{
											case 1:
												if (func_24() || func_23())
												{
													bLocal_55 = true;
												}
												break;
											
											case 2:
												if (func_21())
												{
													bLocal_55 = true;
												}
												break;
											
											case 7:
												if (func_19())
												{
													bLocal_55 = true;
												}
												break;
										}
										if (!bLocal_55)
										{
											if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), iLocal_36, 0, 0))
											{
												if ((MISC::GET_GAME_TIMER() - iLocal_77[iLocal_69]) > 8000)
												{
													func_18();
												}
												else if (MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) - Vector(200f, 200f, 200f), 1))
												{
													func_18();
												}
												else if (iLocal_36 != 4)
												{
													if (!iLocal_56)
													{
														if (GlobalFunc_10643(&uLocal_86, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
														{
															iLocal_56 = 1;
														}
													}
												}
											}
											else
											{
												iLocal_77[iLocal_69] = MISC::GET_GAME_TIMER();
											}
										}
									}
									else
									{
										bLocal_55 = false;
										switch (iLocal_36)
										{
											case 1:
												if (func_24() || func_23())
												{
													bLocal_55 = true;
												}
												break;
											
											case 2:
												if (func_21())
												{
													bLocal_55 = true;
												}
												break;
											
											case 7:
												if (func_19())
												{
													bLocal_55 = true;
												}
												break;
										}
										if (!bLocal_55)
										{
											if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), iLocal_36, 0, 0))
											{
												if (!iLocal_36 == 4 || (MISC::GET_GAME_TIMER() - iLocal_77[iLocal_69]) > 8000)
												{
													func_18();
												}
											}
											else
											{
												iLocal_77[iLocal_69] = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else
								{
									bLocal_55 = false;
									switch (iLocal_36)
									{
										case 1:
											if (func_24() || func_23())
											{
												bLocal_55 = true;
											}
											break;
										
										case 2:
											if (func_21())
											{
												bLocal_55 = true;
											}
											break;
										
										case 7:
											if (func_19())
											{
												bLocal_55 = true;
											}
											break;
									}
									if (!bLocal_55)
									{
										if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), iLocal_36, 0, 0))
										{
											func_18();
										}
									}
								}
							}
							else if (iLocal_37[iLocal_69])
							{
								if (GlobalFunc_4547(iLocal_36))
								{
									Local_71 = { func_27(iLocal_36) };
									if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Local_71)) == 0)
									{
										GlobalFunc_2434(iLocal_36, 0);
										iLocal_37[iLocal_69] = 0;
									}
								}
								else if (Global_24657[iLocal_36])
								{
									Global_24657[iLocal_36] = 0;
									iLocal_37[iLocal_69] = 0;
									iLocal_46[iLocal_69] = 0;
									iLocal_56 = 0;
								}
							}
							iLocal_69++;
							if (iLocal_69 == 8)
							{
								iLocal_69 = 0;
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					if (!GlobalFunc_142())
					{
						iLocal_35 = 0;
					}
					break;
				}
		}
	}
}


















void func_18()//Position - 0xC4B
{
	switch (iLocal_69)
	{
		case 0:
			iLocal_70 = 2;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) - Vector(200f, 200f, 200f), 1))
			{
				iLocal_70 = 5;
			}
			else
			{
				iLocal_70 = 3;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(200f, 200f, 200f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) - Vector(200f, 200f, 200f), 1))
			{
				iLocal_70 = 5;
			}
			else
			{
				iLocal_70 = 4;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 3:
			iLocal_70 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 4:
			iLocal_70 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 5:
			iLocal_70 = 4;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 6:
			iLocal_70 = 2;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
		
		case 7:
			iLocal_70 = 3;
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
			{
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iLocal_70)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_70, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	iLocal_58[iLocal_69] = 1;
	iLocal_57 = 1;
}

int func_19()//Position - 0xDE7
{
	switch (GlobalFunc_8354())
	{
		case 0:
			if (GlobalFunc_485(65))
			{
				return 1;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) > 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_485(66))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_485(65))
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_21()//Position - 0xE79
{
	switch (GlobalFunc_8354())
	{
		case 0:
			if (GlobalFunc_78(12, 5))
			{
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_78(13, 5))
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_23()//Position - 0xEDC
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar0)) || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("caddy")) || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("caddy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_24()//Position - 0xF41
{
	if (GlobalFunc_466(8) == GlobalFunc_8354())
	{
		return 1;
	}
	return 0;
}



struct<6> func_27(int iParam0)//Position - 0xFA5
{
	return Global_24602[iParam0 /*6*/];
}










