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
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 16;
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
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	struct<3> Local_273[3];
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
	int iVar65[8];
	
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
	uLocal_91 = GlobalFunc_4946(60);
	uLocal_92 = GlobalFunc_4946(14);
	iLocal_95 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	iVar64 = 1;
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar65[0] = 9;
	iVar65[1] = 10;
	iVar65[2] = 11;
	iVar65[3] = 12;
	iVar65[4] = 13;
	iVar65[5] = 14;
	iVar65[6] = 15;
	iVar65[7] = 16;
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
		func_447(&Var0, 1);
	}
	if (!GlobalFunc_8909(&iVar65, &Var0, Var61, 5f))
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
	while (!func_402(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_447(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0 == 11)
	{
		GlobalFunc_1286(&uLocal_97, 3, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0 == 12)
	{
		GlobalFunc_1286(&uLocal_97, 4, Var0.f_28[0], "MARNIE", 0, 1);
		GlobalFunc_1286(&uLocal_97, 5, Var0.f_28[1], "JIMMYBOSTON", 0, 1);
		iLocal_262 = MISC::GET_GAME_TIMER();
		func_400();
	}
	if (Var0 == 13)
	{
		GlobalFunc_1286(&uLocal_97, 4, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0 == 16)
	{
		GlobalFunc_1286(&uLocal_97, 4, Var0.f_28[0], "EPSGUARD5", 0, 1);
		GlobalFunc_1286(&uLocal_97, 5, Var0.f_28[1], "EPSGUARD6", 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_380(&Var0, 1))
		{
			if (Var0 == 16 && BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				GlobalFunc_143("Epsilon 8 kicking off! [TERMINATING]");
				func_379(&Var0);
				func_378();
			}
			if (Var0 == 14)
			{
				GlobalFunc_4927(37, 1);
			}
			func_447(&Var0, 1);
		}
		if (Var0 == 10)
		{
			func_361();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 237.926f, 360.2992f, 103.6515f, 244.6899f, 357.8277f, 107.3224f, 4.75f, 0, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
		else if (Var0 == 11)
		{
			if (GlobalFunc_115(Var0.f_28[0]))
			{
				if (!PED::IS_PED_FLEEING(Var0.f_28[0]) && !PED::IS_PED_RAGDOLL(Var0.f_28[0]))
				{
					GlobalFunc_7520(&Var0, Var61, "EPS3AUD", "EP3_AMB", 3, "MARNIE", 500, 1101004800);
				}
				if (func_340(Var0.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism3"))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_266);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism3", "outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_266);
						TASK::TASK_PERFORM_SEQUENCE(Var0.f_28[0], uLocal_266);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(Var0.f_28[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					PED::SET_PED_KEEP_TASK(Var0.f_28[0], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Var0.f_28[0]));
					func_447(&Var0, 1);
				}
			}
		}
		else if (Var0 == 12)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_143("Can request assets for cutscene entity in Eps 4");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
			func_339();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, 0, 1, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 713668775))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 1193033728);
					}
				}
			}
			func_337();
		}
		else if (Var0 == 13)
		{
			if (GlobalFunc_115(Var0.f_28[0]))
			{
				if (!PED::IS_PED_FLEEING(Var0.f_28[0]) && !PED::IS_PED_RAGDOLL(Var0.f_28[0]))
				{
					if (func_333(&Var0, Var61, "EPS5AUD", "EP5_AMB", 4, "MARNIE", 1500))
					{
						GlobalFunc_143("Triggered Mary Ann Eps 5 conv");
					}
				}
				if (func_340(Var0.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_143("Killed Eps 5 conversation (threat)");
						GlobalFunc_4935();
					}
					TASK::TASK_SMART_FLEE_PED(Var0.f_28[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(Var0.f_28[0], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Var0.f_28[0]));
					func_447(&Var0, 1);
				}
			}
		}
		else if (Var0 == 14)
		{
			func_330(&Var0);
		}
		else if (Var0 == 15)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_143("Can request assets for cutscene entity in Eps 7");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		else if (Var0 == 16)
		{
			func_320();
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_95, &(Var0.f_9), Var61);
		func_310(&Var0, &iVar64);
		if (GlobalFunc_10897(&Var0, 0))
		{
			if (!func_152(&Var0))
			{
				func_149(&Var0, &iVar64);
			}
			else
			{
				if (GlobalFunc_4508(Var0))
				{
					GlobalFunc_7518(Var0, &uLocal_265);
				}
				if (!func_2(&Var0))
				{
					func_447(&Var0, 1);
				}
				if (GlobalFunc_4504(&Var0))
				{
					func_447(&Var0, 0);
				}
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x63A
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
			if (!func_380(iParam0, *iParam0 != 2))
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
	if (!func_97(iParam0))
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
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*iParam0, Var0);
	return 1;
}




















void func_22(char[4] cParam0, int iParam1)//Position - 0x108C
{
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0x10A9
{
	if (Global_Mission_Fail_State != 10 && Global_Mission_Fail_State != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_25(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D7E
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
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
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}








































































int func_97(var uParam0)//Position - 0x89F3
{
	var uVar0;
	
	if (GlobalFunc_6480(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			GlobalFunc_8955(1);
			GlobalFunc_4923(uParam0, 1, GlobalFunc_4506(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (GlobalFunc_4505(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_8535();
					SYSTEM::WAIT(0);
				}
			}
		}
		GlobalFunc_9525(*uParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 17000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_143("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			GlobalFunc_143("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}




















































void func_149(var uParam0, int iParam1)//Position - 0xA11B
{
	if (*iParam1)
	{
		switch (*uParam0)
		{
			case 15:
				GlobalFunc_143("Need to wear robes to launch Epsilon 7...");
				GlobalFunc_4310("BADSUIT_HELP", "OUTFIT_P0_11", -1);
				*iParam1 = 0;
				break;
			
			case 16:
				GlobalFunc_143("Need robes and $ to launch Epsilon 8...");
				func_150("NOCASH_HELP", "OUTFIT_P0_11", 50000, -1);
				*iParam1 = 0;
				break;
			
			default:
				GlobalFunc_143("Tried to show help text for invalid mission");
				break;
			}
	}
}

void func_150(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xA184
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam3);
}


int func_152(var uParam0)//Position - 0xA1C4
{
	switch (*uParam0)
	{
		case 15:
			return func_294(*uParam0);
			break;
		
		case 16:
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				GlobalFunc_10969(joaat("player_zero"), 12, 28, 1);
				GlobalFunc_11088(joaat("player_zero"), 12, 28, 1, 1);
				GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 12, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_10829(0, 1, 50000, 0, 0);
			}
			if (GlobalFunc_469(0) >= 50000 || Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFinalEpsilonPayment == 1)
			{
				return func_294(*uParam0);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}














































































































































int func_294(int iParam0)//Position - 0x27858
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 15:
				if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 8))
				{
					return 1;
				}
				break;
			
			case 16:
				if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 8) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 28))
				{
					return 1;
				}
				break;
			
			default:
				return 1;
				break;
			}
	}
	return 0;
}
















void func_310(var uParam0, int iParam1)//Position - 0x28A7A
{
	if (!*iParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_17[0 /*3*/], 1) > 25f)
				{
					GlobalFunc_143("Resetting help text flag as player has moved out of range...");
					*iParam1 = 1;
				}
			}
		}
	}
}










