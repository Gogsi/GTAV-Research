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
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<485> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
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
	iLocal_35 = 202;
	iLocal_36 = 201;
	iLocal_37 = 24;
	iLocal_38 = 202;
	iLocal_39 = 25;
	iLocal_42 = -1;
	iLocal_44 = -1;
	iLocal_253 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_230();
	}
	func_229(3);
	func_218(&(Local_45.f_1), func_228(Global_1517C[1 /*19*/], Global_1517C[2 /*19*/]));
	func_217(&Local_45, 0);
	while (!func_216(4))
	{
		if (!Global_10BA2)
		{
			if (!func_215(86) && !func_214(14))
			{
				func_203(&Local_45, 32f, 35f);
			}
			else if (MISC::IS_BIT_SET(Local_45.f_1C1, 0))
			{
				func_201(&Local_45);
			}
			if (MISC::IS_BIT_SET(Local_45.f_1C1, 0))
			{
				if (func_200() == 86)
				{
					while (!func_201(&Local_45))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_198(&Local_45);
			func_189();
			func_145();
			if (func_143(0) || MISC::IS_BIT_SET(Local_45.f_1C1, 2))
			{
				func_67(&Local_45);
				func_4(&Local_45);
				func_3(&Local_45);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_230();
}

int func_1(int iParam0)//Position - 0x182
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
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1DC
{
	int iVar0;
	
	if (Global_10B99)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_1523B.f_8 = (Global_1523B.f_8 + iVar0);
}

void func_3(var uParam0)//Position - 0x21E
{
	if (MISC::IS_BIT_SET(Global_15167, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 15);
			MISC::SET_BIT(&(uParam0->f_1C1), 16);
			MISC::SET_BIT(&(uParam0->f_1C1), 14);
			MISC::CLEAR_BIT(&Global_15167, *uParam0);
		}
	}
}

void func_4(var uParam0)//Position - 0x26D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 2 && uParam0->f_1D0 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_1D0 == 4))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x2FB
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0)
		{
			func_64(uParam0);
			uParam0->f_1D0 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x32D
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			break;
		
		case 1:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C4 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_1A1, iParam2);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			func_17(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
			MISC::SET_BIT(&(uParam0->f_1C1), 9);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
			Global_17C49.f_1.f_6[*uParam0] = 1;
			HUD::CLEAR_HELP(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)//Position - 0x45A
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	uVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 13, 1);
	uVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 11, 1);
	uVar2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 32, 1);
	uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	uVar4 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
	uVar5 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 6, 1);
		uVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 7, 1);
		uVar2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 29, 1);
	}
	bVar6 = func_10(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (uParam0->f_1D0)
	{
		case 0:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				if (bVar6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(uVar2);
					func_8("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar5);
					func_8("PB_H_EXIT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(uVar0);
					func_8("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_9(uVar0);
					func_8("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar5);
					func_8("PB_H_UNDO");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar1);
					func_8("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_9(uVar1);
					func_8("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_9(uVar3);
					func_8("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_9(uVar4);
					func_8("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_9(uVar2);
				func_8("PB_H_ZOOM");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_9(uVar3);
				func_8("PB_H_LOOK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_9(uVar5);
				func_8("PB_H_UNDO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(uVar4);
				func_8("PB_H_CONF");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}
}

void func_8(char* sParam0)//Position - 0x936
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(var uParam0)//Position - 0x948
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x956
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)//Position - 0x9A3
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 18);
		if (((!func_12(&(uParam0->f_1.f_14[0 /*4*/])) && !func_12(&(uParam0->f_1.f_14[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
		{
			HUD::CLEAR_HELP(0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 18);
	}
}

bool func_12(char* sParam0)//Position - 0xA18
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13(char* sParam0, int iParam1)//Position - 0xA2B
{
	int iVar0;
	int iVar1;
	
	if (Global_176FC && iParam1)
	{
		if (func_12(uParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0, &(Global_17C49.f_5C53[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_17C49.f_5C53.f_91 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_17C49.f_5C53.f_91 - 1));
			Global_17C49.f_5C53.f_91 = (Global_17C49.f_5C53.f_91 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()//Position - 0xAD8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_17C49.f_5C53.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 0))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[0])
			{
				Global_17C49.f_5C53.f_92[0] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 1))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[1])
			{
				Global_17C49.f_5C53.f_92[1] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 2))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[2])
			{
				Global_17C49.f_5C53.f_92[2] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)//Position - 0xBF8
{
	StringCopy(&(Global_17C49.f_5C53[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_17C49.f_5C53[iParam0 /*16*/].f_4), "", 16);
	Global_17C49.f_5C53[iParam0 /*16*/].f_8 = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_9 = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_B = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_A = -1;
	Global_17C49.f_5C53[iParam0 /*16*/].f_C = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_D = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_E = 0;
	Global_17C49.f_5C53[iParam0 /*16*/].f_F = 0;
}

void func_16(int iParam0, int iParam1)//Position - 0xC92
{
	Global_17C49.f_5C53[iParam0 /*16*/] = { Global_17C49.f_5C53[iParam1 /*16*/] };
	Global_17C49.f_5C53[iParam0 /*16*/].f_4 = { Global_17C49.f_5C53[iParam1 /*16*/].f_4 };
	Global_17C49.f_5C53[iParam0 /*16*/].f_8 = Global_17C49.f_5C53[iParam1 /*16*/].f_8;
	Global_17C49.f_5C53[iParam0 /*16*/].f_A = Global_17C49.f_5C53[iParam1 /*16*/].f_A;
	Global_17C49.f_5C53[iParam0 /*16*/].f_9 = Global_17C49.f_5C53[iParam1 /*16*/].f_9;
	Global_17C49.f_5C53[iParam0 /*16*/].f_B = Global_17C49.f_5C53[iParam1 /*16*/].f_B;
	Global_17C49.f_5C53[iParam0 /*16*/].f_C = Global_17C49.f_5C53[iParam1 /*16*/].f_C;
	Global_17C49.f_5C53[iParam0 /*16*/].f_D = Global_17C49.f_5C53[iParam1 /*16*/].f_D;
	Global_17C49.f_5C53[iParam0 /*16*/].f_E = Global_17C49.f_5C53[iParam1 /*16*/].f_E;
	Global_17C49.f_5C53[iParam0 /*16*/].f_F = Global_17C49.f_5C53[iParam1 /*16*/].f_F;
}

void func_17(var uParam0)//Position - 0xDA2
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_A);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)//Position - 0xE75
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_1C1, 18))
		{
			switch (uParam0->f_1D0)
			{
				case 3:
					if (!Global_17C49.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_17C49.f_1[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE");
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_17C49.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_17C49.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1C1, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_1A1 < 5)
								{
									if (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
									{
										switch (Global_1517C[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()//Position - 0x10EA
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x110C
{
	if (Global_17C49.f_5C53.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1129
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x114A
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_17C49.f_5C53.f_91 < 9)
	{
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_4), sParam1, 16);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_9 = iParam5;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_B = iParam6;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_C = uParam2;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_D = iParam7;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_E = iParam8;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = -1;
		}
		Global_17C49.f_5C53.f_91++;
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)//Position - 0x131D
{
	if (!MISC::IS_BIT_SET(uParam0->f_1.f_12F, iParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x1377
{
	if (uParam0->f_1E3 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)//Position - 0x13D7
{
	struct<3> Var0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = MISC::GET_GAME_TIMER() + 1000;
	Var0 = { func_27(uParam0, &(uParam0->f_19B)) };
	func_26(&(uParam0->f_289), Var0, fParam2);
}

void func_26(var uParam0, struct<3> Param1, float fParam2)//Position - 0x141C
{
	uParam0->f_B = { Param1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)//Position - 0x143B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	Var7 = { uParam0->f_191 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = MISC::ATAN((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (Var7.f_2 - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = MISC::ATAN((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1520
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)//Position - 0x158B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1671
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)//Position - 0x16C2
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_32(*uParam0, uParam0->f_1.f_1D));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0x192F
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_78[iParam0], iParam1);
}

void func_33(var uParam0)//Position - 0x1949
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_34(var uParam0)//Position - 0x1B4B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x1B6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_1517C[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_1A1);
	func_36(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_25(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1CA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_1517C[iVar1 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_17C49.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_37(var uParam0, int iParam1)//Position - 0x1E2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_17C49.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1E72
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_76, iParam0);
}

bool func_39(int iParam0)//Position - 0x1E88
{
	return MISC::IS_BIT_SET(Global_17C49.f_1.f_74, iParam0);
}

int func_40(int iParam0)//Position - 0x1E9E
{
	return Global_150E2[iParam0 /*5*/];
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EAE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 0));
			func_8(func_57(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 1));
			func_8(func_57(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 2));
			func_8(func_57(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 0));
			func_8(func_53(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 1));
			func_8(func_53(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 0));
			func_8(func_48(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 1));
			func_8(func_48(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_42(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_42(int iParam0)//Position - 0x1FEA
{
	return Global_150E2[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)//Position - 0x1FFC
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)//Position - 0x2025
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x205F
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x207D
{
	return func_47(iParam1, Global_17C49.f_1.f_49[iParam0 /*3*/].f_1, Global_17C49.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, var uParam1, var uParam2)//Position - 0x20A7
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(uParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(uParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)//Position - 0x20FB
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)//Position - 0x210A
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)//Position - 0x21ED
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)//Position - 0x2216
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x2250
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)//Position - 0x226E
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)//Position - 0x227D
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)//Position - 0x22A6
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x22EF
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)//Position - 0x230D
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)//Position - 0x231C
{
	switch (Global_150E2[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)//Position - 0x2365
{
	return func_60(iParam0);
}

char* func_60(int iParam0)//Position - 0x2373
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)//Position - 0x2456
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x2475
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Global_1517C[iParam1 /*19*/].f_12, iParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_1517C[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1517C[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_1517C[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_1517C[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)//Position - 0x2520
{
	func_25(uParam0, &(uParam0->f_1.f_C), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_18(uParam0);
}

void func_64(var uParam0)//Position - 0x2556
{
	switch (uParam0->f_1D0)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	HUD::CLEAR_HELP(0);
}

int func_65(int iParam0)//Position - 0x2599
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_CB[iParam0];
}

int func_66(int iParam0)//Position - 0x25C6
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)//Position - 0x2617
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x2632
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_191) < 4f)
					{
						Var1 = { uParam0->f_191 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = MISC::ABSF((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = MISC::ABSF((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == -1)
			{
				func_132(&(uParam0->f_1C3), 3, "PB_H_ENT", 0, 0);
			}
			else if (func_131(uParam0->f_1C3, 1))
			{
				func_129(&(uParam0->f_1C3));
				func_115(uParam0);
			}
		}
		else if (uParam0->f_1C3 != -1)
		{
			func_129(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_77(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_1C1, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)//Position - 0x284F
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_191 };
			Var0 = { Var0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 134);
	}
	HUD::DISPLAY_RADAR(1);
	func_72(0);
	func_71();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(0);
	func_70(&(uParam0->f_289), 0, 1);
	func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
	HUD::CLEAR_HELP(1);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		SYSTEM::WAIT(0);
	}
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar1);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_64(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 7);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 2);
	Global_15166 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)//Position - 0x29D1
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, iParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
		}
		CAM::DESTROY_CAM(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_17 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_71()//Position - 0x2A6B
{
	Global_42CA.f_5 = 0;
}

void func_72(bool bParam0)//Position - 0x2A79
{
	if (bParam0)
	{
		func_76();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
		}
	}
	else if (Global_3839.f_1 == 1)
	{
		if (!Global_3839.f_1 == 0)
		{
			Global_3839.f_1 = 3;
		}
	}
}

void func_73(int iParam0)//Position - 0x2ADC
{
	if (Global_38D7)
	{
		func_75(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_3D4C = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 30);
	}
	if (!func_74())
	{
		Global_3839.f_1 = 3;
	}
}

int func_74()//Position - 0x2B4C
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)//Position - 0x2B73
{
	if (bParam0)
	{
		if (func_142(0))
		{
			Global_38D7 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_37FA);
			}
			Global_37F1 = { Global_3803[Global_3802 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
	else if (Global_38D7 == 1)
	{
		Global_38D7 = 0;
		Global_37F1 = { Global_380A[Global_3802 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37FA);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
}

void func_76()//Position - 0x2BE7
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_77(var uParam0)//Position - 0x2C10
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_1D2))
	{
		func_7(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_113();
	func_101(uParam0);
	func_85(uParam0);
	if (uParam0->f_1D0 == 1)
	{
		func_82(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_1C6 > MISC::GET_GAME_TIMER();
	func_78(&(uParam0->f_289), MISC::IS_BIT_SET(uParam0->f_1C1, 4), (MISC::IS_BIT_SET(uParam0->f_1C1, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_1D0 != 1)
			{
				if (uParam0->f_1D0 == 0 || (((!MISC::IS_BIT_SET(uParam0->f_1C1, 11) && !MISC::IS_BIT_SET(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1C1, 18) || uParam0->f_1D0 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_19E, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_191 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			MISC::SET_BIT(&(uParam0->f_1C1), 7);
		}
	}
}

void func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)//Position - 0x2E5A
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::FLOOR(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::FLOOR(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_80((iVar0[2] + uParam0->f_18), -127, 127);
		iVar0[3] = func_80((iVar0[3] + uParam0->f_19), -127, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < MISC::GET_GAME_TIMER())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	Var6 = { uParam0->f_8 + uParam0->f_B };
	if ((PAD::_IS_USING_KEYBOARD(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = Var6.x;
		uParam0->f_E.f_1 = Var6.f_1;
		uParam0->f_E.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_79((((Var6.x - uParam0->f_E) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_79((((Var6.f_1 - uParam0->f_E.f_1) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_79((((Var6.f_2 - uParam0->f_E.f_2) * 0.05f) * fVar5), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_79(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_79(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_79(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (PAD::_IS_USING_KEYBOARD(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_79(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_79(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
}

float func_79(float fParam0, float fParam1, float fParam2)//Position - 0x3303
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

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x332A
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x334F
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_82(var uParam0)//Position - 0x3453
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_1E3 == 0 && uParam0->f_1C7 > 3)
		{
			if (uParam0->f_1C4 == -1)
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 19))
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_1C4)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_84(uParam0, iVar1);
							if (MISC::IS_BIT_SET(uParam0->f_1.f_172, iVar1))
							{
								MISC::SET_BIT(&(uParam0->f_1C1), 19);
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_1C1), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x3532
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iParam0]), iParam1);
	}
}

void func_84(var uParam0, int iParam1)//Position - 0x35B7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_25(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_1C4 = -1;
}

void func_85(var uParam0)//Position - 0x35FE
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_1E3 > 0)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1C1, 13))
			{
				if (func_86(&(uParam0->f_1E4), &(uParam0->f_1D3[0 /*5*/]), &(uParam0->f_1D3[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_1C7 = 0;
					if (uParam0->f_1D3[0 /*5*/].f_4)
					{
						MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1C1), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 13);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 11))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
			}
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 13))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 13);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_86(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x37B5
{
	func_100(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D55 = 0;
	Global_3D5A = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_280001 = 0;
	return func_87(sParam2, iParam3, 0);
}

int func_87(char* sParam0, int iParam1, bool bParam2)//Position - 0x3803
{
	Global_3D4D = 0;
	if (Global_3D4C == 0 || Global_3D4E == 2)
	{
		if (Global_3D4C != 0)
		{
			if (iParam1 > Global_3D4E)
			{
				if (Global_3D53 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3839.f_1 = 3;
					Global_3D4C = 0;
					Global_3D4D = 1;
					Global_3D81 = 0;
					Global_3D48 = 0;
					Global_3D49 = 0;
					Global_3D57 = 0;
					Global_3D56 = 0;
					Global_3838 = 0;
				}
				else
				{
					func_99();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_97();
		Global_3A85 = { Global_3B2A };
		Global_3D52 = Global_3D53;
		Global_3D59 = Global_3D5A;
		Global_280002 = Global_280001;
		Global_3D5B = { Global_3D6B };
		Global_3D54 = Global_3D55;
		Global_412A = Global_412B;
		Global_4132 = { Global_4138 };
		Global_412C = Global_412D;
		Global_412E = Global_412F;
		Global_4130 = Global_4131;
		Global_3BCF.f_172 = Global_4129;
		Global_3BCF.f_170 = Global_4127;
		Global_3BCF.f_171 = Global_4128;
		Global_3D48 = Global_3D49;
		if (Global_3D52)
		{
			MISC::CLEAR_BIT(&Global_8D7, 20);
			MISC::CLEAR_BIT(&Global_8D8, 17);
			MISC::CLEAR_BIT(&Global_8D9, 0);
			if (bParam2)
			{
				func_91();
				if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_3839.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_3817 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_90())
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
				if (!Global_10A95)
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
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_3839.f_1)
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
				if (MISC::IS_BIT_SET(Global_8D7, 9))
				{
					return 0;
				}
			}
			func_89();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_88();
		return 1;
	}
	if (Global_3D4C == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3D4E || iParam1 == Global_3D4E)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_99();
	}
	return 0;
}

void func_88()//Position - 0x3ACF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_38E0[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_3D4C = 1;
}

void func_89()//Position - 0x3B00
{
	Global_3D81 = Global_3D80;
	Global_3D7B = Global_3D7C;
	Global_3DAA = { Global_3D9E };
	Global_3DB0 = { Global_3DA4 };
	Global_3D83 = Global_3D82;
	Global_3DC8 = { Global_3DB6 };
	Global_3DCE = { Global_3DBC };
	Global_3DD4 = { Global_3DC2 };
	Global_3DDA = { Global_3DE0 };
	Global_62A = Global_62B;
	Global_62C = Global_62D;
	Global_3D57 = Global_3D58;
	Global_3D59 = Global_3D5A;
	Global_3D5B = { Global_3D6B };
	Global_3D50 = Global_3D51;
	Global_4144 = 0;
	Global_3D7D = 0;
	Global_3D7E = 0;
	MISC::CLEAR_BIT(&Global_8D8, 16);
}

int func_90()//Position - 0x3B95
{
	int iVar0;
	int iVar1;
	
	if (Global_10A95)
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

void func_91()//Position - 0x3C2E
{
	if (func_214(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[0 /*29*/])
			{
				Global_3839 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[1 /*29*/])
			{
				Global_3839 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[2 /*29*/])
			{
				Global_3839 = 2;
			}
			else
			{
				Global_3839 = 0;
			}
		}
	}
	else
	{
		Global_3839 = func_92();
		if (Global_3839 == 145)
		{
			Global_3839 = 3;
		}
		if (Global_10A95)
		{
			Global_3839 = 3;
		}
		if (Global_3839 > 3)
		{
			Global_3839 = 3;
		}
	}
}

var func_92()//Position - 0x3CCF
{
	func_93();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_93()//Position - 0x3CE8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_95(PLAYER::PLAYER_PED_ID());
			if (func_94(iVar0) && (!func_214(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_94(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

bool func_94(int iParam0)//Position - 0x3DE5
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x3DF1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)//Position - 0x3E2E
{
	if (func_94(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()//Position - 0x3E58
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3A85[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3A85[iVar0 /*10*/].f_1), "", 24);
		Global_3A85[iVar0 /*10*/].f_7 = 0;
		Global_3A85[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3A85.f_A1 = -99;
	Global_3A85.f_A2 = { 0f, 0f, 0f };
}

bool func_98(int iParam0, int iParam1)//Position - 0x3EAF
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

void func_99()//Position - 0x3EEA
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3F41
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = uParam5;
	if (iParam3 == 0)
	{
		Global_4127 = 1;
		Global_4125 = 0;
	}
	else
	{
		Global_4127 = 0;
		Global_4125 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4128 = 1;
		Global_4126 = 0;
	}
	else
	{
		Global_4128 = 0;
		Global_4126 = 1;
	}
}

void func_101(var uParam0)//Position - 0x3F97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_1C5++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_7(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)) || (PAD::_IS_USING_KEYBOARD(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39))))
		{
			func_111();
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 12))
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 13);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 11);
				MISC::CLEAR_BIT(&(uParam0->f_1C1), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 12);
		}
	}
	func_81(&(uParam0->f_1CA[0]), &(uParam0->f_1CA[1]), &(uParam0->f_1CA[2]), &(uParam0->f_1CA[3]), 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uParam0->f_1CA[2] = (uParam0->f_1CA[2] / 10);
		uParam0->f_1CA[3] = (uParam0->f_1CA[3] / 10);
		uParam0->f_1CA[2] = func_80((uParam0->f_1CA[2] + uParam0->f_289.f_18), -127, 127);
		uParam0->f_1CA[3] = func_80((uParam0->f_1CA[3] + uParam0->f_289.f_19), -127, 127);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[2];
	uParam0->f_289.f_19 = uParam0->f_1CA[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_1CA[3] = -uParam0->f_1CA[3];
	}
	if (uParam0->f_1C6 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_1CA[2] = 0;
		uParam0->f_1CA[3] = 0;
	}
	if (uParam0->f_1D0 == 0 || uParam0->f_1D0 == 4)
	{
		if (uParam0->f_1C5 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 4);
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 10))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_1C1, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1C8) > 200)
			{
				if ((uParam0->f_1D0 == 2 || uParam0->f_1D0 == 3) || uParam0->f_1D0 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_1C9) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[3 /*2*/], 1);
						uParam0->f_1C9 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_1D0 == 2)
				{
					if ((((uParam0->f_1CA[1] < -85 || uParam0->f_1CA[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[1] > 85 || uParam0->f_1CA[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 3)
				{
					if ((uParam0->f_1CA[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_1A0 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_1A0 = 0;
						if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_1A0 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_1A0 = 1;
						if (MISC::IS_BIT_SET(uParam0->f_1C1, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_19() || MISC::IS_BIT_SET(uParam0->f_1C1, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37)))
					{
						switch (uParam0->f_1D0)
						{
							case 3:
								if (!func_19())
								{
									if (!MISC::IS_BIT_SET(uParam0->f_1C1, 9))
									{
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
											Global_17C49.f_1[*uParam0] = 1;
											HUD::CLEAR_HELP(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_1C2 < Global_1517C[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!func_110(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_1517C[iVar1 /*19*/])
								{
									if (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2] == 0 || func_40(Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_1517C[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_150E2[iVar3 /*5*/] != Global_1517C[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!MISC::IS_BIT_SET(Global_17C49.f_1.f_74, iVar3))
													{
														bVar4 = false;
													}
													if (MISC::IS_BIT_SET(Global_17C49.f_1.f_76, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_17C49.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_1AB = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)))
					{
						switch (uParam0->f_1D0)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_1C2 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_35(uParam0, uParam0->f_1C2, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_1AB = 0;
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
								}
								else if (!func_216(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_60)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_1E[iVar7] != 13)
											{
												func_107(*uParam0, uParam0->f_1.f_1E[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0;
										func_11(uParam0, 1);
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										uParam0->f_1D1 = 0;
										func_106(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_1E[iVar9] != 13)
										{
											func_107(*uParam0, uParam0->f_1.f_1E[iVar9], 0);
										}
										iVar9++;
									}
									func_105(8, 0);
									func_83(5, 1, 0);
									uParam0->f_1AB = 0;
									func_11(uParam0, 1);
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
									func_5(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_1C2 >= Global_1517C[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_1C2 > uParam0->f_19F))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1C1, 17))
			{
				iVar10 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
				uParam0->f_1D1 = Global_1517C[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_35(uParam0, uParam0->f_1C2, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 17);
		}
		uParam0->f_1C9 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[1 /*4*/])))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (uParam0->f_2A8 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2A8))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2A8);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_1E[iVar11] != 13)
			{
				func_107(*uParam0, uParam0->f_1.f_1E[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_1517C[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 10);
				uParam0->f_1C2++;
			}
			HUD::CLEAR_HELP(0);
			uParam0->f_2A8 = 0;
		}
	}
	if (uParam0->f_2A9 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2A9))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2A9);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_17C49.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1C2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			MISC::CLEAR_BIT(&(uParam0->f_1C1), 17);
			func_103(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = MISC::GET_GAME_TIMER();
			uParam0->f_1C9 = uParam0->f_1C8;
			MISC::SET_BIT(&(uParam0->f_1C1), 10);
			if (!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
			{
				HUD::CLEAR_HELP(0);
			}
			uParam0->f_2A9 = 0;
		}
	}
	if (uParam0->f_2AA != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_2AA))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_2AA);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0;
		}
	}
	if (uParam0->f_1AB != 0)
	{
		func_102(uParam0, uParam0->f_1AB);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x4D60
{
	if (!func_19())
	{
		if (uParam0->f_1E3 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 16);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (MISC::IS_BIT_SET(Global_17C49.f_1.f_77, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 17);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x4F7C
{
	if (!MISC::IS_BIT_SET(uParam0->f_1CF, iParam1))
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_1.f_77, iParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 3))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 6))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 4))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 2))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 5))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 15))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 3))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 2))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 14))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[28 /*2*/], 1);
								}
							}
							else if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 14))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 18))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 6))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 17))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 12))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 10))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 0))
								{
									if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 7))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 11))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 1))
								{
									if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 8))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 13))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 19))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 4))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 16))
							{
								if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 5))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (MISC::IS_BIT_SET(Global_17C49.f_1.f_75, 20))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_1CF), iParam1);
	}
}

