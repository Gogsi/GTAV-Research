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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
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
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_104 = 20;
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
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	bool bLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_244 = { 0, 0, 0 } ;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	int iLocal_257 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	Local_238 = { 0f, 0f, 0f };
	Local_241 = { Local_238 };
	Local_244 = { Local_238 };
	iLocal_249 = 3;
	iLocal_254 = 24818;
	iLocal_257 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_77();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!GlobalFunc_84())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (GlobalFunc_39(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if ((!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 0) && GlobalFunc_8329() == 1) && !func_68())
		{
			func_1();
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_247)
	{
		case 0:
			func_44();
			func_40();
			func_32();
			func_30();
			func_21();
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 1) && !bLocal_234)
			{
				iLocal_247++;
			}
			break;
		
		case 1:
			if (GlobalFunc_4986(&uLocal_228) > 5f)
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 3))
				{
					GlobalFunc_10732(28, iLocal_82[20], 1);
					GlobalFunc_10363(28);
					MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 3);
					GlobalFunc_4927(63, 1);
					iLocal_247++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5599(63))
			{
				iLocal_247++;
			}
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 0);
			GlobalFunc_4907();
			break;
	}
}




















void func_21()//Position - 0x1939
{
	switch (iLocal_80)
	{
		case 0:
			if (bLocal_234)
			{
				if (!GlobalFunc_489())
				{
					uLocal_231 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_231))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_231, "SHOW_BRIDGES_KNIVES_PROGRESS");
					GlobalFunc_726("PW_TITLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
					GlobalFunc_726("PW_PASS");
					GlobalFunc_726("PW_CHALLENGE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_26());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_248 = func_26();
					Global_24676 = iLocal_248;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_80 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || GlobalFunc_489()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_142()) || GlobalFunc_3062())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_231, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_80 = 2;
			}
			else
			{
				func_23();
				if (Global_24676 > iLocal_248)
				{
					iLocal_80 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || GlobalFunc_489()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_142()) || GlobalFunc_3062())
			{
				iLocal_80 = 3;
			}
			else
			{
				func_23();
				if (Global_24676 > iLocal_248)
				{
					iLocal_80 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_234 = false;
			iLocal_80 = 0;
			break;
	}
}

void func_22()//Position - 0x1AE3
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_231))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_231);
	}
}

void func_23()//Position - 0x1AFA
{
	if (!GlobalFunc_489())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_231))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_231, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}



int func_26()//Position - 0x1B97
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 1);
	}
	return iVar0;
}

int func_27()//Position - 0x1BBC
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}



void func_30()//Position - 0x1C3E
{
	if (GlobalFunc_890() && !iLocal_236)
	{
		iLocal_236 = 1;
		iLocal_78 = 7;
	}
	if (!GlobalFunc_890() && iLocal_236)
	{
		iLocal_236 = 0;
	}
}


void func_32()//Position - 0x1C83
{
	if (GlobalFunc_4986(&uLocal_225) > 3f)
	{
		GlobalFunc_6685(0);
		GlobalFunc_4987(&uLocal_225, 0f);
		GlobalFunc_4985(&uLocal_225);
	}
	if ((GlobalFunc_4986(&uLocal_225) <= 3f && GlobalFunc_116(0)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 177) || (PAD::IS_CONTROL_JUST_PRESSED(0, 24) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) || (GlobalFunc_890() && !iLocal_236))
		{
			GlobalFunc_4987(&uLocal_225, 0f);
			GlobalFunc_4985(&uLocal_225);
		}
	}
}








void func_40()//Position - 0x1EFC
{
	if (iLocal_237)
	{
		if ((GlobalFunc_4986(&uLocal_228) > 5f && func_43() >= 1) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 1))
		{
			switch (iLocal_250)
			{
				case 0:
					GlobalFunc_10732(28, iLocal_82[(20 - func_43())], 1);
					iLocal_251 = 0;
					iLocal_250++;
					break;
				
				case 1:
					if (iLocal_251 < 10)
					{
						GlobalFunc_5722(28, func_42(iLocal_251));
						iLocal_251++;
					}
					else
					{
						iLocal_250++;
					}
					break;
				
				case 2:
					GlobalFunc_10363(28);
					iLocal_250++;
					break;
				
				case 3:
					GlobalFunc_4987(&uLocal_228, 0f);
					GlobalFunc_4985(&uLocal_228);
					iLocal_237 = 0;
					iLocal_250 = 0;
					GlobalFunc_4907();
					break;
				}
			}
	}
}


char* func_42(int iParam0)//Position - 0x2074
{
	switch (iParam0)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26) && !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26) && MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_43()//Position - 0x285B
{
	return (20 - func_27());
}

