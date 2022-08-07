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
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 16;
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
	int iLocal_261 = 0;
	bool bLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
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
	int iVar64[4];
	
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
	uLocal_91 = GlobalFunc_4946(58);
	iLocal_92 = joaat("felon2");
	iLocal_94 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 27;
	iVar64[1] = 28;
	iVar64[2] = 29;
	iVar64[3] = 30;
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
		func_265(&Var0, 1);
	}
	if (!GlobalFunc_8909(&iVar64, &Var0, Var61, 1f))
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
	while (!func_232(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_265(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0 == 27)
	{
		GlobalFunc_1286(&uLocal_96, 5, Var0.f_28[0], "JOSH", 0, 1);
	}
	else if (Var0 == 30)
	{
		GlobalFunc_1286(&uLocal_96, 4, Var0.f_28[0], "JOSH", 0, 1);
		GlobalFunc_1286(&uLocal_96, 3, Var0.f_28[1], "JOSHCOP", 0, 1);
		iLocal_261 = MISC::GET_GAME_TIMER();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_194(&Var0, 1))
		{
			if (Var0 == 30)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1102.724f, 290.1463f, 63.23002f, 1) < 200f)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
					func_192(&Var0);
					GlobalFunc_143("Making Josh cops attack");
				}
			}
			func_265(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_94, &(Var0.f_9), Var61);
		if (Var0 == 27)
		{
			GlobalFunc_7526(&Var0, Var61, "JOSH1AU", "JOSH1_AMB1", 5, "JOSH", 5000, 14f);
		}
		else if (Var0 == 28)
		{
			GlobalFunc_7526(&Var0, Var61, "JOSH2AU", "JOSH2_AMB", 5, "JOSH", 5000, 1101004800);
		}
		else if (Var0 == 29)
		{
			GlobalFunc_7526(&Var0, Var61, "JOSH3AU", "JOSH3_AMB", 3, "JOSH", 5000, 1101004800);
		}
		else if (Var0 == 30)
		{
			if (iLocal_264 == 0)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_115(Var0.f_28[1]))
					{
						GlobalFunc_143("Josh 4: Trying to set Cop 1 component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_standing_idle", Var0.f_28[1], 0);
					}
					if (GlobalFunc_115(Var0.f_28[2]))
					{
						GlobalFunc_143("Josh 4: Trying to set Cop 2 component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_with_notepad", Var0.f_28[2], 0);
					}
					iLocal_264 = 1;
				}
			}
			func_172();
		}
		if (((GlobalFunc_10897(&Var0, 0) || func_156(&Var0)) || func_154(&Var0)) || func_152(&Var0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_263);
			}
			if (!func_2(&Var0))
			{
				func_265(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_265(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x3D1
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_Is_Mission_Retry())
	{
		while (!GlobalFunc_9038(*iParam0))
		{
			if (GlobalFunc_4507(*iParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_194(iParam0, *iParam0 != 2))
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
	if (!GlobalFunc_10547(iParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*iParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*iParam0);
	if (!GlobalFunc_Is_Mission_Retry())
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






















































































































































int func_152(var uParam0)//Position - 0x9F39
{
	if (*uParam0 == 30)
	{
		if (GlobalFunc_115(uParam0->f_28[0]))
		{
			if (bLocal_262)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], 1) <= 15f)
					{
						GlobalFunc_143("Special launching Josh 4 (not in vehicle)");
						return 1;
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], 1) <= 10f)
				{
					GlobalFunc_143("Special launching Josh 4 (in vehicle)");
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_154(var uParam0)//Position - 0xA014
{
	if (*uParam0 == 29)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 566.7472f, -1771.875f, 28.35786f, 1) < 6f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_143("Special launching Josh 3");
				return 1;
			}
			else if ((!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -828834893) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1f, 1, 1056964608, 0, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}


int func_156(var uParam0)//Position - 0xA0D9
{
	if (*uParam0 == 28)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 566.7472f, -1771.875f, 28.35786f, 1) < 9f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_143("Special launching Josh 2");
				return 1;
			}
			else if ((!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -828834893) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 1, 1056964608, 0, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}
















void func_172()//Position - 0xB327
{
	switch (iLocal_95)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_261) > 100 && bLocal_262 == 0)
			{
				iLocal_95 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1103.44f, 290.18f, 63.28f, 1) <= 20f)
			{
				if (GlobalFunc_10618(&uLocal_96, "JOSH4AU", "JOSH4_AMB", 8, 0, 0, 0))
				{
					iLocal_95 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_261 = MISC::GET_GAME_TIMER();
				iLocal_95 = 0;
				bLocal_262 = true;
				GlobalFunc_143("Josh 4 conversation finished and will not loop");
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1103.44f, 290.18f, 63.28f, 1) >= 25f)
			{
				GlobalFunc_4935();
				bLocal_262 = true;
				iLocal_95 = 0;
			}
			break;
	}
}




















void func_192(int iParam0)//Position - 0xBDD6
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iParam0->f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_28[iVar0], 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_28[iVar0], 0);
				PED::SET_PED_KEEP_TASK(iParam0->f_28[iVar0], 1);
				TASK::TASK_COMBAT_PED(iParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}