void func_104(int iParam0)//Position - 0x5713
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_17C49.f_1CAD.f_63.f_CB[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1)//Position - 0x580E
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_CB[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_CB[iParam0] = iParam1;
}

void func_106(int iParam0, int iParam1)//Position - 0x5853
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_3A[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x5898
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1.f_78[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_15167, iParam0);
}

void func_108(int iParam0)//Position - 0x58D6
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[7];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 0);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 1);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 2);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 3);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 4);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 5);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 6);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[9];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 7);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 8);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 11:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 9);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 17);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_17C49.f_1CAD.f_63.f_CB[10];
			iVar0 = 0;
			while (iVar0 < Global_1517C[iVar1 /*19*/])
			{
				switch (Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 10);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 11);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 14);
						break;
					
					case 5:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 12);
						break;
					
					case 3:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 13);
						break;
					
					case 4:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 17);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 14);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 15);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 19);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 16);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 18);
						break;
					
					case 13:
						MISC::SET_BIT(&(Global_17C49.f_1.f_75), 20);
						MISC::CLEAR_BIT(&(Global_17C49.f_1.f_77), 16);
						break;
				}
				MISC::SET_BIT(&(Global_17C49.f_1.f_77), Global_17C49.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)//Position - 0x5C53
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 0);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 1);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 2);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 3);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 4);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 5);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 6);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 7);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 8);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 9);
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 10);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 11);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 12);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 13);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 14);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 15);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 16);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 17);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 18);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 19);
			MISC::CLEAR_BIT(&(Global_17C49.f_1.f_75), 20);
			break;
	}
}