void func_320()//Position - 0x28E3C
{
	switch (iLocal_96)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_262) > 20000)
			{
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -726.45f, 33.33f, 43.23f, 1) < 9f)
			{
				if (GlobalFunc_10618(&uLocal_97, "EPS8AU", "EPS8_AMB1", 7, 0, 0, 0))
				{
					iLocal_96 = 2;
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -666.55f, 49.19f, 42.08f, 1) < 9f)
			{
				if (GlobalFunc_10618(&uLocal_97, "EPS8AU", "EPS8_AMB2", 7, 0, 0, 0))
				{
					iLocal_96 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_262 = MISC::GET_GAME_TIMER();
				iLocal_96 = 0;
			}
			break;
	}
}










void func_330(int iParam0)//Position - 0x2951B
{
	if (GlobalFunc_115(iParam0->f_28[0]))
	{
		switch (iLocal_271)
		{
			case 0:
				iLocal_272 = 0;
				Local_273[0 /*3*/] = { -2887.15f, 3197.88f, 10.17f };
				Local_273[1 /*3*/] = { -2888.92f, 3203.76f, 10.6f };
				Local_273[2 /*3*/] = { -2895.37f, 3199.37f, 10.03f };
				STREAMING::REQUEST_ANIM_DICT("rcmepsilonism6");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism6"))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0, 0, 0, 0);
					iLocal_271 = 1;
					GlobalFunc_143("Initialised Eps 6 Tom state machine");
				}
				break;
			
			case 1:
				if (!GlobalFunc_6964(iParam0->f_28[0], 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0->f_28[0], Local_273[iLocal_272 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
					GlobalFunc_143("Eps 6: Nav tasking Tom...");
					iLocal_271 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_713(iParam0->f_28[0], Local_273[iLocal_272 /*3*/], 1) <= 1.2f)
				{
					iLocal_271 = 3;
					GlobalFunc_143("Eps 6: Tom at coord; do idle anim");
				}
				break;
			
			case 3:
				TASK::CLEAR_PED_TASKS(iParam0->f_28[0]);
				TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 16f, -2f, -1, 131072, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_28[0], 0, 0);
				iLocal_271 = 4;
				GlobalFunc_143("Eps 6: Done Tom idle anim");
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a") >= 0.98f)
					{
						if (iLocal_272 >= 2)
						{
							iLocal_272 = 0;
						}
						else
						{
							iLocal_272++;
						}
						TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 16f, -8f, -1, 49, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_28[0], 0, 0);
						iLocal_271 = 1;
						GlobalFunc_143("Eps 6: Tom idle anim >0.98");
					}
				}
				else
				{
					if (iLocal_272 >= 2)
					{
						iLocal_272 = 0;
					}
					else
					{
						iLocal_272++;
					}
					TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0, 0, 0, 0);
					iLocal_271 = 1;
					GlobalFunc_143("Eps 6: Tom idle anim not playing");
				}
				break;
			}
	}
}