int func_194(var uParam0, bool bParam1)//Position - 0xBE8F
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
		if (!func_203(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_203(uParam0, 0, 0))
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
				func_192(uParam0);
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









int func_203(var uParam0, bool bParam1, int iParam2)//Position - 0xC9D3
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
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
								func_192(uParam0);
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
							func_192(uParam0);
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
								func_192(uParam0);
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
									func_192(uParam0);
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
								func_192(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_205(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								func_192(uParam0);
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
								func_192(uParam0);
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
								func_192(uParam0);
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


int func_205(int iParam0, float fParam1)//Position - 0xCCC3
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
				if (func_206(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_206(int iParam0, float fParam1)//Position - 0xCD39
{
	return func_207(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_207(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCD51
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_215(iParam0, iParam1);
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
		iVar4 = func_210();
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



int func_210()//Position - 0xD003
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





int func_215(int iParam0, int iParam1)//Position - 0xD159
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

















int func_232(int iParam0)//Position - 0xD868
{
	switch (*iParam0)
	{
		case 27:
			if (!func_250(iParam0))
			{
				return 0;
			}
			break;
		
		case 28:
			if (!func_249(iParam0))
			{
				return 0;
			}
			break;
		
		case 29:
			if (!func_247(iParam0))
			{
				return 0;
			}
			break;
		
		case 30:
			if (!func_233(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_233(var uParam0)//Position - 0xD8DD
{
	int iVar0[4];
	int iVar5;
	float fVar6;
	bool bVar7;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	iVar0[2] = joaat("s_m_y_cop_01");
	iVar0[3] = joaat("police3");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "JOSH_4_INT_CONCAT", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmjosh4", "beckon_a_josh", 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			if (!func_243(0, 1))
			{
			}
			if (!func_242(1, 1))
			{
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 58, -1103.6f, 290.81f, 64.31f, -99.24f, "JOSH LAUNCHER RC", 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[2], -1102.92f, 290.12f, 64.28f, 40.46f, 6);
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_pistol"), -1, 0, 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmjosh4", "BECKON_A_COP_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[2], -1102.73f, 290.91f, 64.28f, 92.06f, 6);
				if (GlobalFunc_115(uParam0->f_28[2]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 10, 0, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], 1);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("weapon_pistol"), -1, 0, 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[2]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmjosh4", "BECKON_A_COP_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iVar0[3], -1107.5f, 280.33f, 64.01f, 97.97f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_234(&(uParam0->f_35[1]), 0);
				if (GlobalFunc_4940(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_35[1], 900f);
					fVar6 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1]);
					fVar6 = (fVar6 / 2f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1], fVar6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[1]);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (bVar7)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, 1, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.054f, 295.5856f, 67.18046f, 1, 0f, 0);
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_234(var uParam0, bool bParam1)//Position - 0xDCCD
{
	struct<3> Var0;
	float fVar3;
	
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar3 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar3 = 6.077003f;
	}
	GlobalFunc_8256(uParam0, iLocal_92, Var0, fVar3);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
}








int func_242(bool bParam0, bool bParam1)//Position - 0xDFA7
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1502457334, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1502457334, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1994188940, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1994188940, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_243(bool bParam0, bool bParam1)//Position - 0xE015
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 1f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, -0.9f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-795418380, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}




int func_247(var uParam0)//Position - 0xE152
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 567.5142f, -1760.011f, 27.16929f };
			uParam0->f_17[1 /*3*/] = { 565.3445f, -1775.931f, 31.3515f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_3_intp1", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmjosh3");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh3"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 58, 566.1639f, -1773.817f, 29f, 14.4f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]));
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0f, 0.05f, -110.7f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, "rcmjosh3", "sit_stairs_idle", 8f, -8f, 17, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
			}
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_248(var uParam0)//Position - 0xE33A
{
	GlobalFunc_8256(uParam0, iLocal_92, 558.09f, -1765.39f, 28.86f, 335.3252f);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 2);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
}

int func_249(var uParam0)//Position - 0xE380
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 574.0521f, -1770.594f, 27.66929f };
			uParam0->f_17[1 /*3*/] = { 559.1631f, -1768.663f, 31.41929f };
			uParam0->f_24 = 17.25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_2_intp1_t4", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmjosh2");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh2"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 58, 565.3901f, -1772.838f, 29.80087f, 62.50156f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]));
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 1);
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				uLocal_93 = PED::CREATE_SYNCHRONIZED_SCENE(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_93, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_93, "rcmjosh2", "josh_wait_loop", 2f, -4f, 0, 0, 1148846080, 0);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmjosh2");
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_250(var uParam0)//Position - 0xE5A2
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 1;
			uParam0->f_15 = 9f;
			StringCopy(&(uParam0->f_9), "JOSH_1_INT_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmjosh1", "idle", 0);
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
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 58, -1104.72f, 291.02f, 64.39f, 138.35f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_234(&(uParam0->f_35[0]), 1);
			}
			if (!func_251(1, 1))
			{
				bVar4 = false;
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			PATHFIND::SET_PED_PATHS_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, 0, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1)//Position - 0xE70F
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}














void func_265(int iParam0, bool bParam1)//Position - 0xEC97
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_263))
	{
		HUD::REMOVE_BLIP(&uLocal_263);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (iLocal_94 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_94);
	}
	switch (*iParam0)
	{
		case 30:
			sVar0 = "JOSH4_AMB";
			break;
	}
	GlobalFunc_7525(sVar0);
	switch (*iParam0)
	{
		case 30:
			ENTITY::REMOVE_FORCED_OBJECT(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"));
			break;
	}
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}






