bool func_110(bool bParam0)//Position - 0x5D9B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_111()//Position - 0x5DC6
{
	Global_38DE = 0;
	func_112();
}

void func_112()//Position - 0x5DD6
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

void func_113()//Position - 0x5DF7
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_114();
}

void func_114()//Position - 0x5E07
{
	Global_42CA.f_86 = 1;
}

void func_115(var uParam0)//Position - 0x5E15
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	uParam0->f_1CF = 0;
	MISC::SET_BIT(&(uParam0->f_1C1), 9);
	func_11(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_8C75 == 1)
			{
				func_120(PLAYER::PLAYER_PED_ID());
			}
			Var0 = { uParam0->f_191 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_194);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
		}
		MISC::SET_BIT(&(uParam0->f_1C1), 7);
	}
	HUD::DISPLAY_RADAR(0);
	func_72(1);
	func_119();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_191, 5f, 1, 1, 0, 0);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_191, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_118(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
	}
	INTERIOR::_0xAF348AFCB575A441(&(Global_15129[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	}
	func_117(0);
	func_116();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	uParam0->f_1D2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 10, 1);
	MISC::SET_BIT(&(uParam0->f_1C1), 2);
	Global_15166 = 1;
	func_6(uParam0, uParam0->f_1D0, 0);
}