int func_333(var uParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8)//Position - 0x297AC
{
	var uVar0;
	
	if (GlobalFunc_9039(2))
	{
		if (!GlobalFunc_111())
		{
			if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(uParam0->f_28[0])) && (MISC::GET_GAME_TIMER() - uParam0->f_60) > iParam8) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
			{
				uVar0 = 16;
				GlobalFunc_1286(&uVar0, iParam6, uParam0->f_28[0], sParam7, 0, 1);
				GlobalFunc_5157(&uVar0, cParam4, sParam5, 7, 0, 0);
				uParam0->f_60 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else if (GlobalFunc_5664(sParam5))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
				{
					GlobalFunc_4935();
				}
			}
		}
	}
	return 0;
}




void func_337()//Position - 0x298ED
{
	switch (iLocal_96)
	{
		case 0:
			iLocal_96 = 1;
			break;
		
		case 1:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1826.45f, 4699.58f, 38.15f, 1) <= 25f && iLocal_263 == 0)
			{
				if (GlobalFunc_10618(&uLocal_97, "EPS4AUD", "EPS4_AMBJ", 8, 0, 0, 0))
				{
					iLocal_96 = 2;
					iLocal_263 = 1;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_96 = 0;
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 1826.45f, 4699.58f, 38.15f, 1) >= 28f)
			{
				GlobalFunc_4935();
				iLocal_96 = 0;
			}
			break;
	}
}


