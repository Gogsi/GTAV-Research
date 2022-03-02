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
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<8> Local_96 = { 5, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 16;
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
	int iLocal_270 = 0;
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
	int iVar64;
	
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
	uLocal_91 = GlobalFunc_4946(49);
	iLocal_92 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_96440[Var0 /*10*/].f_9 != -1)
			{
				GlobalFunc_143("Relinquishing candidate id...");
				GlobalFunc_54(&(Global_96440[Var0 /*10*/].f_9));
			}
		}
		func_269(&Var0, 1);
	}
	if (!func_266(&Var0, Var61, 1f))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!GlobalFunc_10546(Var0))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_9528(Var0))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_234(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_269(&Var0, 1);
		}
	}
	if (Var0 == 6)
	{
		uLocal_94 = func_233();
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0 == 4)
	{
		GlobalFunc_1286(&uLocal_105, 3, Var0.f_28[0], "BARRY", 0, 1);
		iLocal_270 = MISC::GET_GAME_TIMER();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Var0 == 2 || Var0 == 3)
		{
			func_230(&Var0);
			func_228();
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Barry", 1, 0, 0, 0);
			}
		}
		else if (Var0 == 4)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("BARRY", 1, 0, 0, 0);
			}
		}
		if (!func_190(&Var0, Var0 != 2))
		{
			func_269(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_92, &(Var0.f_9), Var61);
		if (GlobalFunc_115(Var0.f_28[0]))
		{
			if (Var0 == 2)
			{
				if (GlobalFunc_7526(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], 1), "BARY1AU", "BARY1_PRELEA", 5, "BARRY", 10000, 23f))
				{
					func_178(&Var0, Local_96, 1, 0);
				}
			}
			else if (Var0 == 3)
			{
				if (GlobalFunc_7526(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], 1), "BARY2AU", "BARY2_AMB", 3, "BARRY", 10000, 23f))
				{
				}
			}
			else if (Var0 == 4)
			{
				func_168(&uLocal_104, ENTITY::GET_ENTITY_COORDS(Var0.f_28[0], 1), "BARR3AU", "BARRY3_AMB");
			}
		}
		iVar64 = 0;
		if (func_167(Var0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_93) > 5000)
			{
				iVar64 = 1;
				iLocal_93 = MISC::GET_GAME_TIMER();
			}
		}
		if (GlobalFunc_10898(&Var0, iVar64))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_95);
			}
			if (!func_2(&Var0))
			{
				func_269(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_269(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x349
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_199())
	{
		while (!GlobalFunc_9038(*iParam0))
		{
			if (GlobalFunc_4507(*iParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_190(iParam0, *iParam0 != 2))
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
	if (!GlobalFunc_10545(iParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*iParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*iParam0);
	if (!GlobalFunc_199())
	{
		if (iParam0->f_16 == 2)
		{
			GlobalFunc_11143(&(iParam0->f_1), 0);
		}
		else
		{
			GlobalFunc_11143(&(iParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*iParam0, Var0);
	return 1;
}





































































































































































int func_167(int iParam0)//Position - 0xB069
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_168(var uParam0, struct<3> Param1, char[4] cParam4, char* sParam5)//Position - 0xB08C
{
	switch (*uParam0)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_270) > 5000)
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) <= 20f)
			{
				if (GlobalFunc_10618(&uLocal_105, cParam4, sParam5, 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_270 = MISC::GET_GAME_TIMER();
				*uParam0 = 0;
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 25f)
			{
				GlobalFunc_4935();
				*uParam0 = 0;
			}
			break;
	}
}










void func_178(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, int iParam10)//Position - 0xB72B
{
	var uVar0;
	int iVar1;
	
	iVar1 = 32768;
	if (!GlobalFunc_115(iParam0->f_28[iParam10]))
	{
		return;
	}
	if (bParam9)
	{
		iVar1 |= 512;
	}
	uParam1.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam1.f_6);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_48, uParam1[uParam1.f_7], 4f, -4f, -1, 0 | iVar1, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_48, iParam0->f_48.f_1, 8f, -8f, -1, 1 | iVar1, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0->f_28[iParam10], uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}












int func_190(int iParam0, bool bParam1)//Position - 0xBBE2
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	if ((GlobalFunc_5229(*iParam0) || GlobalFunc_8396(*iParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (GlobalFunc_9037(*iParam0))
	{
		if (*iParam0 == 19)
		{
			GlobalFunc_6482(iParam0->f_28[0]);
		}
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (iParam0->f_25 == 1)
	{
		if (!func_200(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_200(iParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!GlobalFunc_7524(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				GlobalFunc_7523(iParam0);
			}
			else
			{
				GlobalFunc_7522(iParam0);
			}
			return 0;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!GlobalFunc_7524(iParam0, 0, 1))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!GlobalFunc_7524(iParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (iParam0->f_26 == 1)
	{
		if (!GlobalFunc_7524(iParam0, 1, 0))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	else if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (!GlobalFunc_7524(iParam0, 0, 0))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (GlobalFunc_115(iParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(iParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, iParam0->f_17[0 /*3*/], 8f))
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
	if (GlobalFunc_2358(&(iParam0->f_48)) && bParam1)
	{
		GlobalFunc_6481(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return 1;
}










int func_200(var uParam0, bool bParam1, int iParam2)//Position - 0xC7A5
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
						if (func_202(uParam0->f_28[iVar0], 1126825984))
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


int func_202(int iParam0, float fParam1)//Position - 0xCA95
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
				if (func_203(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, float fParam1)//Position - 0xCB0B
{
	return func_204(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_204(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCB23
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_212(iParam0, iParam1);
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
		iVar4 = func_207();
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



int func_207()//Position - 0xCDD5
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





int func_212(int iParam0, int iParam1)//Position - 0xCF2B
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
















void func_228()//Position - 0xD59F
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 190.2424f, -956.479f, 29.08f };
	fVar3 = 12f;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Var0, fVar3))
		{
			GlobalFunc_112();
		}
	}
}


void func_230(int iParam0)//Position - 0xD5FE
{
	if (GlobalFunc_115(iParam0->f_28[0]))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_28[0], 64, 1);
		PED::SET_PED_RESET_FLAG(iParam0->f_28[0], 249, 1);
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iParam0->f_28[0], 1), 5.1f))
		{
			func_231(iParam0);
			if (GlobalFunc_115(iParam0->f_28[0]))
			{
				PED::APPLY_DAMAGE_TO_PED(iParam0->f_28[0], 1000, 1);
			}
		}
	}
}

void func_231(var uParam0)//Position - 0xD66C
{
	int iVar0;
	
	if (*uParam0 == 2 || *uParam0 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (GlobalFunc_115(uParam0->f_41[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[iVar0], 0);
			}
			iVar0++;
		}
		if (GlobalFunc_115(uParam0->f_28[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
			PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		}
		GlobalFunc_130(&(uParam0->f_41[2]));
	}
}


var func_233()//Position - 0xD7A1
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, 0, 1, 1, 1);
}

int func_234(int iParam0)//Position - 0xD7CF
{
	switch (*iParam0)
	{
		case 2:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_252(iParam0))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
		
		case 5:
			if (!func_243(iParam0))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_237(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 2)
	{
		func_236(&Local_96);
		func_235(&Local_96, "democ_only_works");
		func_235(&Local_96, "gift_from_god");
		func_235(&Local_96, "rigged_vote");
		func_235(&Local_96, "suck_my");
		func_235(&Local_96, "tyranny");
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

void func_235(var uParam0, char* sParam1)//Position - 0xD8B1
{
	if (uParam0->f_6 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_6] = sParam1;
	uParam0->f_6++;
}

void func_236(var uParam0)//Position - 0xD8DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
}

int func_237(var uParam0)//Position - 0xD907
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 237.65f, -385.41f, 44.4f };
	uParam0->f_27 = 1;
	return 1;
}

int func_238(var uParam0)//Position - 0xD932
{
	int iVar0[3];
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	int iVar18;
	bool bVar19;
	
	Var4 = { -468.9f, -1713.06f, 18.21f };
	Var7 = { -426.56f, -1717.89f, 18.2f };
	Var10 = { -0.1f, -0.85f, 0.23f };
	Var13 = { 8f, 0.5f, 0f };
	fVar16 = -76.2f;
	fVar17 = 43.5f;
	iVar0[0] = joaat("emperor2");
	iVar0[1] = joaat("prop_weed_tub_01");
	iVar0[2] = joaat("towtruck");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -480.9929f, -1712.65f, 17.4524f };
			uParam0->f_17[1 /*3*/] = { -443.6129f, -1705.886f, 27.62214f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar18 = 0;
			while (iVar18 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar18]);
				iVar18++;
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar19 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], Var4, fVar16);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_ALARM(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
					VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_35[0], "WEED STASH VEHICLE");
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(uParam0->f_35[0], 1);
				}
				else
				{
					bVar19 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], Var4 + Var10, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_35[0], 0, Var10, Var13, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar19 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[2], Var7, fVar17);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 39, 43);
			}
			if (bVar19)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar18 = 0;
			while (iVar18 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar18]);
				iVar18++;
			}
			return 1;
			break;
	}
	return 0;
}