void func_116()//Position - 0x6004
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_17C49.f_5C53.f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17C49.f_5C53.f_92[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_117(bool bParam0)//Position - 0x6062
{
	if (!bParam0)
	{
		Global_176FE = MISC::GET_GAME_TIMER() + 250;
	}
	Global_176FB = bParam0;
}

void func_118(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x6080
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_119()//Position - 0x6178
{
	Global_42CA.f_5 = 1;
}

void func_120(int iParam0)//Position - 0x6186
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)//Position - 0x61DF
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8B96[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8B96[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_8C73 = 0;
		}
	}
	Global_8B96[iParam0 /*5*/] = 13;
	Global_8B96[iParam0 /*5*/].f_1 = 0;
	Global_8B96[iParam0 /*5*/].f_2 = 0;
	Global_8B96[iParam0 /*5*/].f_3 = 0;
	Global_8B96[iParam0 /*5*/].f_4 = 0;
	Global_8B95 = (Global_8B95 - 1);
	if (Global_8B95 < 0)
	{
		Global_8B95 = 0;
	}
}

int func_122(int iParam0)//Position - 0x6262
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8B96[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0x6293
{
	func_124(iParam0, iParam1, iParam2, 0, 0);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x62A7
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
	if (iVar0 == -1)
	{
		return;
	}
	Global_8C01[iVar0 /*5*/] = iParam0;
	Global_8C01[iVar0 /*5*/].f_1 = iParam1;
	Global_8C01[iVar0 /*5*/].f_2 = iParam2;
	Global_8C01[iVar0 /*5*/].f_3 = iParam3;
	Global_8C01[iVar0 /*5*/].f_4 = iParam4;
}

int func_125()//Position - 0x631E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8C01[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x634F
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x636A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				if (iParam1 == Global_8C01[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0)//Position - 0x63B6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8BB0[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129(var uParam0)//Position - 0x63FF
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_130(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_130(int iParam0)//Position - 0x6456
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_131(int iParam0, bool bParam1)//Position - 0x6491
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_142(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/] == 1 && Global_8B1D[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_8B1D[iVar0 /*18*/].f_10)
				{
					return 0;
				}
			}
			Global_8B1D[iVar0 /*18*/].f_4 = 1;
			Global_8B1D[iVar0 /*18*/].f_10 = 1;
			return 1;
		}
		else
		{
			if (Global_8B1D[iVar0 /*18*/] == 0)
			{
			}
			if (Global_8B1D[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x6549
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_129(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/] = 1;
			Global_8B1D[iVar0 /*18*/].f_1 = Global_8B92;
			Global_8B92++;
			Global_8B1D[iVar0 /*18*/].f_3 = 0;
			Global_8B1D[iVar0 /*18*/].f_10 = 0;
			Global_8B1D[iVar0 /*18*/].f_4 = 0;
			Global_8B1D[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_8B1D[iVar0 /*18*/].f_7), sParam2, 16);
			Global_8B1D[iVar0 /*18*/].f_5 = iParam3;
			Global_8B1D[iVar0 /*18*/].f_11 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8B1D[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8B1D[iVar0 /*18*/].f_B = 1;
				StringCopy(&(Global_8B1D[iVar0 /*18*/].f_C), sParam4, 16);
			}
			else
			{
				Global_8B1D[iVar0 /*18*/].f_B = 0;
			}
			*uParam0 = Global_8B1D[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_133(int iParam0)//Position - 0x6654
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_92();
				if (!func_94(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_17890) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_141()) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_17890) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_17890) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_141()) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_141()) || func_138()) || Global_17890) || Global_5F7E) || func_140()) || Global_8C75) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_141()) || Global_17890) || Global_5F7E) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_134()//Position - 0x6D71
{
	return Global_15F91.f_1;
}

int func_135()//Position - 0x6D7F
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_136()//Position - 0x6DA5
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x6DBF
{
	if (Global_10B99)
	{
		return 1;
	}
	else if (Global_D5D8 && !Global_D5DE)
	{
		return 1;
	}
	return 0;
}

bool func_138()//Position - 0x6DE9
{
	return Global_15F9E.f_123 > 0;
}

bool func_139()//Position - 0x6DFA
{
	return Global_15F9E.f_122 > 0;
}

var func_140()//Position - 0x6E0B
{
	return Global_14143C;
}

int func_141()//Position - 0x6E17
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x6E33
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
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
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)//Position - 0x6E8D
{
	return func_144(iParam0, Global_8861);
}