void func_339()//Position - 0x299CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_267, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_267, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(uLocal_268);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_267, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_269) > 1250)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(uLocal_270, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", 0, 0, 0);
		iLocal_269 = MISC::GET_GAME_TIMER();
	}
}

int func_340(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x29A91
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_354(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_341(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0, float fParam1)//Position - 0x29B4C
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
				if (func_342(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_342(int iParam0, float fParam1)//Position - 0x29BC2
{
	return func_343(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_343(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x29BDA
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_351(iParam0, iParam1);
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
		iVar4 = func_346();
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



int func_346()//Position - 0x29E8C
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





int func_351(int iParam0, int iParam1)//Position - 0x29FE2
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



int func_354(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2A090
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
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (GlobalFunc_2996(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (GlobalFunc_8055(iParam0, fVar1, bParam3, bParam4))
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
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
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
				if (GlobalFunc_2996(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (GlobalFunc_8055(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}







void func_361()//Position - 0x2A4AA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_264)
			{
				GlobalFunc_10617(109, 0);
				iLocal_264 = 0;
			}
		}
		else if (!iLocal_264)
		{
			GlobalFunc_10617(109, 1);
			iLocal_264 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.9669f, 374.6696f, 104.4579f, 239.6119f, 360.3045f, 107.7523f, 9.0625f, 0, 1, 0))
	{
		Global_2268 = 1;
	}
	else
	{
		Global_2268 = 0;
	}
}

















void func_378()//Position - 0x2E549
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_93, 1862763509);
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -726.45f, 33.33f, 43.23f, 1) <= GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -666.55f, 49.19f, 42.08f, 1))
	{
		GlobalFunc_10618(&uLocal_97, "EPS8AU", "EPS8_AMA1", 8, 0, 0, 0);
	}
	else
	{
		GlobalFunc_10618(&uLocal_97, "EPS8AU", "EPS8_AMA2", 8, 0, 0, 0);
	}
}

void func_379(int iParam0)//Position - 0x2E5BC
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

int func_380(var uParam0, bool bParam1)//Position - 0x2E63C
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
		if (!func_389(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_389(uParam0, 0, 0))
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
				func_379(uParam0);
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









int func_389(var uParam0, bool bParam1, int iParam2)//Position - 0x2F17D
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
								func_379(uParam0);
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
							func_379(uParam0);
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
								func_379(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (GlobalFunc_4514(*uParam0))
					{
						if (!GlobalFunc_4507(*uParam0))
						{
							if (func_354(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									GlobalFunc_7522(uParam0);
								}
								else
								{
									func_379(uParam0);
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
								func_379(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_341(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								func_379(uParam0);
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
								func_379(uParam0);
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
								func_379(uParam0);
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











void func_400()//Position - 0x2F708
{
	uLocal_267 = unk_0x67D02A194A2FC2BD("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_267))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", 0);
	}
	HUD::LINK_NAMED_RENDERTARGET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_digiscanner")));
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		uLocal_268 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
	uLocal_270 = AUDIO::GET_SOUND_ID();
	iLocal_269 = MISC::GET_GAME_TIMER();
}


int func_402(int iParam0)//Position - 0x2F810
{
	switch (*iParam0)
	{
		case 9:
			if (!func_433(iParam0))
			{
				return 0;
			}
			break;
		
		case 10:
			if (!func_424(iParam0))
			{
				return 0;
			}
			break;
		
		case 11:
			if (!func_422(iParam0))
			{
				return 0;
			}
			break;
		
		case 12:
			if (!func_420(iParam0))
			{
				return 0;
			}
			break;
		
		case 13:
			if (!func_414(iParam0))
			{
				return 0;
			}
			break;
		
		case 14:
			if (!func_413(iParam0))
			{
				return 0;
			}
			break;
		
		case 15:
			if (!func_412(iParam0))
			{
				return 0;
			}
			break;
		
		case 16:
			if (!func_406(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 12)
	{
		uLocal_94 = GlobalFunc_2835();
	}
	else if (*iParam0 == 15)
	{
		uLocal_94 = func_404();
		MISC::CLEAR_AREA_OF_PEDS(538.45f, 3079.61f, 39.27f, 75f, 0);
	}
	else if (*iParam0 == 16)
	{
		uLocal_94 = func_403();
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

var func_403()//Position - 0x2F92A
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, 0, 1, 1, 1);
}

var func_404()//Position - 0x2F958
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(529.7899f, 3067.578f, 37.8313f, 545.8693f, 3098.999f, 43.0209f, 0, 1, 1, 1);
}


int func_406(var uParam0)//Position - 0x2F9B4
{
	int iVar0[3];
	int iVar4;
	
	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("s_m_m_highsec_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -670.9681f, 53.53062f, 40.04339f };
			uParam0->f_17[1 /*3*/] = { -723.7632f, 34.0545f, 46.97017f };
			uParam0->f_24 = 19.75f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_8_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
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
			GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 0, 0);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uParam0->f_35[0], 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
			GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[1], -697.3215f, 39.0406f, 42.86736f, -66.98854f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 3);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[1], "K1FFL0M");
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[1], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[1], 0);
			GlobalFunc_6479(&(uParam0->f_28[0]), iVar0[2], -726.4555f, 33.33568f, 43.22695f, -147.8099f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_smg"), -1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 1, 0, 0);
			GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[2], -666.5512f, 49.19759f, 42.07154f, -171.6803f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_smg"), -1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[1], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
			GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			GlobalFunc_6479(&(uParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[2], uParam0->f_35[0], -1);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[3], uParam0->f_35[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("weapon_combatpistol"), -1, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[3], joaat("weapon_microsmg"), -1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 11, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 11, 0, 1, 0);
			PED::ADD_RELATIONSHIP_GROUP("gang", &uLocal_93);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uLocal_93);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], uLocal_93);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[2], uLocal_93);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[3], uLocal_93);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[0], 0);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[1], 0);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}






int func_412(var uParam0)//Position - 0x2FFCB
{
	uParam0->f_16 = 5;
	uParam0->f_17[0 /*3*/] = { 513.48f, 3081.22f, 38.84f };
	uParam0->f_17[1 /*3*/] = { 530.53f, 3073f, 44.13f };
	uParam0->f_24 = 9.25f;
	uParam0->f_27 = 0;
	StringCopy(&(uParam0->f_9), "EP_7_RCM", 24);
	return 1;
}

int func_413(var uParam0)//Position - 0x30023
{
	int iVar0[2];
	int iVar3;
	var uVar4;
	char* sVar5;
	bool bVar6;
	var uVar7;
	
	sVar5 = "rcmepsilonism6";
	iVar0[0] = joaat("velum");
	iVar0[1] = joaat("ig_tomepsilon");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -2869.424f, 3170.774f, 1.954f };
			uParam0->f_17[1 /*3*/] = { -2918.701f, 3217.056f, 32.294f };
			uParam0->f_24 = 94.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar5);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar5))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar6 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				uVar4 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-2892.93f, 3192.37f, 11.66f, 11f, iVar0[0], 16390);
				if (GlobalFunc_115(uVar4))
				{
					uParam0->f_35[0] = uVar4;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar4, 1, 1);
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-2892.93f, 3192.37f, 11.66f, 11f, 0, 0, 0, 0, 0);
					GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], -2892.93f, 3192.37f, 11.66f, -132.35f);
				}
			}
			GlobalFunc_4927(37, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_35[0]);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 157, 5);
				VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[0], 3);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				if (Global_68490)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2907.29f, 3215.91f, 9.86f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 215.2149f);
					}
				}
			}
			else
			{
				bVar6 = false;
			}
			GlobalFunc_6479(&(uParam0->f_28[0]), iVar0[1], -2881.755f, 3188.125f, 10.1136f, 254.1723f, 26);
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				uVar7 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_digiscanner"), -1, 1, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 188, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 0);
			}
			else
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
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

