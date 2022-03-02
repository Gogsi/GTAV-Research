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
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 16;
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
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	var uLocal_275[1] = { 0 };
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_280[1] = { 0 };
	struct<3> Local_282[1];
	float fLocal_286[1] = { 0f };
	float fLocal_288 = 0f;
	int iLocal_289 = 0;
	struct<3> Local_290 = { 0, 0, 0 } ;
	float fLocal_293 = 0f;
	struct<3> Local_294[1];
	struct<2> Local_298 = { 0, 0 } ;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	struct<2> Local_302 = { 0, 0 } ;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	char cLocal_306[16] = "";
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	char cLocal_310[16] = "";
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	float fLocal_319 = 0f;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
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
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	Local_99 = { 0f, 0f, 0f };
	Local_102 = { 0f, 0f, 0f };
	iLocal_105 = -1;
	iLocal_108 = 318;
	iLocal_274 = 1;
	fLocal_288 = -1f;
	iLocal_289 = -1;
	iLocal_314 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_387();
	}
	SYSTEM::WAIT(0);
	func_378();
	func_47();
	GlobalFunc_576();
	while (iLocal_274 && func_42(6, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_107)
		{
			case 0:
				if (func_38())
				{
					if (iLocal_280[0] != joaat("freight"))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						PLAYER::_0xAD73CE5A09E42D12(PLAYER::PLAYER_ID());
						iLocal_107 = 1;
					}
					else
					{
						iLocal_107 = 4;
					}
				}
				break;
			
			case 1:
				if (func_20())
				{
					iLocal_107 = 2;
				}
				break;
			
			case 2:
				if (func_19())
				{
					iLocal_107 = 3;
				}
				break;
			
			case 3:
				if (func_6())
				{
					iLocal_107 = 6;
				}
				break;
			
			case 4:
				if (func_3())
				{
					iLocal_107 = 5;
				}
				break;
			
			case 5:
				if (func_2())
				{
					iLocal_107 = 6;
				}
				break;
			
			case 6:
				func_1();
				break;
		}
	}
	func_387();
}

void func_1()//Position - 0x183
{
	iLocal_274 = 0;
}

int func_2()//Position - 0x18F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_278[0], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_275[0]))
		{
			return 0;
		}
	}
	iLocal_107 = 6;
	return 0;
}

int func_3()//Position - 0x1BB
{
	struct<3> Var0;
	float fVar3;
	char* sVar4;
	char[] cVar20[8];
	char[] cVar36[8];
	var uVar52;
	var uVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_278[0], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_275[0]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_275[0], 0) };
			fVar3 = SYSTEM::VDIST(Local_294[0 /*3*/] + Local_290, Var0);
			GlobalFunc_5930(iLocal_108, &sVar4, &cVar20, &cVar36, &uVar52, &uVar53);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar4, &cVar20, 3))
			{
				fVar54 = ((0f - 17.5f) / (11.5f - 60f));
				fVar55 = (((17.5f - (fVar54 * 60f)) + (0f - (fVar54 * 11.5f))) / 2f);
				fLocal_288 = ((fVar54 * fVar3) + fVar55);
				if (fLocal_288 > 17.5f)
				{
					fLocal_288 = 17.5f;
				}
				if (fLocal_288 < 0f)
				{
					fLocal_288 = 0f;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar4, &cVar36, 3))
			{
				fVar56 = ((0f - 17.5f) / (11.5f - 60f));
				fVar57 = (((17.5f - (fVar56 * 60f)) + (0f - (fVar56 * 11.5f))) / 2f);
				fLocal_288 = ((fVar56 * fVar3) + fVar57);
				if (fLocal_288 > 17.5f)
				{
					fLocal_288 = 17.5f;
				}
				if (fLocal_288 < 0f)
				{
					fLocal_288 = 0f;
				}
			}
			else
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_278[0], 17.5f);
				return 1;
			}
			VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_278[0], fLocal_288);
			VEHICLE::SET_TRAIN_SPEED(uLocal_278[0], fLocal_288);
			if (iLocal_314 <= 0)
			{
				iLocal_314 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_314 + 2500)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&cLocal_310, 0))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, &cLocal_306, uLocal_278[0], &cLocal_310, 0, 0);
					iLocal_314 = MISC::GET_GAME_TIMER();
				}
			}
			return 0;
		}
	}
	iLocal_107 = 6;
	return 0;
}



int func_6()//Position - 0x1AC1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_278[0], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_275[0]))
		{
			if (PED::GET_PED_TYPE(uLocal_275[0]) == 6)
			{
				if (!GlobalFunc_2568(9))
				{
					if (func_7(uLocal_275[0], 135f))
					{
					}
				}
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_289 = -1;
				return 0;
			}
			if (iLocal_289 < 0)
			{
				iLocal_289 = MISC::GET_GAME_TIMER();
				return 0;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_275[0], 1)) > (250f * 250f))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_275[0], uLocal_278[0], 10f, 786599);
				PED::SET_PED_KEEP_TASK(uLocal_275[0], 1);
				return 1;
			}
			if (iLocal_289 + 60000) < MISC::GET_GAME_TIMER()
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_275[0], uLocal_278[0], 10f, 786599);
				PED::SET_PED_KEEP_TASK(uLocal_275[0], 1);
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

