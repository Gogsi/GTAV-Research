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
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<3> Local_39 = { 0, 0, 0 } ;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_69[5];
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	struct<3> Local_108[2];
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	Local_39 = { -690.938f, 512.2703f, 109.3639f };
	iLocal_99 = -1;
	iLocal_107 = 60000;
	iLocal_284 = 99;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_98 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_42, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_39, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_83(&Local_42, 2);
	Local_42.f_4 = 3;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_39, 5f, 0, 0, 0, 0, 0);
	func_82(&Local_108, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL == 0)
	{
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	func_77(1);
	func_76(0);
	while (true)
	{
		if (func_89(90) == 1)
		{
			func_88();
			func_90();
		}
		func_75(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_MISSION_FLAG() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_93)
		{
			case 0:
				func_64(&iLocal_92);
				break;
			
			case 4:
				func_63(&iLocal_92);
				break;
			
			case 1:
				func_62(&iLocal_92);
				break;
			
			case 2:
				func_56(&iLocal_92);
				break;
			
			case 3:
				func_52(&iLocal_92);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_42);
		if (func_43(&Local_42))
		{
			if (func_37(&Local_42))
			{
				if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == Global_68043)
				{
					Global_68043 = 0;
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Local_42.f_14, 8.5f, 0, 0, 0, 0, 0);
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE = iLocal_98;
				func_35();
				func_34(&uLocal_118, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				func_22(&uLocal_118, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_19();
			}
		}
		if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL != 0)
		{
			iLocal_96 = (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL + 14 % func_18(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
			if (((CLOCK::GET_CLOCK_DAY_OF_MONTH() == iLocal_96 && !func_17(0)) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_283, &uLocal_285, &iLocal_284);
		if ((iLocal_106 > 0 && MISC::GET_GAME_TIMER() > iLocal_106) && iLocal_284 == 99)
		{
			iLocal_106 = 0;
			if (func_86())
			{
				func_76(6);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)//Position - 0x3DF
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iVar0 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_TITLE");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_NOTE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_3());
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam1 = MISC::GET_GAME_TIMER();
			*iParam2++;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7000)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()//Position - 0x534
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x55E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_BIT_SET(iLocal_98, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)//Position - 0x591
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_49(2, Local_69[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_99))
	{
		func_48(2, Local_69[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, Local_69[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_85)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_85[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)//Position - 0x62D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x99A
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_8(iParam1)), 0));
		}
		else
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_8(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35962++;
				if (Global_35962 > 16)
				{
					Global_35962 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35964++;
				if (Global_35964 > 16)
				{
					Global_35964 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35963++;
				if (Global_35963 > 16)
				{
					Global_35963 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_14382, 1);
	}
}

void func_7(var uParam0)//Position - 0xB80
{
	Global_35965[Global_35969] = uParam0;
	Global_16750 = 1;
	Global_16749 = uParam0;
	Global_35969++;
	if (Global_35969 == 3)
	{
		Global_35969 = 0;
	}
}

char* func_8(int iParam0)//Position - 0xBAE
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)//Position - 0xF19
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[22 /*29*/].f_7));
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)//Position - 0x1375
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_11(int iParam0)//Position - 0x13A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_45154[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45154[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)//Position - 0x140A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)//Position - 0x14BF
{
	if (iParam0 == iLocal_85[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_85[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_85[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_85[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_85[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)//Position - 0x1520
{
	return MISC::IS_BIT_SET(iLocal_98, iParam0);
}

bool func_15(int iParam0)//Position - 0x1530
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(iLocal_98, iParam0 + 5);
}

int func_16()//Position - 0x154C
{
	return (5 - func_3());
}

int func_17(int iParam0)//Position - 0x155A
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0, int iParam1)//Position - 0x15B4
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_19()//Position - 0x1656
{
	int iVar0;
	
	iLocal_284 = 0;
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)//Position - 0x1698
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

bool func_21(char* sParam0)//Position - 0x16E9
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16FC
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x174A
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_30();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_24();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x1A16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_25()//Position - 0x1A48
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_26()//Position - 0x1ADD
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1B04
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()//Position - 0x1B9D
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_70();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_29(int iParam0)//Position - 0x1C3E
{
	return Global_34913 == iParam0;
}

void func_30()//Position - 0x1C4C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x1CA4
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_32()//Position - 0x1CDF
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1D36
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_34(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D8C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_35()//Position - 0x1E27
{
	if (func_36(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_36(bool bParam0)//Position - 0x1E72
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_37(var uParam0)//Position - 0x1E9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26)
			{
				if (func_38(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		iLocal_106 = (MISC::GET_GAME_TIMER() + iLocal_107);
	}
	return iVar2;
}

int func_38(int iParam0)//Position - 0x1F44
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (func_42(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_41(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_40(iVar0, ENTITY::GET_ENTITY_HEALTH(iParam0) < 875);
				func_39(iVar0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)//Position - 0x1FA4
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_98, iParam0);
		iLocal_99 = iParam0;
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_98, iParam0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1FC8
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_98, iParam0 + 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_98, iParam0 + 5);
	}
}

int func_41(int iParam0, int iParam1)//Position - 0x1FEC
{
	if (iParam0 == iLocal_85[iParam1])
	{
		return 1;
	}
	if (iLocal_85[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x204E
{
	if (!func_75(uParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(uParam0) < 750)
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
	{
		return 1;
	}
	return VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(iParam0) > 0;
}

bool func_43(var uParam0)//Position - 0x2097
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_44(var uParam0)//Position - 0x20B0
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_45(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = MISC::IS_POSITION_OCCUPIED(Var0, 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			AUDIO::STOP_SOUND(iLocal_94);
			iLocal_95 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_95)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_94, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_95 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			AUDIO::STOP_SOUND(iLocal_94);
			iLocal_95 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_95)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_94, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_95 = 1;
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
	}
}

Vector3 func_45(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x2270
{
	if (bParam7)
	{
		fParam6 = func_46(fParam6, 0f, 1f);
	}
	return Param0 + Vector(fParam6, fParam6, fParam6) * Param3 - Param0;
}

float func_46(float fParam0, float fParam1, float fParam2)//Position - 0x2299
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_47(int iParam0)//Position - 0x22C0
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45154[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, bool bParam2)//Position - 0x22FD
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_49(int iParam0, int iParam1, bool bParam2)//Position - 0x2424
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45154[iVar0 /*203*/].f_2 = iParam0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45154[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_3;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_2;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45154[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_50(Global_45154[iVar0 /*203*/].f_4[iVar1], Global_45154[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2620
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39271[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39271[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_35970[iVar20 /*12*/].f_1) };
		if (Global_35970[iVar20 /*12*/].f_2 == iParam0 && !Global_35970[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35970[iVar20 /*12*/].f_2;
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45154[iVar24 /*203*/].f_1 == iParam1 && Global_45154[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = Global_45154[iVar23 /*203*/].f_1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = (Global_45154[iVar23 /*203*/].f_9 - 1);
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
		iVar25 = Global_44792[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45154[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35970[iVar26 /*12*/].f_2;
		if (Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_51(int iParam0, bool bParam1)//Position - 0x29F4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45154[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45154[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45154[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45154[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44792[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44792[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44792[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44792[iVar6 /*120*/].f_18[iVar8] == Global_45154[iVar4 /*203*/].f_1)
							{
								if (Global_44792[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35962 = (Global_35962 - 1);
											break;
										
										case 1:
											Global_35963 = (Global_35963 - 1);
											break;
										
										case 2:
											Global_35964 = (Global_35964 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_45154[iVar4 /*203*/].f_2 = iParam0;
	Global_45154[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45154[iVar4 /*203*/] = 1;
	}
	Global_SAVE_DATA.EMAIL_DATA.f_310++;
	if (Global_SAVE_DATA.EMAIL_DATA.f_310 == 0)
	{
		Global_SAVE_DATA.EMAIL_DATA.f_310 = 1;
	}
	Global_45154[iVar4 /*203*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_310;
	Global_45154[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_52(int iParam0)//Position - 0x2C0C
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_91);
			func_54("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
				if (func_75(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				func_54("EPS_DROP_ESCAPE", -1);
				func_76(2);
			}
			break;
	}
}

int func_53()//Position - 0x2CA5
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	if (!func_75(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_101 = 0;
		return 0;
	}
	uVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!func_75(uVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(ENTITY::GET_ENTITY_MODEL(uVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_101)
					{
						func_54("EPS_DROP_FAIL", -1);
						iLocal_101 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(char* sParam0, int iParam1)//Position - 0x2D3B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_55(int iParam0)//Position - 0x2D52
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, 0);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_56(int iParam0)//Position - 0x2D72
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_42, 1);
			Local_42.f_4 = 4;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1.5f);
			}
			*iParam0 = 2;
			iLocal_97 = 0;
			iLocal_105 = 0;
			break;
		
		case 2:
			switch (iLocal_97)
			{
				case 0:
					if (iLocal_102 == 1 && !Local_42.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
					}
					if (func_75(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != PLAYER::PLAYER_PED_ID())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_42.f_26)
					{
						if (iLocal_103 == 0)
						{
							if (func_60(iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_105 = 0;
									iLocal_103 = 1;
									iLocal_102 = 0;
								}
							}
						}
						if (func_58(PLAYER::PLAYER_PED_ID(), Local_42.f_14, 0) < 3f)
						{
							func_55(&iLocal_91);
						}
						if (func_58(PLAYER::PLAYER_PED_ID(), Local_42, 0) > (15f + 5f))
						{
							func_83(&Local_42, 2);
							Local_42.f_4 = 3;
							iLocal_103 = 0;
							iLocal_102 = 0;
							iLocal_105 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_42) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_83(&Local_42, 2);
							Local_42.f_4 = 3;
							iLocal_105 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_42.f_26 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_105 == 0)
						{
							iLocal_105 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_105) > 500)
						{
							if (iLocal_102 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_54("EPS_DROP_MESS", -1);
								iLocal_102 = 1;
								iLocal_103 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_57(var uParam0)//Position - 0x2F83
{
	return (!uParam0->f_26 && !MISC::IS_POSITION_OCCUPIED(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_58(int iParam0, struct<3> Param1, int iParam4)//Position - 0x2FAC
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_59(char* sParam0, int iParam1, int iParam2)//Position - 0x2FE5
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_60(int iParam0)//Position - 0x2FFE
{
	if (func_61(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x3028
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x3048
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(iLocal_91))
			{
				iLocal_91 = HUD::ADD_BLIP_FOR_COORD(Local_39);
				if (HUD::DOES_BLIP_EXIST(iLocal_91))
				{
					HUD::SET_BLIP_SPRITE(iLocal_91, 206);
					HUD::SET_BLIP_COLOUR(iLocal_91, 42);
				}
			}
			*iParam0 = 2;
			iLocal_97 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (func_75(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != PLAYER::PLAYER_PED_ID())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(PLAYER::PLAYER_PED_ID(), Local_42, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_76(2);
			break;
	}
}

void func_63(int iParam0)//Position - 0x313D
{
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_91);
			if (iLocal_104 == 0)
			{
				func_54("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				if (iLocal_104 == 0)
				{
					func_54("EPS_DROP_ESCAPE", -1);
				}
				func_76(2);
			}
			iLocal_104 = 1;
			break;
	}
}

void func_64(int iParam0)//Position - 0x31B8
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_100 = 0;
			iLocal_102 = 0;
			func_55(&iLocal_91);
			break;
		
		case 2:
			if (func_61(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0) && func_43(&Local_42))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 200.7367f);
				}
			}
			if (func_58(PLAYER::PLAYER_PED_ID(), Local_42, 0) > (15f + 5f))
			{
				func_83(&Local_42, 2);
				if (Local_42.f_4 != 2)
				{
					Local_42.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_100 == 0 && func_61(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_116 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
					func_54("EPS_DROP_HELP", -1);
					iLocal_100 = 1;
				}
			}
			iLocal_101 = 0;
			func_76(1);
			break;
	}
}

void func_65()//Position - 0x32E5
{
	func_67();
	while (MISC::GET_MISSION_FLAG() || func_70() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_66();
}

void func_66()//Position - 0x3310
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_75(PLAYER::PLAYER_PED_ID()))
	{
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	iLocal_98 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()//Position - 0x33B4
{
	if (HUD::DOES_BLIP_EXIST(iLocal_91))
	{
		func_55(&iLocal_91);
		iLocal_91 = 0;
	}
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE = iLocal_98;
	func_55(&iLocal_91);
	func_77(0);
	func_69();
	func_68(&Local_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_117, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 1);
}

void func_68(var uParam0)//Position - 0x3435
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_69()//Position - 0x3461
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_85[iVar0]);
		iVar0++;
	}
}

int func_70()//Position - 0x3488
{
	func_71();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_71()//Position - 0x34A1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_74(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_73(PLAYER::PLAYER_PED_ID());
			if (func_72(iVar0) && (!func_29(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_72(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_72(int iParam0)//Position - 0x359E
{
	return iParam0 < 3;
}

int func_73(int iParam0)//Position - 0x35AA
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)//Position - 0x35E7
{
	if (func_72(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_75(int iParam0)//Position - 0x3611
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0);
}

void func_76(int iParam0)//Position - 0x362E
{
	iLocal_93 = iParam0;
	iLocal_92 = 1;
}

void func_77(bool bParam0)//Position - 0x363D
{
	func_78(44, bParam0);
	func_78(45, bParam0);
	func_78(46, bParam0);
	func_78(47, bParam0);
	func_78(48, bParam0);
	func_78(49, bParam0);
	func_78(50, bParam0);
}

void func_78(int iParam0, bool bParam1)//Position - 0x367D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_80(iParam0, 0))
		{
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_79(iParam0, 0, 0);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x36DA
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

bool func_80(int iParam0, int iParam1)//Position - 0x3715
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0], iParam1);
}

void func_81(struct<3> Param0, float fParam3, var uParam4, var uParam5)//Position - 0x3738
{
	struct<3> Var0;
	
	Var0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { Param0 - Var0 };
	*uParam5 = { Param0 + Var0 };
}

void func_82(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x3764
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = fParam7;
}

void func_83(var uParam0, int iParam1)//Position - 0x3788
{
	uParam0->f_5 = iParam1;
}

void func_84(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, float fParam14, struct<3> Param15, struct<3> Param18)//Position - 0x3796
{
	uParam0->f_3 = iParam1;
	*uParam0 = { Param2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { Param15 };
	uParam0->f_19[1 /*3*/] = { Param18 };
	uParam0->f_14 = { Param5 };
	func_82(&(uParam0->f_6), Param8, Param11, fParam14);
}

int func_85(int iParam0)//Position - 0x37EC
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0]), iVar1);
	return 1;
}

bool func_86()//Position - 0x3846
{
	return func_3() == 5;
}

void func_87()//Position - 0x3854
{
	iLocal_85[0] = joaat("vacca");
	iLocal_85[1] = joaat("surano");
	iLocal_85[2] = joaat("tornado2");
	iLocal_85[3] = joaat("superd");
	iLocal_85[4] = joaat("double");
	Local_69[0 /*3*/] = 1;
	Local_69[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	Local_69[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	Local_69[1 /*3*/] = 2;
	Local_69[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	Local_69[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	Local_69[2 /*3*/] = 3;
	Local_69[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	Local_69[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	Local_69[3 /*3*/] = 4;
	Local_69[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	Local_69[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	Local_69[4 /*3*/] = 5;
	Local_69[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	Local_69[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()//Position - 0x391A
{
	int iVar0;
	
	iLocal_98 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MISC::SET_BIT(&iLocal_98, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)//Position - 0x393F
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0];
}

void func_90()//Position - 0x396C
{
	int iVar0;
	
	func_55(&iLocal_91);
	func_77(0);
	func_69();
	func_68(&Local_42);
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE = iLocal_98;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_117, 0);
	if (iLocal_283 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_283);
		iLocal_283 = 0;
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_91(int iParam0)//Position - 0x3A49
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)//Position - 0x3AA3
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0] = iParam1;
}