int func_414(var uParam0)//Position - 0x3035F
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	var uVar4;
	
	iVar0[0] = uLocal_91;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 638.1478f, 106.1284f, 87.36301f };
			uParam0->f_17[1 /*3*/] = { 646.6449f, 129.2266f, 93.14977f };
			uParam0->f_24 = 12.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_5_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall", 0);
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
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 60, 636.58f, 119.68f, 90.56f, 80.62f, "EPSILON LAUNCHER RC", 1) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					uVar4 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar4);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}






int func_420(var uParam0)//Position - 0x30677
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	var uVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = uLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
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
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				uVar5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], uVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, 1);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_digiscanner"), -1, 1, 1);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, 0, 0, 0, 0);
					GlobalFunc_4965(uParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
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


int func_422(var uParam0)//Position - 0x308F7
{
	int iVar0[1];
	int iVar2;
	struct<3> Var3;
	var uVar6;
	bool bVar7;
	var uVar8;
	
	Var3 = { 1843.82f, 4705.74f, 38.8f };
	uVar6 = GlobalFunc_569(1.99f);
	iVar0[0] = uLocal_91;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 1842.66f, 4704.65f, 37.81f };
			uParam0->f_15 = 9f;
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "EP_3_RCM_ALT1", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmepsilonism3", "base_loop", 0);
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
			bVar7 = true;
			MISC::CLEAR_AREA_OF_PEDS(Var3, 35f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 60, Var3, uVar6, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
					{
						uVar8 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar8);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmepsilonism3", "ep_3_rcm_marnie_meditating", 1000f, -8f, -1, 786433, 0, 0, 0, 0);
					}
					else
					{
						bVar7 = false;
					}
				}
			}
			if (bVar7)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}