bool func_7(int iParam0, float fParam1)//Position - 0x1BC0
{
	return func_8(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_8(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1BD8
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_17(iParam0, iParam1);
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
		iVar4 = func_11();
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



int func_11()//Position - 0x1E8A
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






int func_17(int iParam0, int iParam1)//Position - 0x2000
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


int func_19()//Position - 0x2058
{
	struct<3> Var0;
	float fVar3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_278[0], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_275[0]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_275[0], 0) };
			fVar3 = SYSTEM::VDIST2(Local_294[0 /*3*/] + Local_290, Var0);
			if (fVar3 < (4.5f * 4.5f))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_275[0], uLocal_278[0], 10f, 786599);
				iLocal_289 = MISC::GET_GAME_TIMER();
				return 1;
			}
			if (PED::GET_PED_TYPE(uLocal_275[0]) == 6)
			{
				if (!GlobalFunc_2568(9))
				{
					if (func_7(uLocal_275[0], 135f))
					{
					}
				}
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			return 0;
		}
	}
	iLocal_107 = 6;
	return 0;
}

int func_20()//Position - 0x211A
{
	bool bVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_278[0], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_275[0]))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_278[0]))
			{
				bVar0 = false;
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_302))
				{
					bVar0 = true;
				}
				else if (GlobalFunc_10607(&uLocal_109, "PRSAUD", &Local_302, 3, 0, 0, 0))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_275[0], uLocal_278[0], Local_294[0 /*3*/] + Local_290, 10f, 0, iLocal_280[0], 786599, 4f, -1f);
					return 1;
				}
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 0;
			}
			return 0;
		}
	}
	iLocal_107 = 6;
	return 0;
}


















int func_38()//Position - 0x29DF
{
	int iVar0;
	
	if (!GlobalFunc_2927())
	{
		iVar0 = GlobalFunc_8315();
		if (GlobalFunc_42(iVar0))
		{
			switch (iVar0)
			{
				case 1:
					StringCopy(&Local_298, "FRANKLIN", 16);
					StringCopy(&Local_302, "PSF_FRA1", 16);
					break;
				
				case 2:
					StringCopy(&Local_298, "TREVOR", 16);
					StringCopy(&Local_302, "PST_FRA1", 16);
					break;
				
				default:
					break;
			}
			GlobalFunc_173(&uLocal_109, GlobalFunc_8315(), PLAYER::PLAYER_PED_ID(), &Local_298, 0, 1);
			return 1;
		}
	}
	return 0;
}