int func_243(var uParam0)//Position - 0xDCE6
{
	int iVar0[4];
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	bool bVar17;
	
	Var5 = { 1199.8f, -1259.22f, 34.23f };
	Var8 = { 0f, -1f, 0.64f };
	Var11 = { 1195.3f, -1312.74f, 34.75f };
	fVar14 = 174.7f;
	fVar15 = 282.4f;
	iVar0[0] = joaat("dloader");
	iVar0[1] = joaat("prop_weed_tub_01b");
	iVar0[2] = joaat("police4");
	iVar0[3] = joaat("a_m_y_business_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 1198.367f, -1326.095f, 33.9683f };
			uParam0->f_17[1 /*3*/] = { 1202.237f, -1235.374f, 43.97641f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar16 = 0;
			while (iVar16 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar16]);
				iVar16++;
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar17 = true;
			GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], Var5, fVar14);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_ALARM(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_35[0], "WEED STASH VEHICLE");
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 2, 1);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 3, 1);
			}
			else
			{
				bVar17 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], Var5 + Var8, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_35[0], 0, Var8, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					bVar17 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[2], Var11, fVar15);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				GlobalFunc_6479(&(uParam0->f_28[0]), iVar0[3], Var11, fVar15, 6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[3], Var11, fVar15, 6);
			}
			if (bVar17)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_35[1]))
			{
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					PED::SET_PED_AS_COP(uParam0->f_28[0], 1);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_28[0], uParam0->f_35[1], -1);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_pistol"), 100, 1);
				}
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					PED::SET_PED_AS_COP(uParam0->f_28[1], 1);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_28[1], uParam0->f_35[1], 0);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_pistol"), 100, 1);
				}
			}
			iVar16 = 0;
			while (iVar16 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar16]);
				iVar16++;
			}
			return 1;
			break;
	}
	return 0;
}