int func_424(var uParam0)//Position - 0x30ACE
{
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 246.8182f, 374.0685f, 103.1233f };
			uParam0->f_17[1 /*3*/] = { 241.9806f, 360.8724f, 108.8699f };
			uParam0->f_24 = 9f;
			uParam0->f_15 = 2f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "EP_2_RCM", 24);
			if (Global_68490)
			{
				GlobalFunc_585(86, 1);
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(241.3607f, 361.0345f, 105.8884f, 4f, joaat("v_ilev_epsstoredoor"), 0))
			{
				return 0;
			}
			iLocal_90 = 3;
			break;
		
		case 3:
			GlobalFunc_10617(109, 0);
			GlobalFunc_7934(11, 0);
			return 1;
			break;
	}
	return 0;
}









int func_433(var uParam0)//Position - 0x31A93
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = joaat("bison");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { -1626.97f, 4205.64f, 83.01f };
			uParam0->f_15 = 17f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EP_1_RCM_Concat", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
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
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], -1619.53f, 4204.1f, 83.3f, 77.92f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 27, 27);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_EPSILONISM_01_HILLS", 1, 0);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}














void func_447(int iParam0, bool bParam1)//Position - 0x3210C
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_143("Cleaning up launcher script entities [TERMINATING]");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_265))
	{
		HUD::REMOVE_BLIP(&uLocal_265);
	}
	if (iLocal_95 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_95);
	}
	if ((*iParam0 == 12 || *iParam0 == 15) || *iParam0 == 16)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_94, 0);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 9:
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_EPSILONISM_01_HILLS", 0, 0);
			break;
		
		case 14:
			STREAMING::REMOVE_ANIM_DICT("rcmepsilonism6");
			break;
	}
	switch (*iParam0)
	{
		case 11:
			sVar0 = "EP3_RCM_L2";
			break;
		
		case 12:
			GlobalFunc_7527("EPS4_AMBM");
			sVar0 = "EPS4_AMBJ";
			break;
		
		case 16:
			GlobalFunc_7527("EPS8_AMB1");
			sVar0 = "EPS8_AMB2";
			break;
	}
	GlobalFunc_7527(sVar0);
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	Global_2268 = 0;
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}




