int func_144(int iParam0, int iParam1)//Position - 0x6E9E
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_145()//Position - 0x707F
{
	int iVar0;
	struct<3> Var1;
	
	if (func_216(17))
	{
		if (!MISC::IS_BIT_SET(uLocal_40, 11))
		{
			CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4P2", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			HUD::REQUEST_ADDITIONAL_TEXT("JHS1AUD", 6);
			MISC::SET_BIT(&uLocal_40, 11);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_216(18))
	{
		if (func_216(17))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_244, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_244, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_247))
					{
						ENTITY::DETACH_ENTITY(iLocal_247, 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_247, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_247, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));
				func_72(1);
				func_117(1);
				func_181(1, 1, 1, 0);
				iLocal_42 = -1;
				CUTSCENE::START_CUTSCENE(0);
				if (func_110(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				func_106(17, 0);
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_113();
			if (MISC::IS_BIT_SET(uLocal_40, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_247, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_245, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_244, 1);
				}
				MISC::CLEAR_BIT(&uLocal_40, 7);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_244))
				{
					iVar0 = iLocal_244;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
					iLocal_254 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&uLocal_40, 18);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var1 = { 709.3766f, -964.2602f, 29.3954f };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 261.7831f);
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						}
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
		}
		else if (iLocal_42 == -1 && !func_110(0))
		{
			iLocal_42 = MISC::GET_GAME_TIMER() + 1500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_42 || func_110(0))
		{
			if (func_110(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_D5DE = 0;
				Global_15F91 = 0;
				func_180();
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
			func_72(0);
			func_181(0, 1, 1, 0);
			func_178(&(Global_17C49.f_6C1.f_21B), 86);
			func_153(&(Global_17C49.f_6C1.f_21B), 86);
			func_152(&iLocal_44);
			MISC::CLEAR_BIT(&uLocal_40, 1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_248, 0);
			if (iLocal_253 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_253))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_253);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_18A - Local_45.f_1.f_18D, Local_45.f_1.f_18A + Local_45.f_1.f_18D, 1, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_106(18, 0);
			func_146(0, 0);
		}
	}
	else if (!func_216(17))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (MISC::IS_BIT_SET(uLocal_40, 18))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		if (MISC::GET_GAME_TIMER() > iLocal_254 + 1000)
		{
			MISC::CLEAR_BIT(&uLocal_40, 18);
		}
	}
}

void func_146(int iParam0, bool bParam1)//Position - 0x7475
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1))
		{
			if (!func_38(iVar1))
			{
				if (!(iVar1 == 11 && iParam0 == 3))
				{
					switch (iVar1)
					{
						case 1:
							func_150(4, 1);
							break;
						
						case 4:
							func_150(8, 1);
							break;
						
						case 6:
							func_150(10, 1);
							break;
						
						case 7:
							func_150(1, 1);
							break;
						
						case 8:
							func_150(3, 1);
							break;
						
						case 9:
							func_150(6, 1);
							break;
						
						case 10:
							func_150(9, 1);
							break;
						
						case 12:
							func_150(11, 1);
							break;
						
						case 13:
							func_150(12, 1);
							break;
						
						case 11:
							if (func_149(91))
							{
								func_150(0, 1);
							}
							break;
						
						case 5:
							if (func_149(91))
							{
								func_150(2, 1);
							}
							break;
						
						case 3:
							if (func_149(67))
							{
								func_150(5, 1);
							}
							break;
						
						case 2:
							if (func_149(77))
							{
								func_150(7, 1);
							}
							break;
						}
					}
				}
		}
		iVar0++;
	}
	if (!bParam1)
	{
		if (!func_148(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_147("DI_FEED_HST");
	}
}

void func_147(char* sParam0)//Position - 0x75D9
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_148(int iParam0)//Position - 0x75FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5C53.f_96[iVar1], iVar0);
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x7640
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_150(int iParam0, bool bParam1)//Position - 0x766C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_73A7.f_1, iVar0))
		{
			MISC::SET_BIT(&(Global_17C49.f_73A7.f_1), iVar0);
			if (!bParam1)
			{
				func_147(func_151(iParam0));
			}
		}
	}
}

char* func_151(int iParam0)//Position - 0x76BE
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

void func_152(int iParam0)//Position - 0x77A1
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_883B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_883A = 0;
	Global_883C = 0;
	Global_8861 = 15;
	Global_D5DB = 0;
	Global_D5DC = 0;
}

