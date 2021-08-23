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
	func_296();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_87639 = 1;
	func_295(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_294(" Force cleanup [TERMINATING]");
		func_279(&Var0, 1);
	}
	if (!func_278(108))
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
			func_294("  Ambient - Player isn't within World Point Range");
			func_279(uParam0, 1);
		}
		if (func_205() != 2)
		{
			func_294("  Ambient - Player is not Trevor");
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
					func_294("  -  Ambient Rampage Mission ID is invalid");
					func_279(uParam0, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
				{
					func_294("  -  Ambient Rampage Mission ID is invalid");
					func_279(uParam0, 1);
				}
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 0);
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 2);
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[*uParam0 /*6*/]), 3);
				Global_96440[*uParam0 /*10*/].f_1 = 0;
				if (!func_197(0))
				{
					Global_96440[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_189(*uParam0))
				{
					func_294(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_279(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_294(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_279(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_294(" RC Ambient Launcher Waiting To Terminate");
					Global_96440[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_294(" Ambient - Ready To Terminate");
						func_279(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
			iLocal_286 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_2(char* sParam0)//Position - 0x2B4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_3(var uParam0)//Position - 0x2C7
{
	while (!Global_96440[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)//Position - 0x2E5
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

int func_5(var uParam0)//Position - 0x317
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_188())
	{
		while (!func_183(*uParam0))
		{
			if (func_182(*uParam0))
			{
				func_174();
			}
			if (!func_131(uParam0, *uParam0 != 2))
			{
				func_294("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_130())
	{
		func_128();
	}
	if (!func_98(uParam0))
	{
		func_294("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_95(*uParam0, &Var0);
	MemCopy(&sVar32, {func_94(*uParam0)}, 4);
	func_93(&sVar32, Var0.f_3, 0);
	func_92(*uParam0);
	if (!func_188())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	func_6(*uParam0, Var0);
	return 1;
}

void func_6(int iParam0, char* sParam1)//Position - 0x3DA
{
	func_24(sParam1);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 5);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			SYSTEM::WAIT(0);
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_54751 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 5))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)//Position - 0x499
{
	int iVar0;
	int iVar1;
	
	if (Global_54748 == 1)
	{
		func_21();
		Global_54748 = 0;
		if (Global_54743)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_54751 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_54765, {func_12(iParam0)}, 4);
	Global_54753 = 0;
	Global_54752 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_54740 = 1;
			Global_54743 = 1;
			Global_54746 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_54751 = 1;
			Global_54752 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_66995;
	Global_66995 = 1;
	iVar1 = Global_66996;
	Global_66996 = iParam0;
	if (!Global_54740)
	{
		if ((Global_66996 != iVar1 || Global_66845 == 0) || iVar0 != Global_66995)
		{
			Global_24693 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_54743 = 1;
		}
	}
	Global_54778 = MISC::GET_GAME_TIMER();
	func_8();
	Global_54750 = 0;
}

void func_8()//Position - 0x5F3
{
	int iVar0;
	
	if (!Global_54747)
	{
		return;
	}
	if (Global_66845 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		switch (Global_54975[Global_66846[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_66846[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_54758)
				{
					Global_66846[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_66846[iVar0 /*9*/].f_1 != 0)
					{
						Global_66846[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_54747 = 0;
}

void func_9(int iParam0)//Position - 0x6A6
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)//Position - 0xA8E
{
	Global_54743 = 1;
	Global_54746 = 1;
	if (Global_66845 > 15)
	{
		return;
	}
	func_11(Global_66845);
	Global_66846[Global_66845 /*9*/] = iParam0;
	Global_66845++;
	if (Global_54975[iParam0 /*13*/] == 16)
	{
		Global_66997 = 1;
	}
}

void func_11(int iParam0)//Position - 0xAD9
{
	Global_66846[iParam0 /*9*/].f_1 = 0;
	Global_66846[iParam0 /*9*/].f_2 = 0f;
	Global_66846[iParam0 /*9*/].f_3 = 0;
	Global_66846[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)//Position - 0xB0D
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_94(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_13()//Position - 0xB45
{
	if (Global_54750)
	{
		return;
	}
	Global_54759 = 0;
	Global_66845 = 0;
	Global_54761 = 0;
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	func_20(0);
	func_19();
	Global_66997 = 0;
	Global_54749 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_54740 = 0;
	Global_54770 = 0;
	Global_54778 = -1;
}

void func_14()//Position - 0xB9B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_67032[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67041 = 0;
}

void func_15()//Position - 0xBC8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_66998[iVar0 /*2*/] = 0;
		Global_66998[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67031 = 0;
}

void func_16()//Position - 0xBFF
{
	Global_54909 = 0;
}

void func_17()//Position - 0xC0B
{
	Global_54769 = 0;
	Global_54773 = func_18(joaat("sp0_shots"));
	Global_54772 = func_18(joaat("sp0_hits"));
	Global_54775 = func_18(joaat("sp1_shots"));
	Global_54774 = func_18(joaat("sp1_hits"));
	Global_54777 = func_18(joaat("sp2_shots"));
	Global_54776 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)//Position - 0xC5F
{
	var uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()//Position - 0xC73
{
	int iVar0;
	
	Global_54779 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_54780[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)//Position - 0xC9D
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_21()//Position - 0xCB1
{
	int iVar0;
	
	Global_54748 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		Global_66846[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_54758)
	{
	}
	Global_54758 = 0;
}

void func_22()//Position - 0xCEA
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_54745 && !Global_54744)
			{
				Global_54745 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_23()//Position - 0xD2C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_54743)
	{
		return 0;
	}
	return Global_54755;
}

void func_24(char* sParam0)//Position - 0xD56
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)//Position - 0xD69
{
	MISC::CLEAR_BIT(&(Global_89962.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD86
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_28(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_84545 = 0;
	}
}

void func_27()//Position - 0xDCB
{
	int iVar0;
	int iVar1;
	
	Global_93588 = Global_91351;
	Global_93588.f_1 = Global_91351.f_1;
	Global_93588.f_6 = Global_91351.f_6;
	Global_93588.f_7 = Global_91351.f_7;
	Global_93588.f_8 = Global_91351.f_8;
	Global_93588.f_2 = Global_91351.f_2;
	Global_93588.f_3 = Global_91351.f_3;
	Global_93588.f_4 = Global_91351.f_4;
	Global_93588.f_5 = Global_91351.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_93588.f_9[iVar1] = Global_91351.f_9[iVar1];
		Global_93588.f_13[iVar1] = Global_91351.f_13[iVar1];
		Global_93588.f_17[iVar1] = Global_91351.f_17[iVar1];
		Global_93588.f_21[iVar1] = Global_91351.f_21[iVar1];
		Global_93588.f_25[0 /*223*/][iVar1 /*74*/] = { Global_91351.f_25[0 /*223*/][iVar1 /*74*/] };
		Global_93588.f_25[1 /*223*/][iVar1 /*74*/] = { Global_91351.f_25[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_93588.f_472[iVar1 /*65*/][iVar0] = Global_91351.f_472[iVar1 /*65*/][iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_13[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_13[iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_26[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_93588.f_472[iVar1 /*65*/].f_59 = Global_91351.f_472[iVar1 /*65*/].f_59;
		Global_93588.f_472[iVar1 /*65*/].f_60 = Global_91351.f_472[iVar1 /*65*/].f_60;
		Global_93588.f_472[iVar1 /*65*/].f_61 = Global_91351.f_472[iVar1 /*65*/].f_61;
		Global_93588.f_472[iVar1 /*65*/].f_62 = Global_91351.f_472[iVar1 /*65*/].f_62;
		Global_93588.f_472[iVar1 /*65*/].f_63 = Global_91351.f_472[iVar1 /*65*/].f_63;
		Global_93588.f_472[iVar1 /*65*/].f_64 = Global_91351.f_472[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_93588.f_472[iVar1 /*65*/].f_39[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_39[iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_49[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_93588.f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_91351.f_668[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_93588.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_91351.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_93588.f_1521[iVar1 /*32*/][iVar0] = Global_91351.f_1521[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_93588.f_1521[iVar1 /*32*/].f_5[iVar0] = Global_91351.f_1521[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_93588.f_1521[iVar1 /*32*/].f_16[iVar0] = Global_91351.f_1521[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_93588.f_1618[iVar1] = Global_91351.f_1618[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_93588.f_2115[iVar1 /*15*/][iVar0] = Global_91351.f_2115[iVar1 /*15*/][iVar0];
			Global_93588.f_2115[iVar1 /*15*/].f_5[iVar0] = Global_91351.f_2115[iVar1 /*15*/].f_5[iVar0];
			Global_93588.f_2115[iVar1 /*15*/].f_10[iVar0] = Global_91351.f_2115[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_93588.f_1622[iVar1 /*164*/][iVar0] = Global_91351.f_1622[iVar1 /*164*/][iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_4[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_4[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_8[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_8[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_12[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_12[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_16[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_16[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_20[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_20[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_24[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_24[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_28[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_28[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_32[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_32[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_36[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_36[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_40[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_40[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_44[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_44[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_48[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_48[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_52[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_52[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_56[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_56[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_60[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_60[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_64[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_64[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_68[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_68[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_72[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_72[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_76[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_76[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_80[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_80[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_84[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_84[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_88[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_88[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_92[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_92[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_96[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_96[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_100[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_100[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_104[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_104[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_108[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_108[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_112[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_112[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_116[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_116[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_120[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_120[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_124[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_124[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_128[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_128[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_132[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_132[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_136[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_136[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_140[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_140[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_144[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_144[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_148[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_148[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_152[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_152[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_156[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_156[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_160[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_93588.f_2161 = { Global_91351.f_2161 };
	Global_93588.f_2161.f_3 = Global_91351.f_2161.f_3;
	Global_93588.f_2167 = { Global_91351.f_2167 };
	Global_93588.f_2167.f_3 = { Global_91351.f_2167.f_3 };
	Global_93588.f_2167.f_6 = Global_91351.f_2167.f_6;
	Global_93588.f_2167.f_8 = Global_93588.f_2167.f_8;
	Global_93588.f_2167.f_7 = Global_91351.f_2167.f_7;
	Global_93588.f_2167.f_9 = Global_91351.f_2167.f_9;
	Global_93588.f_2167.f_11 = Global_91351.f_2167.f_11;
	Global_93588.f_2167.f_10 = Global_91351.f_2167.f_10;
	Global_93588.f_2167.f_12 = Global_91351.f_2167.f_12;
	Global_93588.f_2167.f_12.f_1 = { Global_91351.f_2167.f_12.f_1 };
	Global_93588.f_2167.f_12.f_5 = Global_91351.f_2167.f_12.f_5;
	Global_93588.f_2167.f_12.f_6 = Global_91351.f_2167.f_12.f_6;
	Global_93588.f_2167.f_12.f_7 = Global_91351.f_2167.f_12.f_7;
	Global_93588.f_2167.f_12.f_8 = Global_91351.f_2167.f_12.f_8;
	Global_93588.f_2167.f_12.f_9 = { Global_91351.f_2167.f_12.f_9 };
	Global_93588.f_2167.f_12.f_35 = { Global_91351.f_2167.f_12.f_35 };
	Global_93588.f_2167.f_12.f_38 = Global_91351.f_2167.f_12.f_38;
	Global_93588.f_2167.f_12.f_39 = Global_91351.f_2167.f_12.f_39;
	Global_93588.f_2167.f_12.f_40 = Global_91351.f_2167.f_12.f_40;
	Global_93588.f_2167.f_12.f_41 = Global_91351.f_2167.f_12.f_41;
	Global_93588.f_2167.f_12.f_53 = Global_91351.f_2167.f_12.f_53;
	Global_93588.f_2167.f_12.f_42 = Global_91351.f_2167.f_12.f_42;
	Global_93588.f_2167.f_12.f_43 = Global_91351.f_2167.f_12.f_43;
	Global_93588.f_2167.f_12.f_44 = Global_91351.f_2167.f_12.f_44;
	Global_93588.f_2167.f_12.f_45 = Global_91351.f_2167.f_12.f_45;
	Global_93588.f_2167.f_12.f_47 = Global_91351.f_2167.f_12.f_47;
	Global_93588.f_2167.f_12.f_48 = Global_91351.f_2167.f_12.f_48;
	Global_93588.f_2167.f_12.f_49 = Global_91351.f_2167.f_12.f_49;
	Global_93588.f_2167.f_12.f_50 = Global_91351.f_2167.f_12.f_50;
	Global_93588.f_2167.f_12.f_51 = Global_91351.f_2167.f_12.f_51;
	Global_93588.f_2167.f_12.f_52 = Global_91351.f_2167.f_12.f_52;
	Global_93588.f_2233 = Global_91351.f_2233;
	Global_93588.f_2233.f_1 = Global_91351.f_2233.f_1;
	Global_93588.f_2233.f_2 = Global_91351.f_2233.f_2;
	Global_93588.f_2233.f_3 = Global_91351.f_2233.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A5B
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_205();
	uParam0->f_1 = func_81();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_66(&(uParam0->f_2161), 0);
		func_65(PLAYER::PLAYER_PED_ID());
		func_59(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)//Position - 0x28DF
{
	*uParam0 = Global_86216;
	uParam0->f_1 = Global_86217;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2901
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2988
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x29C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_89962.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)//Position - 0x29F6
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_68043 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)//Position - 0x2AD2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]))
		{
			if (iParam0 == Global_67138.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x2B14
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, int iParam1, int iParam2)//Position - 0x2B77
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87708[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_37(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x2C05
{
	struct<58> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, var uParam1, int iParam2)//Position - 0x2C47
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
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
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
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
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
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
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

bool func_39(int iParam0)//Position - 0x2EBF
{
	return iParam0 < 3;
}

void func_40(int iParam0, var uParam1)//Position - 0x2ECB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_41(int iParam0)//Position - 0x3177
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x3227
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)//Position - 0x3301
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x33B2
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_205(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)//Position - 0x34DF
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3550
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x3629
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x3666
{
	if (func_39(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, var uParam1, int iParam2)//Position - 0x3690
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(iVar0))
		{
			uParam1->f_59 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2035, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_50(740, Global_68104, 0);
			}
			uParam1->f_60 = func_50(741, Global_68104, 0);
			uParam1->f_61 = func_50(742, Global_68104, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2035, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_50(740, Global_68104, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x383A
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_51(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)//Position - 0x386C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_52()//Position - 0x38A0
{
	return Global_1312737;
}

int func_53(int iParam0, int iParam1)//Position - 0x38AC
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_51(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x38D8
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3E20
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_56()//Position - 0x4062
{
	func_57();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_57()//Position - 0x407B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_58(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_39(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_58(int iParam0)//Position - 0x4178
{
	return Global_34913 == iParam0;
}

void func_59(int iParam0, bool bParam1)//Position - 0x4186
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_60(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1)//Position - 0x4279
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_62(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = FILES::GET_NUM_DLC_WEAPONS();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar7, &Var9) && !func_61(Var9.f_1)) && iVar70 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9))
				{
					Var4.x = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar7))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar7, iVar1, &Var48))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, Var48.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_61(int iParam0)//Position - 0x44DD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_62(int iParam0, int iParam1)//Position - 0x4603
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_63(int iParam0, var uParam1)//Position - 0x4E1F
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)//Position - 0x4E5A
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_65(int iParam0)//Position - 0x50CE
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x510A
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_205();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_67(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0x5665
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_68(int iParam0, var uParam1, var uParam2)//Position - 0x56A9
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_69(*uParam1, 0f, 0f, 0f);
}

bool func_69(struct<3> Param0, struct<3> Param3)//Position - 0x5CFF
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_70(var uParam0)//Position - 0x5D28
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_80())
		{
			*uParam0 = func_76(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1);
			if (func_75(*uParam0) && !func_71(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_71(int iParam0)//Position - 0x5D81
{
	return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, bool bParam2)//Position - 0x5D91
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_74() == 0)
		{
			return MISC::IS_BIT_SET(func_50(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0], iParam1);
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x5DF1
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_74()//Position - 0x609A
{
	return Global_24444;
}

int func_75(int iParam0)//Position - 0x60A5
{
	return func_72(iParam0, 5, 1);
}

int func_76(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x60B5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_79(iVar0))
		{
			if (!bParam5 || func_78(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_77(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_77(int iParam0)//Position - 0x614C
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_78(int iParam0)//Position - 0x661D
{
	return func_72(iParam0, 0, 0);
}

int func_79(int iParam0)//Position - 0x662D
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_80()//Position - 0x6886
{
	return Global_90014.f_290 > 0;
}

var func_81()//Position - 0x6897
{
	var uVar0;
	
	func_91(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_90(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_89(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_84(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_83(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_82(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_82(var uParam0, int iParam1)//Position - 0x68DD
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

void func_83(var uParam0, int iParam1)//Position - 0x6963
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)//Position - 0x6996
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_85(int iParam0, int iParam1)//Position - 0x69E7
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

var func_86(var uParam0)//Position - 0x6A89
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_87(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)//Position - 0x6AAE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(var uParam0)//Position - 0x6AC5
{
	return uParam0 & 15;
}

void func_89(var uParam0, int iParam1)//Position - 0x6AD2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_90(var uParam0, int iParam1)//Position - 0x6B0C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_91(var uParam0, int iParam1)//Position - 0x6B47
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_92(int iParam0)//Position - 0x6B83
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

void func_93(char* sParam0, var uParam1, int iParam2)//Position - 0x6BDC
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_87437))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_87437, 0, 0, 0, 1, 0);
		StringCopy(&Global_87437, "", 64);
	}
	StringCopy(&Global_87437, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, uParam1, iParam2, func_197(0));
}

struct<2> func_94(int iParam0)//Position - 0x6C1E
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_95(int iParam0, var uParam1)//Position - 0x706B
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x82B3
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_97(int iParam0)//Position - 0x8344
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_98(var uParam0)//Position - 0x868A
{
	var uVar0;
	
	if (func_127(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			func_118(1);
			func_116(uParam0, 1, func_117(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_115(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_174();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_99(*uParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 17000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_294("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			func_294("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)//Position - 0x872E
{
	struct<2> Var0;
	
	func_114();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	if (func_113(iParam0))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (Global_35957 == 1)
	{
		if (func_111(PLAYER::PLAYER_PED_ID()))
		{
			func_102(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_188())
	{
		if (iParam0 < 63)
		{
			func_100(iParam0);
			Var0 = { func_12(iParam0) };
			HUD::SET_MISSION_NAME(1, &Var0);
		}
	}
}

void func_100(int iParam0)//Position - 0x87C9
{
	if (iParam0 < 63)
	{
		func_101();
		Global_68500 = iParam0;
		Global_68499 = 0;
		Global_68502 = 7;
	}
}

void func_101()//Position - 0x87EF
{
	if (Global_68499 != 6)
	{
	}
	if (Global_68504)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_68504 = 0;
		Global_17236.f_7207 = 0;
	}
	Global_68499 = 6;
	Global_68501 = -1;
	Global_68500 = -1;
}

void func_102(int iParam0)//Position - 0x8827
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
	iVar0 = func_110(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		func_105(1, iVar1, 1);
		return;
	}
	iVar2 = func_104(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_103(iVar2);
}

void func_103(int iParam0)//Position - 0x8880
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_104(int iParam0)//Position - 0x8903
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_105(int iParam0, int iParam1, int iParam2)//Position - 0x8934
{
	func_106(iParam0, iParam1, iParam2, 0, 0);
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8948
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
	if (func_108(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_107();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_107()//Position - 0x89BF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0, int iParam1, int iParam2)//Position - 0x89F0
{
	if (func_109(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_109(int iParam0, int iParam1, int iParam2)//Position - 0x8A0B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)//Position - 0x8A57
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
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_111(int iParam0)//Position - 0x8AA0
{
	if (func_112(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x8AC0
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

int func_113(int iParam0)//Position - 0x8AE0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_114()//Position - 0x8B33
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_2263, 25);
	MISC::SET_BIT(&Global_2264, 11);
}

int func_115(int iParam0)//Position - 0x8BB0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_116(var uParam0, int iParam1, bool bParam2)//Position - 0x8C03
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_112(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_117(int iParam0)//Position - 0x8CF7
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_118(bool bParam0)//Position - 0x8D62
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(uVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
	}
	func_119(1, 1, 0, 0);
}

void func_119(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8D9E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_126(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_125())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_124(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_126(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_124(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_120(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_120(int iParam0)//Position - 0x8E6F
{
	if (func_122(iParam0, 0))
	{
		return 1;
	}
	if (func_121())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_121()//Position - 0x8EB0
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_122(int iParam0, int iParam1)//Position - 0x8EC1
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_123(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
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

int func_123(int iParam0, bool bParam1)//Position - 0x8F0C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_124(int iParam0, var uParam1, var uParam2)//Position - 0x8F4D
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_125()//Position - 0x8F7E
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0)//Position - 0x8FA5
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
	}
}

int func_127(char* sParam0)//Position - 0x8FC8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		SCRIPT::REQUEST_SCRIPT(uParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_294("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_128()//Position - 0x9005
{
	Global_14558 = 0;
	func_129();
}

void func_129()//Position - 0x9015
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

int func_130()//Position - 0x906C
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0, bool bParam1)//Position - 0x908E
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		func_294("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_95(*uParam0, &Var0);
	if ((func_173(*uParam0) || func_171(*uParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_294("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_163(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_162(uParam0->f_28[0]);
		}
		func_294("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
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
		if (!func_139(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_138(uParam0);
			}
			else
			{
				func_136(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_139(uParam0, 0, 1))
		{
			func_136(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_139(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_139(uParam0, 1, 0))
		{
			func_136(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_139(uParam0, 0, 0))
		{
			func_136(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_112(uParam0->f_35[0]))
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
			func_294("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_26, func_205()))
		{
			func_294("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_135(&(uParam0->f_48)) && bParam1)
	{
		func_132(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_132(int iParam0, var uParam1, int iParam2)//Position - 0x9301
{
	var uVar0;
	var uVar1;
	
	if (func_112(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_135(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (func_134(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_134(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_133(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_134(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam1->f_4 = 1;
				if (func_133(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_133(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_133(int iParam0)//Position - 0x9656
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0)//Position - 0x9676
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_135(var uParam0)//Position - 0x968E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_136(var uParam0)//Position - 0x96B3
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_137(&(uParam0->f_41[1]));
		func_137(&(uParam0->f_41[2]));
	}
	if (func_112(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_112(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_162(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_137(var uParam0)//Position - 0x99B7
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_138(var uParam0)//Position - 0x99E2
{
	int iVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
				TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_139(var uParam0, bool bParam1, bool bParam2)//Position - 0x9A62
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_111(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0]))
				{
					func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0))
				{
					func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0))
				{
					func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_141(uVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_141(uParam0->f_35[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_141(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_140(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								func_294("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_140(int iParam0, int iParam1)//Position - 0x9C1F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x9C4F
{
	if (func_112(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
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
	if (func_111(PLAYER::PLAYER_PED_ID()))
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
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							if (func_130())
							{
								func_128();
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_136(uParam0);
						}
						else
						{
							func_138(uParam0);
						}
						func_294("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_161(*uParam0))
					{
						if (!func_182(*uParam0))
						{
							if (func_156(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_136(uParam0);
								}
								else
								{
									func_138(uParam0);
								}
								func_294("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_144(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_143(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_294("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_294("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_112(uParam0->f_41[0]))
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

int func_143(int iParam0)//Position - 0x9F35
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, float fParam1)//Position - 0x9F69
{
	float fVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0))
	{
		if (func_155(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
	if (!func_112(iParam0) || !func_112(iParam1))
	{
		if (iVar4 != -1)
		{
			func_153(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_150(iParam0, iParam1, fParam2, iParam3))
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
	uVar0 = func_147(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}

int func_147(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xA0B8
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_112(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_148(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_112(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_77)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_112(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_77)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_148(int iParam0, int iParam1)//Position - 0xA1E4
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
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

int func_150(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xA2F3
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_152(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_152(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_151(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_151(struct<3> Param0, struct<3> Param3)//Position - 0xA384
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_152(struct<3> Param0)//Position - 0xA3A5
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_153(var uParam0)//Position - 0xA3E4
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
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

int func_155(var uParam0)//Position - 0xA43E
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA466
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(uParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_160(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_157(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_160(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_157(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA561
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	Var3 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.x = (Var3.x + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_158(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_158(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(var uParam0, float fParam1)//Position - 0xA66D
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_159(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_159(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xA702
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_152(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_152(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_151(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xA790
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0xA7D8
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_162(int iParam0)//Position - 0xA822
{
	var uVar0;
	
	if (func_112(PLAYER::PLAYER_PED_ID()) && func_112(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_163(int iParam0)//Position - 0xA8BF
{
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_173(iParam0))
	{
		return 0;
	}
	if (!func_167(4))
	{
		if (func_171(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_166() && !func_165())
	{
		return 1;
	}
	if (!func_164(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0xA957
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_165()//Position - 0xA996
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_166()//Position - 0xA9B3
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_167(int iParam0)//Position - 0xA9D9
{
	return func_168(iParam0, Global_34913);
}

int func_168(int iParam0, int iParam1)//Position - 0xA9EA
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

int func_169()//Position - 0xABCB
{
	return func_170(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_170(var uParam0, int iParam1)//Position - 0xABDC
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &uVar1);
		if (MISC::GET_HASH_KEY(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_171(int iParam0)//Position - 0xAC25
{
	if ((func_172() && Global_89962.f_11 == 6) && iParam0 == func_170(&(Global_89962.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0xAC59
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)//Position - 0xAC97
{
	if (func_197(0))
	{
		if (Global_68491.f_1 == 7)
		{
			if (Global_68491 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_174()//Position - 0xACBF
{
	func_178();
	func_177();
	func_175();
}

void func_175()//Position - 0xACD3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_176(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

int func_176(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0xAD2A
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_28) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_177()//Position - 0xAEAC
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}

void func_178()//Position - 0xAEFD
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_181(0))
		{
			func_179(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

void func_179(int iParam0)//Position - 0xAF25
{
	if (Global_14551)
	{
		func_180(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_125())
	{
		Global_14393.f_1 = 3;
	}
}

void func_180(bool bParam0, bool bParam1)//Position - 0xAF95
{
	if (bParam0)
	{
		if (func_181(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_181(int iParam0)//Position - 0xB009
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

int func_182(int iParam0)//Position - 0xB063
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xB0A4
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_185(&(Global_96440[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_184(iParam0);
	return 1;
}

void func_184(int iParam0)//Position - 0xB0E9
{
	Global_96440[iParam0 /*10*/].f_4 = 1;
	Global_96440[iParam0 /*10*/].f_5 = 0;
	Global_96440[iParam0 /*10*/].f_6 = 0;
	Global_96440[iParam0 /*10*/] = 0;
}

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB11B
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_187(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_167(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)//Position - 0xB252
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_187(int iParam0)//Position - 0xB2A1
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_188()//Position - 0xB2C3
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)//Position - 0xB2E7
{
	char* sVar0;
	
	if (Global_68245)
	{
		func_294("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!func_190(iParam0))
	{
		Global_96440[iParam0 /*10*/].f_1 = 1;
		func_294("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_89962.f_11 == 6)
	{
		if (Global_89962 < 9)
		{
			func_95(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), sVar0))
			{
				func_294("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("candidate_controller")) == 0)
	{
		Global_96440[iParam0 /*10*/].f_1 = 1;
		func_294("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_190(int iParam0)//Position - 0xB37E
{
	var uVar0;
	
	func_95(iParam0, &uVar0);
	if (!func_167(4))
	{
		if (func_171(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_166() && !func_165())
	{
		return 0;
	}
	if (func_196(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_173(iParam0))
	{
		if (!func_195(iParam0))
		{
			return 0;
		}
		if (!func_194(iParam0))
		{
			return 0;
		}
		if (func_193(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_191(5))
		{
			Global_96440[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_96440[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0)//Position - 0xB43F
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_90014.f_288 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_191(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_192(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_85405[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_90014.f_288 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_192(int iParam0, char* sParam1)//Position - 0xB4C4
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

bool func_193(int iParam0)//Position - 0xB5A6
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3);
}

bool func_194(int iParam0)//Position - 0xB5D4
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2);
}

bool func_195(int iParam0)//Position - 0xB602
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 0);
}

int func_196(int iParam0)//Position - 0xB630
{
	if (func_164(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197(bool bParam0)//Position - 0xB665
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
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
	if (!func_203(PLAYER::PLAYER_PED_ID()))
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
			func_202("RAMP_HELP_CRIM", -1);
			iLocal_285 = 0;
		}
		bVar0 = true;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_284)
		{
			HUD::CLEAR_HELP(1);
			func_202("RAMP_HELP_FOOT", -1);
			iLocal_284 = 0;
		}
		bVar0 = true;
	}
	else if (func_278(108))
	{
		if (!iLocal_286)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				HUD::CLEAR_HELP(1);
				func_201("RAMP_HELP_TRIG");
			}
			iLocal_286 = 1;
		}
		bVar0 = !PAD::IS_CONTROL_PRESSED(2, 51);
	}
	return bVar0;
}

void func_201(char* sParam0)//Position - 0xB7E6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_202(char* sParam0, int iParam1)//Position - 0xB7FC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_203(int iParam0)//Position - 0xB813
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0);
}

int func_204(float fParam0)//Position - 0xB830
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_203(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_24748[(iLocal_281 + iVar0) /*23*/][0 /*3*/] };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 1) <= fParam0 && MISC::ABSF((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_205()//Position - 0xB8AC
{
	func_57();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
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
		func_294(" Didn't know which RC To Launch");
		func_279(uParam0, 1);
	}
	if (!func_189(*uParam0))
	{
		func_294(" RC Can't Launch");
		func_279(uParam0, 1);
	}
	if (func_274(*uParam0))
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
			if (func_112(uParam0->f_28[0]))
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
								if ((func_112(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1);
					if (func_112(uParam0->f_28[1]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1);
					}
					func_294("Sitting Rampage attacked with explosives, cleaning up");
					func_279(uParam0, 1);
				}
			}
			if (func_112(uParam0->f_28[1]))
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
								if ((func_112(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1);
					if (func_112(uParam0->f_28[0]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1);
					}
					func_294("Sitting Rampage attacked with explosives, cleaning up");
					func_279(uParam0, 1);
				}
			}
		}
		if (func_248(uParam0))
		{
			func_247(uParam0);
			func_294(" RC combat happening in area, tell peds to flee");
			func_136(uParam0);
			func_279(uParam0, 1);
		}
		if (!func_131(uParam0, 1))
		{
			func_294(" RC Is Not Fine And In Range");
			func_279(uParam0, 1);
		}
		if (func_246(52))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1"))
			{
				func_294(" Turning Off Scenario Group For Rampage 1");
				TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", 0);
			}
		}
		func_245(*uParam0);
		func_237(&iLocal_282, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_282 != -1)
		{
			func_236(uParam0, &uLocal_287);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_294(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_291 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if ((!(*uParam0 == 52 && Local_291.f_2 > 34f) && !(*uParam0 == 53 && Local_291.f_2 > 71f)) && !(*uParam0 == 54 && Local_291.f_2 > 30f))
		{
			if (func_223(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_220(uParam0))
					{
						func_294(" Trigger Conditions Met");
						func_174();
						if (!func_5(uParam0))
						{
							func_294(" RC Can't Launch");
							func_279(uParam0, 1);
						}
						func_294(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_294(" Ready To Terminate");
							func_279(uParam0, 0);
						}
					}
				}
				else if (func_219(uParam0))
				{
					func_294(" Trigger Conditions Met");
					func_174();
					if (!func_5(uParam0))
					{
						func_294(" RC Can't Launch");
						func_279(uParam0, 1);
					}
					func_294(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_294(" Ready To Terminate");
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
			if (func_112(uParam0->f_28[0]))
			{
				if (func_218(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0]))
				{
					func_217(&uLocal_114, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_109++;
				}
			}
			break;
		
		case 2:
			uLocal_110[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_208(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
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
			if (func_112(uParam0->f_28[0]))
			{
				func_208(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
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
			if (func_112(uParam0->f_28[0]))
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

bool func_208(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBFF7
{
	func_216(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_209(sParam2, iParam4, 0);
}

int func_209(char* sParam0, int iParam1, bool bParam2)//Position - 0xC04D
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
					func_129();
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
		if (func_215(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_214();
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
				func_213();
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
				if (func_212())
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
			if (func_125())
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
			func_211();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_210();
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
		func_129();
	}
	return 0;
}

void func_210()//Position - 0xC319
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

void func_211()//Position - 0xC34B
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

int func_212()//Position - 0xC3E0
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

void func_213()//Position - 0xC479
{
	if (func_58(14))
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
		Global_14393 = func_205();
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

void func_214()//Position - 0xC51A
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

bool func_215(int iParam0, int iParam1)//Position - 0xC572
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

void func_216(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC5AD
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xC603
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

float func_218(int iParam0, int iParam1, int iParam2)//Position - 0xC69E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
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

int func_219(var uParam0)//Position - 0xC6FA
{
	func_174();
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
	func_174();
	switch (iLocal_279)
	{
		case 0:
			if (func_112(uParam0->f_28[0]))
			{
				func_221();
				iLocal_279++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
				{
					if (func_208(&uLocal_114, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
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
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
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

void func_221()//Position - 0xCA2C
{
	Global_14558 = 0;
	func_222();
}

void func_222()//Position - 0xCA3C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

int func_223(var uParam0, int iParam1)//Position - 0xCA5D
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_228(2))
							{
								if (func_227(uParam0->f_27))
								{
									func_226(uParam0->f_27, *uParam0);
									func_294("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_112(uParam0->f_28[0]))
				{
					if (func_225(uParam0))
					{
						if (func_228(2))
						{
							if (func_227(uParam0->f_27))
							{
								func_226(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (func_225(uParam0))
						{
							if (func_228(2))
							{
								if (func_227(uParam0->f_27))
								{
									func_226(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (func_225(uParam0))
						{
							if (func_228(2))
							{
								if (func_227(uParam0->f_27))
								{
									func_226(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_112(uParam0->f_28[0]))
			{
				if (func_225(uParam0))
				{
					if (func_228(2))
					{
						if (func_227(uParam0->f_27))
						{
							func_226(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_112(uParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], 0))
				{
					if (func_228(3))
					{
						func_226(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_224();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_228(2))
						{
							if (func_227(uParam0->f_27))
							{
								func_226(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_228(2))
				{
					if (func_227(uParam0->f_27))
					{
						func_226(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_228(2))
				{
					if (func_227(uParam0->f_27))
					{
						func_226(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_112(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2")))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0]))
							{
								if (func_228(3))
								{
									return 1;
								}
							}
						}
						else if ((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob3")))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0]))
							{
								if (func_228(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_228(2))
						{
							if (func_227(uParam0->f_27))
							{
								func_226(uParam0->f_27, *uParam0);
								func_294("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_228(2))
					{
						if (func_227(1))
						{
							func_226(1, *uParam0);
							func_294("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_228(2))
							{
								if (func_227(uParam0->f_27))
								{
									func_226(uParam0->f_27, *uParam0);
									func_294("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_228(2))
				{
					if (func_227(uParam0->f_27))
					{
						func_226(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_224()//Position - 0xD23F
{
	func_30(&(Global_91351.f_2167), &Global_91351, 0, 1, 1, 0);
}

int func_225(var uParam0)//Position - 0xD25A
{
	float fVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_226(int iParam0, int iParam1)//Position - 0xD2E8
{
	if (iParam0 == 1)
	{
		if (!func_115(iParam1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_294("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_294("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1);
			}
			func_174();
		}
	}
}

int func_227(bool bParam0)//Position - 0xD34B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_141(iVar0))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if ((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xD3E2
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_205();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_235()) || Global_96400) || Global_24446) || func_234()) || func_215(8, -1)) || func_80()) || func_233()) || func_232()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_235()) || Global_24446) || func_234()) || func_215(8, -1)) || func_232()) || func_80()) || func_233()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_235()) || Global_96400) || Global_24446) || func_234()) || func_215(8, -1)) || func_232()) || func_80()) || func_233()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_235()) || Global_96400) || Global_24446) || func_234()) || func_215(8, -1)) || func_80()) || func_233()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_235() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_215(8, -1)) || func_231()) || func_230()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_215(8, -1) || func_80()) || func_233()) || func_230()) || func_229())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_235()) || Global_24446) || func_234()) || func_215(8, -1)) || func_233()) || func_232()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_235()) || func_233()) || Global_96400) || Global_24446) || func_234()) || Global_35957) || func_215(8, -1)) || func_232()) || func_230()) || func_231()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_235()) || Global_96400) || Global_24446) || func_234()) || func_215(8, -1)) || func_232()) || func_230()) || func_80()) || func_233()) || func_231())
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

var func_229()//Position - 0xDAFF
{
	return Global_90001.f_1;
}

int func_230()//Position - 0xDB0D
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_231()//Position - 0xDB33
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xDB4D
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

bool func_233()//Position - 0xDB77
{
	return Global_90014.f_291 > 0;
}

var func_234()//Position - 0xDB88
{
	return Global_1315900;
}

int func_235()//Position - 0xDB94
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

void func_236(var uParam0, var uParam1)//Position - 0xDBB0
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (func_112(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_237(int iParam0, char* sParam1, struct<3> Param2)//Position - 0xDDA5
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_34913 == 17)
			{
				if (*iParam0 != -1)
				{
					func_243(iParam0);
				}
			}
			else if (func_242())
			{
				if (*iParam0 != -1)
				{
					func_243(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_241(PLAYER::PLAYER_PED_ID(), Param2, 1) <= 100f)
				{
					func_240(iParam0, 1);
				}
			}
			else
			{
				switch (func_239(*iParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
						}
						STREAMING::_0xF8155A7F03DDFC8E(2);
						func_238(*iParam0, 1);
						break;
					
					case 2:
						CUTSCENE::STOP_CUTSCENE(0);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::_0xF8155A7F03DDFC8E(0);
						func_238(*iParam0, 0);
						break;
				}
				if (func_241(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f)
				{
					func_243(iParam0);
				}
			}
		}
	}
}

void func_238(int iParam0, bool bParam1)//Position - 0xDE96
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_68241 == iParam0)
		{
			Global_68242 = iParam0;
		}
	}
	else if (Global_68242 == iParam0)
	{
		Global_68242 = -1;
	}
}

int func_239(int iParam0)//Position - 0xDED2
{
	if (Global_68241 == iParam0)
	{
		if (Global_68242 == -1)
		{
			if (Global_68240 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_68242 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_240(int iParam0, int iParam1)//Position - 0xDF0B
{
	bool bVar0;
	int iVar1;
	
	if (Global_68238 < 5)
	{
		Global_68227[Global_68238 /*2*/] = 0;
		Global_68227[Global_68238 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_68238)
			{
				if (Global_68227[iVar1 /*2*/] == Global_68227[Global_68238 /*2*/])
				{
					Global_68227[Global_68238 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_68227[Global_68238 /*2*/];
		Global_68238++;
		Global_68239 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_241(int iParam0, struct<3> Param1, int iParam4)//Position - 0xDFA9
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

bool func_242()//Position - 0xDFE2
{
	return Global_87676;
}

void func_243(int iParam0)//Position - 0xDFEE
{
	CUTSCENE::STOP_CUTSCENE(0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_244(iParam0);
}

void func_244(int iParam0)//Position - 0xE005
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_68242 == *iParam0)
	{
		func_238(*iParam0, 0);
	}
	if (Global_68241 == *iParam0)
	{
		Global_68241 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68238)
	{
		if (Global_68227[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_68238 - 2))
	{
		Global_68227[iVar2 /*2*/] = Global_68227[iVar2 + 1 /*2*/];
		Global_68227[iVar2 /*2*/].f_1 = Global_68227[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68227[(Global_68238 - 1) /*2*/] = -1;
	Global_68227[(Global_68238 - 1) /*2*/].f_1 = 3;
	Global_68238 = (Global_68238 - 1);
	Global_68239 = 1;
	Global_68240 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_245(int iParam0)//Position - 0xE0ED
{
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_96440[iParam0 /*10*/].f_1 = 1;
}

bool func_246(int iParam0)//Position - 0xE115
{
	return Global_96440[iParam0 /*10*/].f_1;
}

void func_247(var uParam0)//Position - 0xE127
{
	if (*uParam0 == 52)
	{
		func_294(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
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
	if (!func_251(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_254(-0.5f)))
	{
	}
	else
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], func_254(-0.5f));
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

float func_254(float fParam0)//Position - 0xE91D
{
	return (fParam0 * 57.29578f);
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
	if (func_203(uParam0))
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
	while (!func_258(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_254(1.03f), 1))
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
	while (!func_258(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_254(0.2f), 1))
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
	if (func_251(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_254(-0.85f)))
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
	return func_264(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_264(struct<3> Param0, float fParam3)//Position - 0xF0AC
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
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
	func_269(&uLocal_107);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !func_268(&uLocal_107))
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
	func_266(&uLocal_107, 0, 3);
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_101, Local_104, 2);
		if (func_112(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
	}
	if (!func_251(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_254(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

void func_266(var uParam0, bool bParam1, int iParam2)//Position - 0xF3A9
{
	var uVar0;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (bParam1)
		{
			MOBILE::GET_MOBILE_PHONE_RENDER_ID(&uVar0);
		}
		else
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("npcphone", 0);
				HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
			}
			uVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
		}
		HUD::SET_TEXT_RENDER_ID(uVar0);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, Global_14313, Global_14314, Global_14315, Global_14316, 255, 255, 255, 255, 0);
	}
}

void func_267(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0xF428
{
	func_137(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
}

int func_268(var uParam0)//Position - 0xF44F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_269(var uParam0)//Position - 0xF466
{
	*uParam0 = unk_0x67D02A194A2FC2BD(func_270());
}

char* func_270()//Position - 0xF479
{
	return "CELLPHONE_CUTSCENE";
}

int func_271()//Position - 0xF485
{
	return func_264(911.5349f, 3642.111f, 31.64738f, 8f);
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
	if (func_112(uParam0->f_28[0]))
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
	if (func_112(uParam0->f_28[1]))
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
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, func_254(-0.26f), 2);
		if (func_112(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_112(uParam0->f_28[1]))
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
	if (func_163(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0xF9F7
{
	struct<27> Var0;
	int iVar32;
	
	func_95(iParam0, &Var0);
	iVar32 = func_205();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Var0.f_26, iVar32))
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
		if (func_276((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_276((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_294("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_276(int iParam0, struct<3> Param1, float fParam4, var uParam5)//Position - 0xFAB0
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_95(iParam0, &Var1);
	if (func_277(Var1.f_6, Param1, fParam4))
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 0))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_173(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_277(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0xFB2D
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_278(int iParam0)//Position - 0xFB79
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0];
}

void func_279(var uParam0, bool bParam1)//Position - 0xFBA6
{
	func_247(uParam0);
	if (bParam1)
	{
		func_294(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_282(uParam0, 0, 0, 0);
	}
	func_281(&(uParam0->f_48));
	if (iLocal_282 != -1)
	{
		func_294("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_244(&iLocal_282);
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
	func_280();
	func_294("SCRIPT TERMINATED");
	Global_87639 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_280()//Position - 0xFC2E
{
	func_294("Running end routines.");
	Global_97071 = (Global_97071 - 1);
}

int func_281(var uParam0)//Position - 0xFC48
{
	if (func_135(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_282(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xFC7E
{
	func_290(uParam0, iParam1);
	func_286(uParam0, bParam2);
	func_283(uParam0, bParam3);
}

void func_283(var uParam0, bool bParam1)//Position - 0xFC9E
{
	func_284(&(uParam0->f_41), bParam1);
}

void func_284(var uParam0, bool bParam1)//Position - 0xFCB0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_137(uParam0[iVar0]);
		}
		else
		{
			func_285(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_285(var uParam0, bool bParam1)//Position - 0xFCEE
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

void func_286(var uParam0, bool bParam1)//Position - 0xFD29
{
	func_287(&(uParam0->f_35), bParam1);
}

void func_287(var uParam0, bool bParam1)//Position - 0xFD3B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_289(uParam0[iVar0]);
		}
		else
		{
			func_288(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_288(var uParam0)//Position - 0xFD78
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_289(var uParam0)//Position - 0xFDAF
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_141(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_112(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_112(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

void func_290(var uParam0, int iParam1)//Position - 0xFE4B
{
	func_291(&(uParam0->f_28), iParam1);
}

void func_291(var uParam0, int iParam1)//Position - 0xFE5D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_293(uParam0[iVar0]);
		}
		else
		{
			func_292(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFE9E
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_293(var uParam0)//Position - 0xFEED
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

void func_294(char* sParam0)//Position - 0xFF2C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_295(var uParam0)//Position - 0xFF3E
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_296()//Position - 0xFF71
{
	func_294("Running start routines.");
	Global_97071++;
}