int func_246(var uParam0)//Position - 0xE095
{
	int iVar0[2];
	struct<3> Var3;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	Var3 = { 417.78f, -765.71f, 29.39f };
	fVar6 = 87.3f;
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 415.4587f, -773.3615f, 27.8549f };
			uParam0->f_17[1 /*3*/] = { 415.5205f, -758.5715f, 31.34455f };
			uParam0->f_24 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_25 = 1;
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar7]);
				iVar7++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 49, Var3, fVar6, "RC LAUNCHER: BARRY 3", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], Var3 + Vector(0f, 0f, 5f), -115.18f);
				if (GlobalFunc_115(uParam0->f_41[0]) && GlobalFunc_115(uParam0->f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (bVar8)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar7]);
				iVar7++;
			}
			return 1;
			break;
	}
	return 0;
}






int func_252(var uParam0)//Position - 0xE420
{
	int iVar0[5];
	struct<3> Var6;
	float fVar9;
	int iVar10;
	bool bVar11;
	
	Var6 = { 190.2424f, -956.479f, 29.08f };
	fVar9 = 69.171f;
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar10]);
				iVar10++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar11 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 49, Var6, fVar9, "RC LAUNCHER: BARRY 2", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, GlobalFunc_569(-2.01f));
				if (GlobalFunc_115(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
					GlobalFunc_5742(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, GlobalFunc_569(-2.01f));
					if (GlobalFunc_115(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (bVar11)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var6, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], fVar9);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (GlobalFunc_115(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 1, 0);
			}
			func_253(&(uParam0->f_41[3]), iVar0[4]);
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar10]);
				iVar10++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_253(var uParam0, var uParam1)//Position - 0xE7BE
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 192.4462f, -953.5946f, 29.0919f };
	fVar3 = 23.45f;
	GlobalFunc_5742(uParam0, uParam1, Var0, fVar3);
}