void func_153(var uParam0, int iParam1)//Position - 0x77DE
{
	switch (iParam1)
	{
		case 17:
			func_154(uParam0, 0, 12);
			break;
		
		case 19:
			func_154(uParam0, 1, 13);
			break;
		
		case 29:
			func_154(uParam0, 1, 14);
			break;
		
		case 30:
			func_154(uParam0, 2, 15);
			func_154(uParam0, 1, 29);
			break;
		
		case 32:
			func_154(uParam0, 1, 16);
			func_154(uParam0, 0, 17);
			break;
		
		case 39:
			func_154(uParam0, 0, 21);
			func_154(uParam0, 1, 20);
			break;
		
		case 31:
			func_154(uParam0, 0, 18);
			break;
		
		case 20:
			func_154(uParam0, 2, 22);
			break;
		
		case 66:
			func_154(uParam0, 1, 23);
			break;
		
		case 68:
			func_154(uParam0, 1, 24);
			break;
		
		case 70:
			func_154(uParam0, 1, 67);
			break;
		
		case 8:
			func_154(uParam0, 1, 25);
			func_154(uParam0, 2, 26);
			break;
		
		case 67:
			func_154(uParam0, 1, 27);
			break;
		
		case 9:
			func_154(uParam0, 2, 28);
			break;
		
		case 38:
			func_154(uParam0, 2, 30);
			func_154(uParam0, 1, 19);
			break;
		
		case 83:
			func_154(uParam0, 2, 33);
			break;
		
		case 45:
			func_154(uParam0, 1, 35);
			break;
		
		case 64:
			func_154(uParam0, 0, 36);
			func_154(uParam0, 1, 37);
			break;
		
		case 91:
			func_154(uParam0, 0, 41);
			break;
		
		case 42:
			func_154(uParam0, 0, 58);
			Global_15D9F[0 /*74*/] = 0;
			func_154(uParam0, 2, 59);
			Global_15D9F[2 /*74*/] = 0;
			break;
		
		case 41:
			func_154(uParam0, 1, 42);
			func_154(uParam0, 2, 42);
			break;
		
		case 15:
			func_154(uParam0, 0, 46);
			func_154(uParam0, 1, 47);
			break;
		
		case 16:
			func_154(uParam0, 0, 48);
			break;
		
		case 48:
			func_154(uParam0, 1, 50);
			func_154(uParam0, 2, 51);
			break;
		
		case 74:
			func_154(uParam0, 0, 52);
			func_154(uParam0, 1, 66);
			break;
		
		case 76:
			func_154(uParam0, 1, 53);
			func_154(uParam0, 2, 54);
			func_154(uParam0, 0, 62);
			break;
		
		case 75:
			func_154(uParam0, 0, 61);
			func_154(uParam0, 1, 31);
			break;
		
		case 69:
			func_154(uParam0, 1, 63);
			break;
		
		case 84:
			func_154(uParam0, 0, 68);
			func_154(uParam0, 2, 69);
			break;
		
		case 85:
			func_154(uParam0, 0, 64);
			func_154(uParam0, 2, 65);
			break;
		
		case 93:
			func_154(uParam0, 1, 38);
			func_154(uParam0, 2, 39);
			break;
		
		case 11:
			func_154(uParam0, 2, 55);
			break;
		
		case 77:
			func_154(uParam0, 1, 56);
			func_154(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_154(var uParam0, int iParam1, int iParam2)//Position - 0x7B27
{
	int iVar0;
	struct<74> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
	{
		iVar0 = Global_17C49.f_4193[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_17C49.f_4193[iParam1] = iParam2;
	uParam0->f_5F4[iParam1] = func_167();
	if (!func_166(iParam2, &(uParam0->f_5F8[iParam1 /*3*/]), &(uParam0->f_602[iParam1])))
	{
		return 0;
	}
	if (!func_165(uParam0->f_5F8[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!func_165(Global_159DA[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_B = 12;
			Var1.f_1F = 25;
			Var1.f_39 = 2;
			if (func_155(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_15D9F[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_606[iParam1] = 0;
	uParam0->f_60A[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_614[iParam1] = 0;
	return 1;
}

int func_155(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7C45
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_3C = 255;
	uParam2->f_3D = 255;
	uParam2->f_3E = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_15E86[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1))
				{
					if (Global_15E7E[iParam0] == 1)
					{
						*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
						*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_15D9F[iParam0 /*74*/] };
			if (Global_15E7E[iParam0] != 2)
			{
				*uParam3 = { Global_15E86[iParam0 /*3*/] - Global_17C49.f_6C1.f_21B.f_5F8[iParam0 /*3*/] };
				*uParam4 = (Global_15E90[iParam0] - Global_17C49.f_6C1.f_21B.f_602[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_155(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_155(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_157(iParam0, uParam2, 2);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_49 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_49 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_157(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_49 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_157(iParam0, uParam2, 1);
			uParam2->f_43 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_157(iParam0, uParam2, 2);
			uParam2->f_43 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_49 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_49 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_49 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_49 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_49 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_49 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_49 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_49 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_49 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			uParam2->f_41 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_155(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_49 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_155(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_155(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_157(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_155(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_155(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_155(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_49 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0] = 0;
			uParam2->f_B[1] = 0;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 0;
			uParam2->f_B[4] = 0;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_155(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_155(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_157(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_155(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_155(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_155(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_155(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_157(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_155(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_156(iParam0, uParam2, 2);
			uParam2->f_43 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_49 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_155(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_155(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_155(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_155(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_155(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_155(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_155(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_43 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_156(iParam0, uParam2, 1);
			uParam2->f_43 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_155(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_155(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_B[0] = 0;
				uParam2->f_B[1] = 0;
				uParam2->f_B[2] = 1;
				uParam2->f_B[3] = 0;
				uParam2->f_B[4] = 0;
				uParam2->f_B[5] = 1;
				uParam2->f_B[6] = 1;
				uParam2->f_B[7] = 1;
				uParam2->f_B[8] = 1;
			}
			else
			{
				uParam2->f_49 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_49 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_49 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_49 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_49 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_49 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_49 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_159DA[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_157(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_156(int iParam0, var uParam1, int iParam2)//Position - 0xB44D
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_B = 12;
	Var1.f_1F = 25;
	Var1.f_39 = 2;
	Var1.f_40 = 1;
	Var1.f_3C = 255;
	Var1.f_3D = 255;
	Var1.f_3E = 255;
	Var1.f_49 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_17C49.f_1CAD.f_63.f_3A[128] && !Global_17C49.f_1CAD.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_B[0] = 1;
					StringCopy(&(Var1.f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "BETTY 32", 16);
					if (Global_17C49.f_1CAD.f_63.f_3A[119])
					{
						Var1.f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_A = 1;
					StringCopy(&(Var1.f_1B), "FC1988", 16);
					Var1.f_B[0] = 1;
					Var1.f_B[1] = 1;
					Var1.f_B[2] = 1;
					Var1.f_B[3] = 1;
					Var1.f_B[4] = 1;
					Var1.f_B[5] = 1;
					Var1.f_B[6] = 1;
					Var1.f_B[7] = 1;
					Var1.f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_157(int iParam0, var uParam1, int iParam2)//Position - 0xB6C5
{
	if (Global_15D9F[iParam0 /*74*/] == 0)
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("blimp"))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (func_164(iParam0))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_15D9F[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_15D9F[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_15D9F[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_15D9F[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_15D9F[iParam0 /*74*/]))
		{
			func_156(iParam0, uParam1, iParam2);
			uParam1->f_43 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_15D9F[iParam0 /*74*/]))
		{
			func_156(iParam0, uParam1, iParam2);
			uParam1->f_43 = iParam2;
			return 1;
		}
	}
	if (!func_158(Global_15D9F[iParam0 /*74*/]))
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_156(iParam0, uParam1, iParam2);
		uParam1->f_43 = iParam2;
		if (Global_15D9F[iParam0 /*74*/] != *uParam1)
		{
			*uParam1 = { Global_15D9F[iParam0 /*74*/] };
			uParam1->f_43 = 0;
			return 0;
		}
	}
	else
	{
		func_156(iParam0, uParam1, 1);
		uParam1->f_43 = 1;
		if (Global_15D9F[iParam0 /*74*/] == *uParam1)
		{
			func_156(iParam0, uParam1, 1);
			uParam1->f_43 = 1;
			return 1;
		}
		func_156(iParam0, uParam1, 2);
		uParam1->f_43 = 2;
		if (Global_15D9F[iParam0 /*74*/] == *uParam1)
		{
			func_156(iParam0, uParam1, 2);
			uParam1->f_43 = 2;
			return 1;
		}
		*uParam1 = { Global_15D9F[iParam0 /*74*/] };
		uParam1->f_43 = 0;
		return 0;
	}
	func_156(iParam0, uParam1, iParam2);
	uParam1->f_43 = iParam2;
	return 1;
}

int func_158(int iParam0)//Position - 0xB8FB
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_163())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_162() && !func_161()) && !func_160()) && !func_159()) && !func_163())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_160())
		{
			return 0;
		}
	}
	return 1;
}

int func_159()//Position - 0xBACA
{
	return 0;
}

int func_160()//Position - 0xBAD3
{
	return 1;
}

int func_161()//Position - 0xBADC
{
	return 1;
}

int func_162()//Position - 0xBAE5
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_163()//Position - 0xBAFE
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_29C.f_2AB, 7))
		{
			return 1;
		}
	}
	if (Global_20258 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)//Position - 0xBB81
{
	if (Global_15D9F[iParam0 /*74*/] == joaat("blimp") || Global_15D9F[iParam0 /*74*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("submersible") || Global_15D9F[iParam0 /*74*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("burrito2") || Global_15D9F[iParam0 /*74*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("entityxf") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("cheetah") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("policeb") && !Global_17C49.f_1CAD.f_148[8 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("ztype") && !Global_17C49.f_1CAD.f_148[9 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("polmav") && !Global_17C49.f_1CAD.f_148[9 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("jb700") && !Global_17C49.f_1CAD.f_148[10 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("monroe") && !Global_17C49.f_1CAD.f_148[11 /*6*/])
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_15D9F[iParam0 /*74*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_15D9F[iParam0 /*74*/] == joaat("gauntlet") && !Global_17C49.f_1CAD.f_148[80 /*6*/]) && !Global_17C49.f_1CAD.f_148[81 /*6*/]) && !Global_17C49.f_1CAD.f_148[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_165(struct<3> Param0, struct<3> Param1)//Position - 0xBE01
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_166(int iParam0, var uParam1, float fParam2)//Position - 0xBE2A
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_166(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_166(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_167()//Position - 0xC79C
{
	var uVar0;
	
	func_177(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_176(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_175(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_170(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_169(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_168(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_168(var uParam0, int iParam1)//Position - 0xC7E2
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_169(var uParam0, int iParam1)//Position - 0xC868
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)//Position - 0xC89B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_172(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_171(int iParam0, int iParam1)//Position - 0xC8EC
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

var func_172(var uParam0)//Position - 0xC98E
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_173(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_173(bool bParam0, int iParam1, int iParam2)//Position - 0xC9B3
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_174(var uParam0)//Position - 0xC9CA
{
	return uParam0 & 15;
}

void func_175(var uParam0, int iParam1)//Position - 0xC9D7
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_176(var uParam0, int iParam1)//Position - 0xCA11
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_177(var uParam0, int iParam1)//Position - 0xCA4C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_178(var uParam0, int iParam1)//Position - 0xCA88
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_166(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_179(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_179(var uParam0)//Position - 0xCC51
{
	*uParam0 = -15;
}

int func_180()//Position - 0xCC5F
{
	if (func_110(0))
	{
		return 0;
	}
	if (Global_15F91.f_8)
	{
		if (Global_15F91.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_15F91.f_A > 1)
	{
		return 0;
	}
	Global_15F91.f_A++;
	return 1;
}

void func_181(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCCAA
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_188(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_74())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_187(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_188(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_187(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_182(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_182(int iParam0)//Position - 0xCD7B
{
	if (func_184(iParam0, 0))
	{
		return 1;
	}
	if (func_183())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_C2, 2))
	{
		return 1;
	}
	return 0;
}

bool func_183()//Position - 0xCDBC
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_184(int iParam0, int iParam1)//Position - 0xCDCD
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_185(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_185(int iParam0, bool bParam1)//Position - 0xCE18
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_186();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_186()//Position - 0xCE59
{
	return Global_1407E1;
}

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0xCE65
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_188(int iParam0)//Position - 0xCE96
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 13);
	}
}

void func_189()//Position - 0xCEB9
{
	INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(-1747852954);
	if (func_216(16))
	{
		if (!func_110(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_40, 10))
			{
				CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4_P1_ALT1", 8);
				func_197();
				func_107(0, 0, 1);
				uLocal_248 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_45.f_1.f_18A - Local_45.f_1.f_18D, Local_45.f_1.f_18A + Local_45.f_1.f_18D, 0, 1, 1, 1);
				iLocal_253 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_45.f_1.f_18A, Local_45.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				PED::SET_PED_NON_CREATION_AREA(Local_45.f_1.f_18A - Local_45.f_1.f_18D, Local_45.f_1.f_18A + Local_45.f_1.f_18D);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_18A - Local_45.f_1.f_18D, Local_45.f_1.f_18A + Local_45.f_1.f_18D, 0, 0);
				MISC::SET_BIT(&uLocal_40, 10);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (func_149(86))
			{
				if (!MISC::IS_BIT_SET(uLocal_40, 1))
				{
					if (func_143(0))
					{
						if (func_194(&iLocal_44, 0, 0, 0, 0) == 1)
						{
							func_187(1, 0, 1);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
							MISC::SET_BIT(&uLocal_40, 1);
							MISC::SET_BIT(&uLocal_40, 2);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 2))
			{
				switch (iLocal_41)
				{
					case 0:
						if (CAM::DOES_CAM_EXIST(uLocal_249))
						{
							CAM::DESTROY_CAM(uLocal_249, 0);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_250))
						{
							CAM::DESTROY_CAM(uLocal_250, 0);
						}
						uLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						uLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_15350.f_9[0]))
							{
								iLocal_244 = Global_15350.f_9[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_244, 0, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15350[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_15350[0]))
							{
								iLocal_246 = Global_15350[0];
							}
						}
						iLocal_41++;
						break;
					
					case 1:
						func_181(1, 1, 0, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_246, 0))
							{
								CAM::POINT_CAM_AT_ENTITY(uLocal_249, iLocal_246, 0f, 0f, 0f, 1);
							}
						}
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_250, uLocal_249, 5000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						iLocal_42 = MISC::GET_GAME_TIMER();
						iLocal_41++;
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 1200)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_246, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_246, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_251);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_246, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_251);
											TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_251);
										}
									}
								}
							}
							iLocal_41++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 2400)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_246, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_246, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_252);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_246, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_252);
											TASK::CLEAR_PED_TASKS(iLocal_244);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_244, uLocal_252);
										}
									}
								}
							}
							iLocal_41++;
						}
						break;
					
					case 4:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 5000)
						{
							MISC::CLEAR_BIT(&uLocal_40, 2);
						}
						break;
					}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 1) && !MISC::IS_BIT_SET(uLocal_40, 2))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_245 = PLAYER::PLAYER_PED_ID();
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_245))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_245, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_244, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						MISC::SET_BIT(&uLocal_40, 9);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_247, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						MISC::SET_BIT(&uLocal_40, 8);
						func_193(&(Local_45.f_1E4), 0, 0, "MICHAEL", 1, 1);
						func_193(&(Local_45.f_1E4), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_42 = MISC::GET_GAME_TIMER();
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						func_113();
						if (!MISC::IS_BIT_SET(uLocal_40, 17))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&uLocal_40, 17);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&uLocal_40, 16);
						}
						if (MISC::IS_BIT_SET(uLocal_40, 16))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!MISC::IS_BIT_SET(uLocal_40, 12))
								{
									func_107(0, 1, 1);
									MISC::SET_BIT(&uLocal_40, 12);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 13))
								{
									func_107(0, 2, 1);
									MISC::SET_BIT(&uLocal_40, 13);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 14))
								{
									func_107(0, 3, 1);
									MISC::SET_BIT(&uLocal_40, 14);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 15))
								{
									func_107(0, 4, 1);
									MISC::SET_BIT(&uLocal_40, 15);
								}
								func_191(&Local_45);
								if (!MISC::IS_BIT_SET(uLocal_40, 0))
								{
									func_190();
									MISC::SET_BIT(&uLocal_40, 0);
								}
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 5))
						{
							if (CAM::DOES_CAM_EXIST(uLocal_249))
							{
								CAM::SET_CAM_ACTIVE(uLocal_249, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_250))
							{
								CAM::SET_CAM_ACTIVE(uLocal_250, 0);
							}
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_250))
							{
								CAM::DESTROY_CAM(uLocal_250, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_250))
							{
								CAM::DESTROY_CAM(uLocal_250, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
							{
								PED::DELETE_PED(&iLocal_244);
							}
							MISC::SET_BIT(&uLocal_40, 5);
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 6))
						{
							if (iLocal_43 > 0)
							{
								MISC::SET_BIT(&uLocal_40, 6);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 12))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 14058)
							{
								func_107(0, 1, 1);
								MISC::SET_BIT(&uLocal_40, 12);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 13))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 22887)
							{
								func_107(0, 2, 1);
								MISC::SET_BIT(&uLocal_40, 13);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 14))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 27988)
							{
								func_107(0, 3, 1);
								func_191(&Local_45);
								MISC::SET_BIT(&uLocal_40, 14);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 15))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 42084)
							{
								func_107(0, 4, 1);
								MISC::SET_BIT(&uLocal_40, 15);
							}
						}
						if (MISC::IS_BIT_SET(uLocal_40, 8))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_247 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								MISC::CLEAR_BIT(&uLocal_40, 8);
							}
						}
						if (MISC::IS_BIT_SET(uLocal_40, 9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_244 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest")));
								MISC::CLEAR_BIT(&uLocal_40, 9);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_245))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_245, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 213, 0);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_245, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_247, iLocal_244, PED::GET_PED_BONE_INDEX(iLocal_244, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_244, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_244, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_244, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_244, 213, 0);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_244, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!MISC::IS_BIT_SET(uLocal_40, 0))
							{
								func_190();
								MISC::SET_BIT(&uLocal_40, 0);
							}
							if (!MISC::IS_BIT_SET(uLocal_40, 7))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_245))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_244))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_244, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_247, 0);
								}
								MISC::SET_BIT(&uLocal_40, 7);
							}
							func_106(16, 0);
						}
						iLocal_43++;
					}
				}
			}
		}
		else
		{
			func_193(&(Local_45.f_1E4), 0, 0, "MICHAEL", 1, 1);
			func_193(&(Local_45.f_1E4), 3, 0, "LESTER", 1, 1);
			if (func_143(0))
			{
				if (func_194(&iLocal_44, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_40, 1);
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 1))
			{
				func_190();
				func_106(16, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (MISC::IS_BIT_SET(uLocal_40, 10))
		{
			MISC::CLEAR_BIT(&uLocal_40, 10);
		}
	}
}

void func_190()//Position - 0xD80C
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_198(&Local_45);
	func_67(&Local_45);
}

