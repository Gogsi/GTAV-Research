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
	struct<3> Local_91 = { 0, 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 16;
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
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
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
	int iVar61[3];
	
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
	Local_91 = { 0f, 0f, 0f };
	iLocal_268 = -1;
	MISC::_0x6F2135B6129620C1(1);
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	GlobalFunc_4517(&Var0);
	Local_91 = { ScriptParam_0.f_1[0 /*3*/] };
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
		func_244(&Var0, 1);
	}
	iVar61[0] = 58;
	iVar61[1] = 59;
	iVar61[2] = 62;
	if (!GlobalFunc_8909(&iVar61, &Var0, Local_91, 1f))
	{
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!GlobalFunc_10546(Var0))
	{
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_9528(Var0))
	{
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_891(43))
	{
		GlobalFunc_143("SP_MISSION_LAMAR is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (GlobalFunc_891(47))
	{
		GlobalFunc_143("SP_MISSION_MICHAEL_2 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (GlobalFunc_891(40))
	{
		GlobalFunc_143("SP_MISSION_FRANKLIN_0 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (GlobalFunc_891(41))
	{
		GlobalFunc_143("SP_MISSION_FRANKLIN_1 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_229(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_244(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Local_91, 5f, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_191(&Var0, 1) || GlobalFunc_9528(Var0))
		{
			func_244(&Var0, 1);
		}
		if (GlobalFunc_891(43))
		{
			GlobalFunc_143("SP_MISSION_LAMAR became available... [TERMINATING]");
			func_244(&Var0, 1);
		}
		else if (GlobalFunc_891(47))
		{
			GlobalFunc_143("SP_MISSION_MICHAEL_2 became available... [TERMINATING]");
			func_244(&Var0, 1);
		}
		else if (GlobalFunc_891(40))
		{
			GlobalFunc_143("SP_MISSION_FRANKLIN_0 became available... [TERMINATING]");
			func_244(&Var0, 1);
		}
		else if (GlobalFunc_891(41))
		{
			GlobalFunc_143("SP_MISSION_FRANKLIN_1 became available... [TERMINATING]");
			func_244(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_268, &(Var0.f_9), Local_91);
		func_164(&Var0);
		if (GlobalFunc_10897(&Var0, 0))
		{
			if (!func_2(&Var0))
			{
				func_244(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_244(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x2DD
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
			if (!func_191(iParam0, *iParam0 != 2))
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


































































































































































void func_164(var uParam0)//Position - 0xAAC5
{
	float fVar0;
	
	if (GlobalFunc_488() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		return;
	}
	if (!iLocal_97)
	{
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1c");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2c");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4c");
		if ((((((((((STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1a") && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1c")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2c")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_3@franklin_3a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_3@franklin_3b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4c"))
		{
			iLocal_97 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_91);
		if (fVar0 < (20f * 20f) && iLocal_97)
		{
			switch (iLocal_98)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						GlobalFunc_1286(&uLocal_99, 3, uParam0->f_28[0], "TONYA", 0, 1);
						if (*uParam0 == 58)
						{
							GlobalFunc_10618(&uLocal_99, "TOWAUD", "TONYA_BECK_1", 4, 0, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 2f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
							}
						}
						else if (*uParam0 == 59)
						{
							GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_1", 4, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
							}
						}
						else if (*uParam0 == 62)
						{
							GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_1", 4, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
							}
						}
						if (!GlobalFunc_226(&uLocal_264))
						{
							GlobalFunc_7777(&uLocal_264);
						}
						else
						{
							GlobalFunc_6877(&uLocal_264);
						}
						iLocal_98 = 1;
						iLocal_267 = 0;
					}
					break;
				
				case 1:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_226(&uLocal_264))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
							}
							GlobalFunc_6877(&uLocal_264);
							iLocal_98 = 2;
						}
					}
					break;
				
				case 2:
					if (GlobalFunc_226(&uLocal_264))
					{
						if (GlobalFunc_5182(&uLocal_264) > MISC::GET_RANDOM_FLOAT_IN_RANGE(9f, 15f))
						{
							iLocal_267++;
							switch (iLocal_267)
							{
								case 1:
									if (*uParam0 == 58)
									{
										GlobalFunc_10618(&uLocal_99, "TOWAUD", "TONYA_BECK_2", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 2f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_2", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_2", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									break;
								
								case 2:
									if (*uParam0 == 58)
									{
										GlobalFunc_10618(&uLocal_99, "TOWAUD", "TONYA_BECK_3", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 2f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_3", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_3", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									break;
								
								case 3:
									if (*uParam0 == 58)
									{
										GlobalFunc_10618(&uLocal_99, "TOWAUD", "TONYA_BECK_4", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 2f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_4", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_4", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									break;
								
								case 4:
									if (*uParam0 == 58)
									{
										GlobalFunc_10618(&uLocal_99, "TOWAUD", "TONYA_BECK_5", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 2f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_5", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										GlobalFunc_10630(&uLocal_99, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_5", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0]))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_95);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_95);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uLocal_95);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_95);
											iLocal_98 = 1;
										}
									}
									break;
							}
							if (iLocal_267 > 4)
							{
								iLocal_267 = 1;
								iLocal_98 = 1;
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}



























int func_191(int iParam0, bool bParam1)//Position - 0xC38A
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
		if (!func_201(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_201(iParam0, 0, 0))
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










int func_201(var uParam0, bool bParam1, int iParam2)//Position - 0xCF4B
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
						if (func_203(uParam0->f_28[iVar0], 1126825984))
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


int func_203(int iParam0, float fParam1)//Position - 0xD23B
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
				if (func_204(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_204(int iParam0, float fParam1)//Position - 0xD2B1
{
	return func_205(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_205(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD2C9
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_213(iParam0, iParam1);
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
		iVar4 = func_208();
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



int func_208()//Position - 0xD57B
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





int func_213(int iParam0, int iParam1)//Position - 0xD6D1
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
















int func_229(int iParam0)//Position - 0xDD45
{
	if (!func_230(iParam0))
	{
		return 0;
	}
	uLocal_94 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_91 - Vector(10f, 10f, 10f), Local_91 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_96 = 1;
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_230(var uParam0)//Position - 0xDD99
{
	bool bVar0;
	var uVar1;
	
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11f;
			uParam0->f_27 = 0;
			if (*uParam0 == 58)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_1", 24);
			}
			else if (*uParam0 == 59)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_2", 24);
			}
			else if (*uParam0 == 62)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_3", 24);
			}
			STREAMING::REQUEST_MODEL(joaat("ig_tonya"));
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@intro");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@base");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5a");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5b");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5c");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (((((!STREAMING::HAS_MODEL_LOADED(joaat("ig_tonya")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@intro")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@base")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5a")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5b")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5c"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar0 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				uParam0->f_28[0] = PED::CREATE_PED(5, joaat("ig_tonya"), -16.53f, -1473.12f, 29.61f, 319.56f, 1, 1);
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("ig_tonya"), 1);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
				}
				else
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@intro", "idle_intro", 4f, -4f, -1, 262144, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
			}
			MISC::CLEAR_AREA_OF_OBJECTS(-16.53f, -1473.12f, 29.61f, 1f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_tonya"));
			return 1;
			break;
	}
	return 0;
}














void func_244(int iParam0, bool bParam1)//Position - 0xE5B6
{
	GlobalFunc_4956();
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@intro");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@base");
	if (iLocal_97)
	{
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1c");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2c");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4c");
	}
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5a");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5b");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5c");
	if (iLocal_268 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_268);
	}
	if (iLocal_96)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
	}
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}


