int func_255(var uParam0)//Position - 0xE7FE
{
	int iVar0[7];
	struct<3> Var8;
	var uVar11;
	int iVar12;
	bool bVar13;
	
	Var8 = { 190.2424f, -956.379f, 28.63f };
	uVar11 = GlobalFunc_569(1.12f);
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_1_RCM_P2", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar12]);
				iVar12++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar13 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 49, Var8, uVar11, "RC LAUNCHER: BARRY 1", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, GlobalFunc_569(-2.01f));
				if (GlobalFunc_115(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
					GlobalFunc_5742(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, GlobalFunc_569(-2.01f));
					if (GlobalFunc_115(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[2], 190.2574f, -956.3513f, 29.09179f, GlobalFunc_569(-1.68f));
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (bVar13)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var8, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], uVar11);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (GlobalFunc_115(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 1, 0);
			}
			GlobalFunc_5742(&(uParam0->f_41[4]), iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (GlobalFunc_115(uParam0->f_41[4]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[4], -90f, 0f, -30.8f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
			}
			GlobalFunc_5742(&(uParam0->f_41[3]), iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (GlobalFunc_115(uParam0->f_41[3]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -90f, 0f, 75f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			}
			func_253(&(uParam0->f_41[5]), iVar0[6]);
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar12]);
				iVar12++;
			}
			return 1;
			break;
	}
	return 0;
}











int func_266(int iParam0, struct<3> Param1, float fParam4)//Position - 0xF048
{
	int iVar0[4];
	int iVar5;
	
	if (GlobalFunc_8315() == 0)
	{
		if (GlobalFunc_8258(2, Param1, fParam4, iParam0))
		{
			return 1;
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_8258(3, Param1, fParam4, iParam0))
		{
			return 1;
		}
	}
	iVar0[0] = 4;
	iVar0[1] = 5;
	iVar0[2] = 6;
	iVar0[3] = 7;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (GlobalFunc_8258(iVar0[iVar5], Param1, fParam4, iParam0))
		{
			iVar5 = iVar0;
			return 1;
		}
		iVar5++;
	}
	return 0;
}



void func_269(int iParam0, bool bParam1)//Position - 0xF1A2
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_231(iParam0);
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_95))
	{
		HUD::REMOVE_BLIP(&uLocal_95);
	}
	if (iLocal_92 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_92);
	}
	if (*iParam0 == 6)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 4:
			sVar0 = "BARRY3_AMB";
			break;
	}
	GlobalFunc_7525(sVar0);
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}






