void func_191(var uParam0)//Position - 0xD82E
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_192(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 1);
		MISC::CLEAR_BIT(&Global_15168, *uParam0);
	}
}

void func_192(var uParam0)//Position - 0xD87A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xD8B6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
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

int func_194(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xD951
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_15725.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_196(0))
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_42CA.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8861 = iParam2;
		Global_883B = *iParam0;
		Global_883C = iParam4;
		Global_883A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_883A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_883A)
			{
				if (Global_8840[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_883B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_883A == 8)
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		Global_8840[Global_883A /*4*/] = Global_883D;
		Global_8840[Global_883A /*4*/].f_1 = iParam1;
		Global_8840[Global_883A /*4*/].f_2 = iParam2;
		Global_8840[Global_883A /*4*/].f_3 = 0;
		Global_883A++;
		if (iParam4 != 0)
		{
			func_195(iParam0, iParam4);
		}
	}
	return 2;
}

void func_195(var uParam0, int iParam1)//Position - 0xDA88
{
	int iVar0;
	
	if (Global_883A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_883A)
	{
		if (Global_8840[iVar0 /*4*/] == *uParam0)
		{
			Global_8840[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_196(int iParam0)//Position - 0xDAD7
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_197()//Position - 0xDAF9
{
	Global_15F91 = 1;
}

void func_198(var uParam0)//Position - 0xDB06
{
	if (func_10(2, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 2))
			{
				func_69(uParam0, func_199(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				func_115(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}

int func_199(int iParam0)//Position - 0xDB5B
{
	switch (iParam0)
	{
		case 0:
			return func_216(18);
			break;
		
		case 1:
			return func_216(22);
			break;
		
		case 2:
			return func_216(40);
			break;
		
		case 3:
			return func_216(8);
			break;
		
		case 4:
			return func_216(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_200()//Position - 0xDBC8
{
	return Global_10B9B;
}

int func_201(var uParam0)//Position - 0xDBD4
{
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		func_191(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
	{
		func_202(uParam0);
	}
	return 1;
}

void func_202(var uParam0)//Position - 0xDC03
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19E));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
	MISC::CLEAR_BIT(&Global_15169, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 0);
}

void func_203(var uParam0, float fParam1, float fParam2)//Position - 0xDC6D
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
		{
			func_211(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || MISC::IS_BIT_SET(Global_15168, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
			{
				if (func_210(uParam0))
				{
					if (MISC::IS_BIT_SET(Global_15168, *uParam0))
					{
						if (MISC::IS_BIT_SET(Global_1516A, *uParam0))
						{
							func_205(uParam0);
						}
					}
					else
					{
						func_205(uParam0);
					}
				}
			}
			else
			{
				func_204(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !MISC::IS_BIT_SET(Global_15168, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1C1, 0))
			{
				if (MISC::IS_BIT_SET(uParam0->f_1C1, 1))
				{
					func_191(uParam0);
				}
				func_202(uParam0);
			}
		}
	}
}

void func_204(var uParam0)//Position - 0xDD55
{
	if (!AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_110), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_10C));
	uParam0->f_19E = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_15167, *uParam0);
	MISC::SET_BIT(&(uParam0->f_1C1), 0);
}

void func_205(var uParam0)//Position - 0xDDD2
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_1C1, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_209(uParam0);
		func_208(uParam0);
		func_206(uParam0);
		MISC::SET_BIT(&(uParam0->f_1C1), 1);
	}
}

void func_206(var uParam0)//Position - 0xDE2F
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			Var4 = { func_207(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar1, Var4, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 2, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1AC[iVar0], 1);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], 0, 0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], 1);
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&Global_1516A, *uParam0);
}

Vector3 func_207(var uParam0, var uParam1)//Position - 0xDF64
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	Var7 = { uParam0->f_191 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return Var7;
}

void func_208(var uParam0)//Position - 0xDFE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = MISC::IS_BIT_SET(Global_17C49.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar0++;
	}
}

