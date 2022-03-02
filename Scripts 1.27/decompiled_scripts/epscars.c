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
	if (GlobalFunc_485(90) == 1)
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
	GlobalFunc_501(6);
	func_84(&Local_42, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_39, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	GlobalFunc_2830(&Local_42, 2);
	Local_42.f_4 = 3;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_39, 5f, 0, 0, 0, 0, 0);
	GlobalFunc_2361(&Local_108, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	GlobalFunc_2357(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	if (GlobalFunc_485(90) == 1)
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
		if (GlobalFunc_485(90) == 1)
		{
			func_88();
			func_90();
		}
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_MISSION_FLAG() || GlobalFunc_8329() != 0)
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
				GlobalFunc_10732(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				GlobalFunc_5901(2);
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
				GlobalFunc_4907();
				GlobalFunc_173(&uLocal_118, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				GlobalFunc_10641(&uLocal_118, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (GlobalFunc_74("EPS_DROP_HELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_19();
			}
		}
		if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL != 0)
		{
			iLocal_96 = (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL + 14 % GlobalFunc_91(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
			if (((CLOCK::GET_CLOCK_DAY_OF_MONTH() == iLocal_96 && !GlobalFunc_116(0)) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
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
			else if (!GlobalFunc_489())
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
			else if (!GlobalFunc_489())
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
	GlobalFunc_10732(2, Local_69[(5 - iParam0) /*3*/], 1);
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
			GlobalFunc_5722(2, func_13(iLocal_85[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	GlobalFunc_10363(2);
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	if (iVar0 == 0)
	{
	}
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



void func_19()//Position - 0x1656
{
	int iVar0;
	
	iLocal_284 = 0;
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
		GlobalFunc_4(23, (6 + func_3()));
	}
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
		if (GlobalFunc_234(uVar3[iVar0]))
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
	if (!GlobalFunc_234(uParam0))
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
		Var0 = { GlobalFunc_5778(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
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




void func_48(int iParam0, char* sParam1, bool bParam2)//Position - 0x22FD
{
	int iVar0;
	
	iVar0 = GlobalFunc_2329(iParam0);
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
		GlobalFunc_10363(iParam0);
	}
}




void func_52(int iParam0)//Position - 0x2C0C
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			GlobalFunc_146(&iLocal_91);
			GlobalFunc_159("EPS_DROP_PERSON", -1);
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
				if (GlobalFunc_234(iVar0))
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
				GlobalFunc_159("EPS_DROP_ESCAPE", -1);
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
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_101 = 0;
		return 0;
	}
	uVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!GlobalFunc_234(uVar1))
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
						GlobalFunc_159("EPS_DROP_FAIL", -1);
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



void func_56(int iParam0)//Position - 0x2D72
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			GlobalFunc_2830(&Local_42, 1);
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
						if (GlobalFunc_74("EPS_DROP_MESS"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						func_76(4);
						return;
					}
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
					}
					if (GlobalFunc_234(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
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
							if (GlobalFunc_4947(iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0))
								{
									GlobalFunc_164("EPS_DROP_EXIT", 7500, 1);
									iLocal_105 = 0;
									iLocal_103 = 1;
									iLocal_102 = 0;
								}
							}
						}
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_42.f_14, 0) < 3f)
						{
							GlobalFunc_146(&iLocal_91);
						}
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_42, 0) > (15f + 5f))
						{
							GlobalFunc_2830(&Local_42, 2);
							Local_42.f_4 = 3;
							iLocal_103 = 0;
							iLocal_102 = 0;
							iLocal_105 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_42) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							GlobalFunc_2830(&Local_42, 2);
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
								GlobalFunc_159("EPS_DROP_MESS", -1);
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
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (GlobalFunc_234(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != PLAYER::PLAYER_PED_ID())
				{
					func_76(3);
					return;
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_42, 0) < 15f)
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
			GlobalFunc_146(&iLocal_91);
			if (iLocal_104 == 0)
			{
				GlobalFunc_159("EPS_DROP_WANTED", -1);
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
					GlobalFunc_159("EPS_DROP_ESCAPE", -1);
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
			GlobalFunc_146(&iLocal_91);
			break;
		
		case 2:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0) && func_43(&Local_42))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 200.7367f);
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_42, 0) > (15f + 5f))
			{
				GlobalFunc_2830(&Local_42, 2);
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
			if (iLocal_100 == 0 && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_116 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
					GlobalFunc_159("EPS_DROP_HELP", -1);
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
	while (MISC::GET_MISSION_FLAG() || GlobalFunc_8329() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_66();
}

void func_66()//Position - 0x3310
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	GlobalFunc_2357(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	iLocal_98 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (GlobalFunc_2329(2) == -1)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()//Position - 0x33B4
{
	if (HUD::DOES_BLIP_EXIST(iLocal_91))
	{
		GlobalFunc_146(&iLocal_91);
		iLocal_91 = 0;
	}
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE = iLocal_98;
	GlobalFunc_146(&iLocal_91);
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







void func_76(int iParam0)//Position - 0x362E
{
	iLocal_93 = iParam0;
	iLocal_92 = 1;
}

void func_77(bool bParam0)//Position - 0x363D
{
	GlobalFunc_4927(44, bParam0);
	GlobalFunc_4927(45, bParam0);
	GlobalFunc_4927(46, bParam0);
	GlobalFunc_4927(47, bParam0);
	GlobalFunc_4927(48, bParam0);
	GlobalFunc_4927(49, bParam0);
	GlobalFunc_4927(50, bParam0);
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
	GlobalFunc_2361(&(uParam0->f_6), Param8, Param11, fParam14);
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


void func_90()//Position - 0x396C
{
	int iVar0;
	
	GlobalFunc_146(&iLocal_91);
	func_77(0);
	func_69();
	func_68(&Local_42);
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE = iLocal_98;
	if (func_86() || GlobalFunc_485(90) == 1)
	{
		GlobalFunc_585(90, 1);
		GlobalFunc_492(6);
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
		GlobalFunc_4(23, (6 + func_3()));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