int func_42(int iParam0, int iParam1)//Position - 0x2B5F
{
	struct<3> Var0;
	float fVar3;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (GlobalFunc_39(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!GlobalFunc_2987(iParam0, GlobalFunc_8310()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == GlobalFunc_217(Global_89748) && iParam1 != 0)
		{
			Global_89748 = 0;
		}
	}
	return 1;
}





void func_47()//Position - 0x2CE9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	STREAMING::REQUEST_MODEL(iLocal_277);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		STREAMING::REQUEST_MODEL(iLocal_280[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_277))
		{
			STREAMING::REQUEST_MODEL(iLocal_277);
			bVar2 = false;
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_280[iVar0]))
			{
				STREAMING::REQUEST_MODEL(iLocal_280[iVar0]);
				bVar2 = false;
			}
			if (iLocal_280[iVar0] == joaat("freight"))
			{
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightgrain"));
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				if (!STREAMING::HAS_MODEL_LOADED(joaat("freightcar")))
				{
					STREAMING::REQUEST_MODEL(joaat("freightcar"));
					bVar2 = false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("freightgrain")))
				{
					STREAMING::REQUEST_MODEL(joaat("freightgrain"));
					bVar2 = false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("freightcont1")))
				{
					STREAMING::REQUEST_MODEL(joaat("freightcont1"));
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_280[iVar0] != joaat("freight"))
		{
			if (iLocal_280[iVar0] != GlobalFunc_4931(0, 1))
			{
				uLocal_278[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_280[iVar0], Local_290 + Local_282[iVar0 /*3*/], (fLocal_293 + fLocal_286[iVar0]), 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_280[iVar0]);
				VEHICLE::SET_VEHICLE_SIREN(uLocal_278[iVar0], 1);
			}
			else
			{
				GlobalFunc_10543(&(uLocal_278[iVar0]), 0, Local_290 + Local_282[iVar0 /*3*/], (fLocal_293 + fLocal_286[iVar0]), 1, 1);
			}
		}
		else
		{
			VEHICLE::SET_RANDOM_TRAINS(0);
			VEHICLE::DELETE_ALL_TRAINS();
			uLocal_278[iVar0] = VEHICLE::CREATE_MISSION_TRAIN(0, Local_290 + Local_282[iVar0 /*3*/], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
		}
		if (iLocal_277 != GlobalFunc_4917(0))
		{
			uLocal_275[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_278[iVar0], 6, iLocal_277, -1, 1, 1);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(uLocal_275[iVar0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_275[iVar0], joaat("weapon_pistol"), 1500, 1, 1);
		}
		else
		{
			func_48(&(uLocal_275[iVar0]), 0, uLocal_278[iVar0], -1, 1, 0, 0);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	if (iLocal_320 != -1)
	{
		uLocal_315 = TASK::ADD_COVER_POINT(Local_290 + Local_316, (fLocal_293 + fLocal_319), iLocal_320, iLocal_321, iLocal_322, 1);
	}
}

int func_48(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F72
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				func_333(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11325(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7714(*uParam0);
				GlobalFunc_11336(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}





























































































































































































































































































int func_333(int iParam0, int iParam1, bool bParam2)//Position - 0x4D837
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = GlobalFunc_7681();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}













































void func_378()//Position - 0x52644
{
	char[] cVar0[8];
	
	iLocal_108 = Global_89502;
	GlobalFunc_8273(iLocal_108, &Local_290, &fLocal_293, &cVar0);
	Local_316 = { 0f, 0f, 0f };
	fLocal_319 = 0f;
	switch (iLocal_108)
	{
		case 42:
		case 43:
		case 44:
		case 45:
			switch (iLocal_108)
			{
				case 42:
					Local_282[0 /*3*/] = { Vector(4.8237f, -2967.598f, 775.4436f) - Local_290 };
					fLocal_286[0] = (174.1408f - 90f);
					Local_294[0 /*3*/] = { Vector(4.8169f, -2985.174f, 776.4791f) - Local_290 };
					iLocal_320 = 1;
					iLocal_321 = 1;
					iLocal_322 = 0;
					break;
				
				case 43:
					Local_282[0 /*3*/] = { 30.4341f, -20.6057f, 0.0429f };
					fLocal_286[0] = 2.16f;
					Local_294[0 /*3*/] = { 29.451f, 37.9f, 0.9107f };
					Local_316 = { 0f, 0f, 0f };
					fLocal_319 = 0f;
					iLocal_320 = -1;
					iLocal_321 = -1;
					iLocal_322 = -1;
					break;
				
				case 44:
					Local_282[0 /*3*/] = { 28.5848f, 1.3633f, 0.1963f };
					fLocal_286[0] = 25.291f;
					Local_294[0 /*3*/] = { 30f, 30f, 1.196f };
					Local_316 = { Vector(5.1339f, -2917.247f, 643.5049f) - Local_290 };
					fLocal_319 = 0f;
					iLocal_320 = 1;
					iLocal_321 = 1;
					iLocal_322 = 0;
					break;
				
				case 45:
					Local_282[0 /*3*/] = { Vector(5.0585f, -2820.109f, 571.7438f) - Local_290 };
					fLocal_286[0] = (233.5577f - 299.0519f);
					fLocal_286[0] = -171f;
					Local_294[0 /*3*/] = { Vector(5.0585f, -2859.817f, 590.6221f) - Local_290 };
					iLocal_320 = 0;
					iLocal_321 = 1;
					iLocal_322 = 0;
					break;
				
				default:
					break;
			}
			iLocal_277 = joaat("s_m_y_cop_01");
			iLocal_280[0] = joaat("police");
			break;
		
		case 268:
			Local_282[0 /*3*/] = { Vector(33.8759f, 6400.602f, 1466.771f) - Local_290 };
			Local_294[0 /*3*/] = { 0f, 0f, 0f };
			fLocal_286[0] = 0f;
			fLocal_288 = 20f;
			iLocal_277 = joaat("s_m_m_lsmetro_01");
			iLocal_280[0] = joaat("freight");
			StringCopy(&Local_298, "", 16);
			StringCopy(&Local_302, "", 16);
			StringCopy(&cLocal_306, "Warning_Once", 16);
			StringCopy(&cLocal_310, "TRAIN_HORN", 16);
			iLocal_320 = -1;
			iLocal_321 = -1;
			iLocal_322 = -1;
			break;
		
		default:
			Local_282[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_294[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_277 = joaat("a_m_y_musclbeac_01");
			iLocal_280[0] = joaat("tailgater");
			break;
	}
	Local_316 = { 0f, 0f, 0f };
	fLocal_319 = 0f;
	iLocal_320 = -1;
	iLocal_321 = -1;
	iLocal_322 = -1;
}









void func_387()//Position - 0x57BDD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_275[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_278[iVar0]));
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_280[iVar0]);
		iVar0++;
	}
	TASK::REMOVE_COVER_POINT(uLocal_315);
	if (iLocal_280[0] == joaat("freight"))
	{
		VEHICLE::SET_RANDOM_TRAINS(1);
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

