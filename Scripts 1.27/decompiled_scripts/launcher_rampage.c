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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110[3] = { 0, 0, 0 };
	var uLocal_114 = 16;
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
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	int iLocal_294 = 0;
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
	struct<42> Var0;
	struct<3> Var61;
	
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
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	uLocal_88 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_89 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_101 = { 1180.969f, -402.381f, 67.2f };
	Local_104 = { 5f, 0f, 57.33f };
	iLocal_108 = -1;
	iLocal_281 = 76;
	iLocal_282 = -1;
	iLocal_283 = -1;
	iLocal_284 = 1;
	iLocal_285 = 1;
	iLocal_286 = 1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_87639 = 1;
	GlobalFunc_4517(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143(" Force cleanup [TERMINATING]");
		func_279(&Var0, 1);
	}
	if (!GlobalFunc_485(108))
	{
		func_206(&Var0, Var61);
	}
	else
	{
		func_1(&Var0, Var61);
	}
}

void func_1(var uParam0, struct<3> Param1)//Position - 0x128
{
	while (true)
	{
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("  Ambient - Player isn't within World Point Range");
			func_279(uParam0, 1);
		}
		if (GlobalFunc_8315() != 2)
		{
			GlobalFunc_143("  Ambient - Player is not Trevor");
			func_279(uParam0, 1);
		}
		iLocal_283 = func_204(5f);
		if (iLocal_283 != -1)
		{
			if (!func_200())
			{
				*uParam0 = func_199(iLocal_283);
				StringCopy(&(uParam0->f_1), func_198(iLocal_283), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					GlobalFunc_143("  -  Ambient Rampage Mission ID is invalid");
					func_279(uParam0, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
				{
					GlobalFunc_143("  -  Ambient Rampage Mission ID is invalid");
					func_279(uParam0, 1);
				}
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 0);
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 2);
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 3);
				Global_96440[*uParam0 /*10*/].f_1 = 0;
				if (!GlobalFunc_2(0))
				{
					Global_96440[*uParam0 /*10*/].f_3 = 0;
				}
				if (!GlobalFunc_10546(*uParam0))
				{
					GlobalFunc_143(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_279(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					GlobalFunc_143(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_279(uParam0, 1);
				}
				else
				{
					GlobalFunc_2350(500, 1);
					MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
					GlobalFunc_143(" RC Ambient Launcher Waiting To Terminate");
					Global_96440[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						GlobalFunc_143(" Ambient - Ready To Terminate");
						func_279(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (GlobalFunc_74("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
			iLocal_286 = 0;
		}
		SYSTEM::WAIT(0);
	}
}


int func_3(var uParam0)//Position - 0x2C7
{
	while (!Global_96440[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}


int func_5(var uParam0)//Position - 0x317
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_199())
	{
		while (!GlobalFunc_9038(*uParam0))
		{
			if (GlobalFunc_4507(*uParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_131(uParam0, *uParam0 != 2))
			{
				GlobalFunc_143("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (!GlobalFunc_10547(uParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*uParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*uParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*uParam0);
	if (!GlobalFunc_199())
	{
		if (uParam0->f_16 == 2)
		{
			GlobalFunc_11143(&(uParam0->f_1), 0);
		}
		else
		{
			GlobalFunc_11143(&(uParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*uParam0, Var0);
	return 1;
}






























































































































int func_131(var uParam0, bool bParam1)//Position - 0x908E
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	GlobalFunc_6675(*uParam0, &Var0);
	if ((GlobalFunc_5229(*uParam0) || GlobalFunc_8396(*uParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (GlobalFunc_9037(*uParam0))
	{
		if (*uParam0 == 19)
		{
			GlobalFunc_6482(uParam0->f_28[0]);
		}
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_142(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_142(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!GlobalFunc_7524(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				GlobalFunc_7523(uParam0);
			}
			else
			{
				GlobalFunc_7522(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!GlobalFunc_7524(uParam0, 0, 1))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!GlobalFunc_7524(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!GlobalFunc_7524(uParam0, 1, 0))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!GlobalFunc_7524(uParam0, 0, 0))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (GlobalFunc_115(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_26, GlobalFunc_8315()))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (GlobalFunc_2358(&(uParam0->f_48)) && bParam1)
	{
		GlobalFunc_6481(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}











int func_142(var uParam0, bool bParam1, int iParam2)//Position - 0x9C79
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							GlobalFunc_7522(uParam0);
						}
						else
						{
							GlobalFunc_7523(uParam0);
						}
						GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (GlobalFunc_4514(*uParam0))
					{
						if (!GlobalFunc_4507(*uParam0))
						{
							if (GlobalFunc_8640(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									GlobalFunc_7522(uParam0);
								}
								else
								{
									GlobalFunc_7523(uParam0);
								}
								GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_144(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!GlobalFunc_4513(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (GlobalFunc_115(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}


int func_144(int iParam0, float fParam1)//Position - 0x9F69
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
				if (func_145(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_145(int iParam0, float fParam1)//Position - 0x9FDF
{
	return func_146(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_146(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9FF7
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_154(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_149();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_149()//Position - 0xA2A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_154(int iParam0, int iParam1)//Position - 0xA3FF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}












































char* func_198(int iParam0)//Position - 0xB690
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_199(int iParam0)//Position - 0xB6E4
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_200()//Position - 0xB72B
{
	bool bVar0;
	
	bVar0 = false;
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		return bVar0;
	}
	if (Global_96440[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_285)
		{
			HUD::CLEAR_HELP(1);
			GlobalFunc_159("RAMP_HELP_CRIM", -1);
			iLocal_285 = 0;
		}
		bVar0 = true;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_284)
		{
			HUD::CLEAR_HELP(1);
			GlobalFunc_159("RAMP_HELP_FOOT", -1);
			iLocal_284 = 0;
		}
		bVar0 = true;
	}
	else if (GlobalFunc_485(108))
	{
		if (!iLocal_286)
		{
			if (!GlobalFunc_74("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_1("RAMP_HELP_TRIG");
			}
			iLocal_286 = 1;
		}
		bVar0 = !PAD::IS_CONTROL_PRESSED(2, 51);
	}
	return bVar0;
}




int func_204(float fParam0)//Position - 0xB830
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_Mission_Blips[(iLocal_281 + iVar0) /*23*/][0 /*3*/] };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 1) <= fParam0 && MISC::ABSF((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_206(var uParam0, struct<3> Param1)//Position - 0xB8C5
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_275(&iVar1, uParam0, Param1, 5f))
	{
		GlobalFunc_143(" Didn't know which RC To Launch");
		func_279(uParam0, 1);
	}
	if (!GlobalFunc_10546(*uParam0))
	{
		GlobalFunc_143(" RC Can't Launch");
		func_279(uParam0, 1);
	}
	if (GlobalFunc_9528(*uParam0))
	{
		while (true)
		{
			SYSTEM::WAIT(0);
			if (func_273(*uParam0))
			{
				func_279(uParam0, 1);
			}
		}
	}
	func_249(uParam0);
	MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((GlobalFunc_115(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (GlobalFunc_115(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1);
					if (GlobalFunc_115(uParam0->f_28[1]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1);
					}
					GlobalFunc_143("Sitting Rampage attacked with explosives, cleaning up");
					func_279(uParam0, 1);
				}
			}
			if (GlobalFunc_115(uParam0->f_28[1]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((GlobalFunc_115(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (GlobalFunc_115(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1);
					if (GlobalFunc_115(uParam0->f_28[0]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1);
					}
					GlobalFunc_143("Sitting Rampage attacked with explosives, cleaning up");
					func_279(uParam0, 1);
				}
			}
		}
		if (func_248(uParam0))
		{
			func_247(uParam0);
			GlobalFunc_143(" RC combat happening in area, tell peds to flee");
			GlobalFunc_7522(uParam0);
			func_279(uParam0, 1);
		}
		if (!func_131(uParam0, 1))
		{
			GlobalFunc_143(" RC Is Not Fine And In Range");
			func_279(uParam0, 1);
		}
		if (GlobalFunc_4524(52))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1"))
			{
				GlobalFunc_143(" Turning Off Scenario Group For Rampage 1");
				TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", 0);
			}
		}
		GlobalFunc_9527(*uParam0);
		GlobalFunc_8257(&iLocal_282, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_282 != -1)
		{
			GlobalFunc_6493(uParam0, &uLocal_287);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_143(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_291 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if ((!(*uParam0 == 52 && Local_291.f_2 > 34f) && !(*uParam0 == 53 && Local_291.f_2 > 71f)) && !(*uParam0 == 54 && Local_291.f_2 > 30f))
		{
			if (GlobalFunc_10897(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_220(uParam0))
					{
						GlobalFunc_143(" Trigger Conditions Met");
						GlobalFunc_8535();
						if (!func_5(uParam0))
						{
							GlobalFunc_143(" RC Can't Launch");
							func_279(uParam0, 1);
						}
						GlobalFunc_143(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							GlobalFunc_143(" Ready To Terminate");
							func_279(uParam0, 0);
						}
					}
				}
				else if (func_219(uParam0))
				{
					GlobalFunc_143(" Trigger Conditions Met");
					GlobalFunc_8535();
					if (!func_5(uParam0))
					{
						GlobalFunc_143(" RC Can't Launch");
						func_279(uParam0, 1);
					}
					GlobalFunc_143(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						GlobalFunc_143(" Ready To Terminate");
						func_279(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_207(uParam0);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_108 = -1;
					CAM::STOP_GAMEPLAY_HINT(0);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
}

void func_207(var uParam0)//Position - 0xBD94
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_109)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				iLocal_109++;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (GlobalFunc_156(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0]))
				{
					GlobalFunc_173(&uLocal_114, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_109++;
				}
			}
			break;
		
		case 2:
			uLocal_110[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				GlobalFunc_10630(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_110[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_110[0], 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_110[0], 1);
			iLocal_109++;
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_110[0]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_110[0]) >= 0.95f)
				{
					iLocal_109++;
				}
			}
			break;
		
		case 4:
			uLocal_110[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				GlobalFunc_10630(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_110[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_110[1], 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_110[1], 1);
			iLocal_109++;
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_110[1]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_110[1]) >= 0.95f)
				{
					iLocal_109++;
				}
			}
			break;
		
		case 6:
			uLocal_110[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_110[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_110[2], 1);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_110[2], 0);
			iLocal_109++;
			break;
		
		case 7:
			break;
	}
}












int func_219(var uParam0)//Position - 0xC6FA
{
	GlobalFunc_8535();
	if (iLocal_108 < 0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.1f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 54:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-10f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 55:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-8f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 56:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.15f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
		}
		iLocal_108 = MISC::GET_GAME_TIMER() + 2500;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_108)
	{
		iLocal_108 = -1;
		return 1;
	}
	return 0;
}

int func_220(var uParam0)//Position - 0xC8EF
{
	GlobalFunc_8535();
	switch (iLocal_279)
	{
		case 0:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				GlobalFunc_4956();
				iLocal_279++;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10630(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_280 = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_280, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.1f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						iLocal_279++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (!GlobalFunc_111())
				{
					iLocal_279++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}



























void func_247(var uParam0)//Position - 0xE127
{
	if (*uParam0 == 52)
	{
		GlobalFunc_143(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_248(var uParam0)//Position - 0xE199
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0)//Position - 0xE1D3
{
	switch (*uParam0)
	{
		case 52:
			func_272(uParam0);
			iLocal_294 = func_271();
			break;
		
		case 53:
			func_265(uParam0);
			iLocal_294 = func_263();
			break;
		
		case 54:
			func_262(uParam0);
			break;
		
		case 55:
			func_261(uParam0);
			iLocal_294 = func_260();
			break;
		
		case 56:
			func_250(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_294 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_250(var uParam0)//Position - 0xE274
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_258(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 8);
	while (!func_258(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 2);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 3);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 4);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 5);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 6);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 7);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 8);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_256(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
	func_255(&(uParam0->f_35[0]));
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 0);
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 1);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_35[0], 1);
	if (!func_251(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, GlobalFunc_569(-0.5f)))
	{
	}
	else
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], GlobalFunc_569(-0.5f));
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_251(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0xE6F8
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
		*uParam0 = 0;
	}
	iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(iVar0);
	iVar1 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar1)
	{
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(iParam1, -1, Param2, 1, 1065353216, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			if (func_253(iParam1))
			{
				if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, func_252(iParam1)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, func_252(iParam1));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
				return 1;
			}
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 0;
}

int func_252(int iParam0)//Position - 0xE7B3
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return joaat("component_assaultrifle_varmod_luxe");
		
		case joaat("weapon_advancedrifle"):
			return joaat("component_advancedrifle_varmod_luxe");
		
		case joaat("weapon_carbinerifle"):
			return joaat("component_carbinerifle_varmod_luxe");
		
		case joaat("weapon_appistol"):
			return joaat("component_appistol_varmod_luxe");
		
		case joaat("weapon_pistol"):
			return joaat("component_pistol_varmod_luxe");
		
		case joaat("weapon_pistol50"):
			return joaat("component_pistol50_varmod_luxe");
		
		case joaat("weapon_heavypistol"):
			return joaat("component_heavypistol_varmod_luxe");
		
		case joaat("weapon_smg"):
			return joaat("component_smg_varmod_luxe");
		
		case joaat("weapon_microsmg"):
			return joaat("component_microsmg_varmod_luxe");
		
		case joaat("weapon_sawnoffshotgun"):
			return joaat("component_sawnoffshotgun_varmod_luxe");
		
		case joaat("weapon_sniperrifle"):
			return joaat("component_sniperrifle_varmod_luxe");
		
		case joaat("weapon_marksmanrifle"):
			return joaat("component_marksmanrifle_varmod_luxe");
		
		default:
	}
	return 0;
}

int func_253(int iParam0)//Position - 0xE86B
{
	if (((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 1;
	}
	return 0;
}


int func_255(var uParam0)//Position - 0xE92D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	return 1;
}

int func_256(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0xE94D
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::DELETE_VEHICLE(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(var uParam0)//Position - 0xE98A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	return 1;
}

int func_258(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0xE9C5
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::DELETE_PED(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_259(*uParam0, Param2);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	return 1;
}

Vector3 func_259(var uParam0, struct<3> Param1)//Position - 0xEA43
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0))
	{
		Param1.f_2 = uVar0;
	}
	if (GlobalFunc_234(uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_260()//Position - 0xEA87
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_261(var uParam0)//Position - 0xEAB5
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_258(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, GlobalFunc_569(1.03f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RP0_NOGUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_258(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, GlobalFunc_569(0.2f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[1]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RP1_GUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

void func_262(var uParam0)//Position - 0xED8C
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_microsmg"), 31, 10);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_microsmg"))) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_258(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[0]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_258(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_251(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, GlobalFunc_569(-0.85f)))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("component_at_scope_macro"));
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_263()//Position - 0xF08C
{
	return GlobalFunc_2662(1182.137f, -400.4787f, 66.92414f, 8f);
}


void func_265(var uParam0)//Position - 0xF0DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, 0f };
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sawnoffshotgun"), 31, 0);
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	GlobalFunc_5115(&uLocal_107);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !GlobalFunc_557(&uLocal_107))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_OBJECTS(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
	}
	while (!func_258(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_257(&(uParam0->f_28[0]));
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	func_267(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	GlobalFunc_556(&uLocal_107, 0, 3);
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
		if (GlobalFunc_115(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
	}
	if (!func_251(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, GlobalFunc_569(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}


void func_267(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0xF428
{
	GlobalFunc_130(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
}




int func_271()//Position - 0xF485
{
	return GlobalFunc_2662(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_272(var uParam0)//Position - 0xF4A5
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, -0.1f };
	iVar11 = joaat("ig_ramp_hic");
	iVar12 = joaat("prop_table_03b_chr");
	iVar13 = joaat("prop_beer_bottle");
	STREAMING::REQUEST_MODEL(iVar11);
	STREAMING::REQUEST_MODEL(iVar12);
	STREAMING::REQUEST_MODEL(iVar13);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar11) || !STREAMING::HAS_MODEL_LOADED(iVar12)) || !STREAMING::HAS_MODEL_LOADED(iVar13)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_258(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(uParam0->f_28[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
		func_267(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[1], 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
	}
	while (!func_258(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(uParam0->f_28[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
		func_267(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[2], 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[1], 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 208, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], 1862763509);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, GlobalFunc_569(-0.26f), 2);
		if (GlobalFunc_115(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (GlobalFunc_115(uParam0->f_28[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
	}
	if (!func_251(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar11);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_273(int iParam0)//Position - 0xF9CA
{
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (GlobalFunc_9037(iParam0))
	{
		return 1;
	}
	return 0;
}


int func_275(int iParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0xFA4B
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (GlobalFunc_8258((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (GlobalFunc_8258((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	GlobalFunc_143("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}




void func_279(var uParam0, bool bParam1)//Position - 0xFBA6
{
	func_247(uParam0);
	if (bParam1)
	{
		GlobalFunc_143(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(uParam0, 0, 0, 0);
	}
	GlobalFunc_6487(&(uParam0->f_48));
	if (iLocal_282 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_282);
	}
	if (iLocal_294 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_294, 0);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	Global_87639 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}


