void func_44()//Position - 0x286A
{
	switch (iLocal_78)
	{
		case 0:
			if (GlobalFunc_2796())
			{
				if ((!GlobalFunc_2561() && Global_2543373 == 0) && Global_2543374 == 0)
				{
					iLocal_78 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_232 = func_61(&iLocal_233, 60f, uLocal_252, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_253, iLocal_254);
			if (iLocal_232 == 0)
			{
				iLocal_232 = func_61(&iLocal_233, 60f, uLocal_255, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_256, iLocal_257);
				if (iLocal_232 == 0)
				{
					iLocal_78 = 7;
				}
				else
				{
					iLocal_78 = 4;
				}
			}
			else
			{
				iLocal_78 = 4;
			}
			break;
		
		case 4:
			if (!func_60(iLocal_233))
			{
				GlobalFunc_2792(1);
				iLocal_78 = 5;
			}
			else
			{
				if (!iLocal_235)
				{
				}
				else
				{
					iLocal_235 = 0;
				}
				iLocal_78 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_79)
			{
				case 0:
					GlobalFunc_159("PW_HELP_1", -1);
					if (GlobalFunc_666())
					{
						if (GlobalFunc_116(0))
						{
							GlobalFunc_2775(99);
							if (GlobalFunc_74("PW_HELP_1"))
							{
								HUD::CLEAR_THIS_PRINT("PW_HELP_1");
							}
							iLocal_79 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 176) || PAD::IS_CONTROL_JUST_PRESSED(0, 178))
					{
						GlobalFunc_2792(0);
						GlobalFunc_2794(99);
						if (GlobalFunc_74("PW_HELP_1"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_1");
						}
						iLocal_78 = 7;
					}
					break;
				
				case 1:
					GlobalFunc_159("PW_HELP_2", -1);
					if (GlobalFunc_2791(99))
					{
						iLocal_79 = 0;
						GlobalFunc_2792(0);
						GlobalFunc_2794(99);
						if (GlobalFunc_74("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_78 = 6;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
					{
						iLocal_79 = 0;
						GlobalFunc_2792(0);
						GlobalFunc_2794(99);
						if (GlobalFunc_74("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_78 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_52(iLocal_233);
			func_49(iLocal_81);
			STATS::STAT_SET_INT(joaat("num_hidden_packages_7"), func_27(), 1);
			bLocal_234 = true;
			GlobalFunc_8389(&uLocal_225);
			GlobalFunc_8389(&uLocal_228);
			iLocal_237 = 1;
			iLocal_78 = 7;
			break;
		
		case 7:
			func_45();
			iLocal_78 = 8;
			break;
		
		case 8:
			if (!GlobalFunc_2796())
			{
				iLocal_78 = 0;
			}
			break;
	}
}

void func_45()//Position - 0x2AAB
{
	iLocal_79 = 0;
	iLocal_81 = 0;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_235 = 0;
	Local_241 = { Local_238 };
	Local_244 = { Local_238 };
	GlobalFunc_2792(0);
	GlobalFunc_2794(99);
	if (GlobalFunc_74("PW_HELP_1"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_1");
	}
	if (GlobalFunc_74("PW_HELP_2"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_2");
	}
}




void func_49(int iParam0)//Position - 0x2B4C
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(92);
	Global_2408820[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), func_50(iParam0), 64);
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_50(int iParam0)//Position - 0x2B8B
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}


void func_52(int iParam0)//Position - 0x2CFC
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 4);
				iLocal_81 = 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 5);
				iLocal_81 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 6);
				iLocal_81 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 7);
				iLocal_81 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 8);
				iLocal_81 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 9);
				iLocal_81 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 10);
				iLocal_81 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 11);
				iLocal_81 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 14);
				iLocal_81 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 16);
				iLocal_81 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 18);
				iLocal_81 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 19);
				iLocal_81 = 13;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 21);
				iLocal_81 = 15;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 22);
				iLocal_81 = 16;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 23);
				iLocal_81 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 24);
				iLocal_81 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 25);
				iLocal_81 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 26);
				iLocal_81 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 29);
				iLocal_81 = 2;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 31);
				iLocal_81 = 20;
			}
			break;
		
		default:
			break;
	}
}








int func_60(int iParam0)//Position - 0x31C5
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_235 = 1;
			break;
	}
	return 1;
}

int func_61(int iParam0, float fParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, var uParam8, int iParam9)//Position - 0x34E9
{
	int iVar0;
	float fVar1;
	
	iVar0 = CAM::GET_FOCUS_PED_ON_SCREEN(fParam1, uParam2, fParam3, fParam4, fParam5, fParam6, fParam7, uParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && GlobalFunc_115(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_65(iVar0, 31086))
				{
					fVar1 = func_64(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_63(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_62(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_62(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_62(int iParam0)//Position - 0x35BA
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_cat_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_poodle"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pug"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rabbit_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_westy"):
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x36E9
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_64(int iParam0, int iParam1, int iParam2)//Position - 0x3727
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_65(int iParam0, int iParam1)//Position - 0x3783
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_244 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_233 == joaat("a_c_rabbit_01") || iLocal_233 == joaat("a_c_rat"))
	{
		Local_241 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		Local_241 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_241, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_244, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}



int func_68()//Position - 0x38A1
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}









void func_77()//Position - 0x3B11
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS, 2))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), 2);
	}
	iLocal_247 = 0;
	iLocal_236 = GlobalFunc_890();
	iLocal_82[0] = 249;
	iLocal_82[1] = 250;
	iLocal_82[2] = 251;
	iLocal_82[3] = 252;
	iLocal_82[4] = 253;
	iLocal_82[5] = 254;
	iLocal_82[6] = 255;
	iLocal_82[7] = 256;
	iLocal_82[8] = 257;
	iLocal_82[9] = 258;
	iLocal_82[10] = 259;
	iLocal_82[11] = 260;
	iLocal_82[12] = 261;
	iLocal_82[13] = 262;
	iLocal_82[14] = 263;
	iLocal_82[15] = 264;
	iLocal_82[16] = 265;
	iLocal_82[17] = 266;
	iLocal_82[18] = 267;
	iLocal_82[19] = 268;
	iLocal_82[20] = 269;
}