void func_209(var uParam0)//Position - 0xE0C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_32(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			func_8(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (func_32(*uParam0, uParam0->f_1.f_D2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_210(var uParam0)//Position - 0xE202
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19D))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19E))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_15169, *uParam0);
	return 1;
}

void func_211(var uParam0)//Position - 0xE29C
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_212(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_212(var uParam0)//Position - 0xE325
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (MISC::IS_BIT_SET(Global_15167, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 16);
		MISC::SET_BIT(&(uParam0->f_1C1), 15);
		MISC::SET_BIT(&(uParam0->f_1C1), 14);
		MISC::CLEAR_BIT(&Global_15167, *uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 16);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					Var6 = { func_207(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar3, Var6, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 2, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], 1, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1AC[iVar0], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], 0, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 15);
	}
	if (MISC::IS_BIT_SET(uParam0->f_1C1, 14))
	{
		func_213(uParam0);
		func_33(uParam0);
		func_209(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_1C1), 14);
	}
}

void func_213(var uParam0)//Position - 0xE571
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_19F + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_214(int iParam0)//Position - 0xE595
{
	return Global_8861 == iParam0;
}

int func_215(int iParam0)//Position - 0xE5A3
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_14980[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_13CDF)
	{
		if (Global_13CDF[iVar0 /*5*/] != -1)
		{
			if (Global_10BA2.f_6D[Global_13CDF[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xE60B
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_217(var uParam0, int iParam1)//Position - 0xE638
{
	struct<3> Var0;
	float fVar1;
	
	*uParam0 = iParam1;
	Var0 = { Global_15129[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_15129[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { Var0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	MISC::SET_BIT(&(uParam0->f_1C1), 4);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1C1), 2);
	uParam0->f_1D0 = 0;
	uParam0->f_1C3 = -1;
}

void func_218(var uParam0, var uParam1)//Position - 0xE704
{
	func_227(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_226(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_225(uParam0, 20f, 22f, 28f);
	func_224(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_223(uParam0, 1, "CRW_GM", "");
	func_223(uParam0, 4, "CRW_NR", "");
	func_223(uParam0, 6, "CRW_PH", "");
	func_223(uParam0, 7, "CRW_CF", "");
	func_223(uParam0, 8, "CRW_ET", "");
	func_223(uParam0, 9, "CRW_KD", "");
	func_223(uParam0, 10, "CRW_PM", "CRM_PM");
	func_223(uParam0, 12, "CRW_RL", "CRM_RL");
	func_222(uParam0, 0, 0, 0, 0);
	func_222(uParam0, 6, 0, 0, 0);
	func_222(uParam0, 1, 0, 0, 0);
	func_222(uParam0, 3, 1, 0, 0);
	func_222(uParam0, 11, 2, 0, 0);
	func_222(uParam0, 5, 3, 0, 0);
	func_222(uParam0, 9, 3, 0, 0);
	func_222(uParam0, 2, 4, 0, 0);
	func_222(uParam0, 7, 9, 0, 0);
	func_222(uParam0, 10, 10, 0, 0);
	func_221(uParam0, 2, 2, "H_TD_SEC");
	func_221(uParam0, 2, 2, "H_TD_PHOTO");
	func_221(uParam0, 2, 5, "H_TD_PLAN");
	func_221(uParam0, 2, 6, "H_TD_CREW");
	func_221(uParam0, 7, 11, "H_TD_CARB");
	func_221(uParam0, 8, 9, "H_TD_BUGS");
	func_221(uParam0, 8, 10, "H_TD_GAS");
	func_220(uParam0, 0, 203, 74);
	func_220(uParam0, 1, 368, 181);
	func_220(uParam0, 1, 556, 189);
	func_220(uParam0, 2, 690, 63);
	func_220(uParam0, 2, 673, 308);
	func_220(uParam0, 2, 671, 406);
	func_220(uParam0, 3, 245, 244);
	func_220(uParam0, 4, 70, 68);
	func_219(uParam0, 0, "JHP12", 214, 165, 1);
	func_219(uParam0, 0, "JHP13", 254, 46, 1);
	func_219(uParam0, 0, "JHP14", 70, 97, 1);
	func_219(uParam0, 0, "JHP15", 254, 275, 1);
	func_219(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_219(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xE9AA
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEA23
{
	if (uParam0->f_21 < 20)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_221(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xEA67
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 4);
		uParam0->f_D1++;
	}
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEAB7
{
	if (uParam0->f_75 < 22)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_223(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0xEB07
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_130[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_130[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_130[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_130[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_224(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0xEBA1
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0 /*4*/] = { Var0 };
	uParam0->f_14[1 /*4*/] = { Var1 };
	uParam0->f_6C[0 /*4*/] = { Var2 };
	uParam0->f_6C[1 /*4*/] = { Var3 };
	uParam0->f_118[1 /*2*/] = { Var4 };
	uParam0->f_118[2 /*2*/] = { Var5 };
	uParam0->f_118[0 /*2*/] = { Var6 };
	uParam0->f_118[3 /*2*/] = { Var7 };
}

void func_225(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0xEC45
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_226(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xEC5F
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0 /*2*/] = iParam10;
	uParam0->f_61[0 /*2*/].f_1 = iParam11;
	uParam0->f_61[1 /*2*/] = iParam12;
	uParam0->f_61[1 /*2*/].f_1 = iParam13;
	uParam0->f_61[2 /*2*/] = iParam14;
	uParam0->f_61[2 /*2*/].f_1 = iParam15;
	uParam0->f_61[3 /*2*/] = iParam16;
	uParam0->f_61[3 /*2*/].f_1 = iParam17;
	uParam0->f_61[4 /*2*/] = iParam18;
	uParam0->f_61[4 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_227(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12)//Position - 0xED2D
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0] = iParam8;
	uParam0->f_1E[1] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { Param11 };
	uParam0->f_18D = { Param12 };
}

int func_228(int iParam0, int iParam1)//Position - 0xED99
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_229(int iParam0)//Position - 0xEDAF
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
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
	return 1;
}

void func_230()//Position - 0xEE09
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	func_106(16, 0);
	func_106(17, 0);
	func_106(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_248, 0);
	if (iLocal_253 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_253))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_253);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_18A - Local_45.f_1.f_18D, Local_45.f_1.f_18A + Local_45.f_1.f_18D, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (iLocal_44 != -1)
	{
		func_152(&iLocal_44);
	}
	while (!func_201(&Local_45))
	{
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

