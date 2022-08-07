#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53[6];
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	float fLocal_79[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_109[2] = { 0, 0 };
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
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
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_50 = { 2194.135f, 5593.278f, 53.70383f };
	Local_72 = { 2203.27f, 5549.918f, 93.09485f };
	Local_75 = { 2199.629f, 5640.293f, 52.23926f };
	fLocal_78 = 81.5f;
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_136();
	}
	if (func_109(Local_47, -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_99) || (GlobalFunc_6827() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 500f, 500f, 500f, 0, 1, 0)))
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10589())
				{
					func_136();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DS", 0);
			switch (iLocal_45)
			{
				case 0:
					if (func_92())
					{
						func_136();
					}
					func_90();
					iLocal_87 = 1;
					break;
				
				case 1:
					func_24();
					break;
				
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_136();
		}
	}
}

void func_1()//Position - 0x189
{
	if (iLocal_87 && !iLocal_86)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_23(0);
		}
		iLocal_124 = 0;
		while (iLocal_124 < 6)
		{
			if (!PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_115[iLocal_124]))
				{
					HUD::REMOVE_BLIP(&(uLocal_115[iLocal_124]));
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_102[iLocal_124]));
			}
			iLocal_124++;
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		if (bLocal_88)
		{
			GlobalFunc_9558(18, 7, 0);
		}
		else
		{
			GlobalFunc_9558(18, 1, 0);
		}
		iLocal_86 = 1;
	}
	if (SYSTEM::VDIST(GlobalFunc_80(PLAYER::PLAYER_ID()), Local_47) > 150f)
	{
		func_136();
	}
}






















void func_23(int iParam0)//Position - 0x850
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_DRUGFARMATTACKED = iParam0;
}

void func_24()//Position - 0x863
{
	func_70();
	func_69();
	switch (iLocal_46)
	{
		case 0:
			if (OBJECT::DOES_PICKUP_EXIST(uLocal_112))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_113))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_72, Local_75, fLocal_78, 0, 1, 0))
					{
						func_66();
						if (!bLocal_100)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RE20_FADE_RADIO_OUT");
							iLocal_129 = MISC::GET_GAME_TIMER();
							bLocal_100 = true;
						}
						if (!GlobalFunc_6827())
						{
							GlobalFunc_9559(1);
						}
					}
				}
			}
			if (bLocal_100)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_129) > 6000)
				{
					if (!iLocal_101)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("RE20_START");
						iLocal_101 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((((PED::IS_PED_INJURED(iLocal_102[0]) && PED::IS_PED_INJURED(iLocal_102[1])) && PED::IS_PED_INJURED(iLocal_102[2])) && PED::IS_PED_INJURED(iLocal_102[3])) && PED::IS_PED_INJURED(iLocal_102[4]))
			{
				func_25();
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 100f, 100f, 100f, 0, 1, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_124 = 0;
	while (iLocal_124 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_115[iLocal_124]))
			{
				HUD::REMOVE_BLIP(&(uLocal_115[iLocal_124]));
			}
		}
		iLocal_124++;
	}
}

void func_25()//Position - 0x9A9
{
	GlobalFunc_159("DRUG_BLIP_END", -1);
	AUDIO::TRIGGER_MUSIC_EVENT("RE20_END");
	func_23(1);
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_88 = true;
	func_29(-1, 0);
	GlobalFunc_7068();
	iLocal_45 = 2;
}




void func_29(int iParam0, int iParam1)//Position - 0xA78
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8917(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}





































void func_66()//Position - 0x253D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_113))
	{
		HUD::REMOVE_BLIP(&uLocal_113);
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_112))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_114))
			{
				uLocal_114 = GlobalFunc_5666(uLocal_112);
			}
		}
	}
}



void func_69()//Position - 0x25BE
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_112))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_113))
		{
			HUD::REMOVE_BLIP(&uLocal_113);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_99 = 1;
		iLocal_126 = 2;
		iLocal_46 = 1;
	}
}

void func_70()//Position - 0x25EC
{
	int iVar0;
	int iVar1;
	
	iLocal_124 = 0;
	while (iLocal_124 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_115[iLocal_124]))
			{
				HUD::REMOVE_BLIP(&(uLocal_115[iLocal_124]));
			}
			iLocal_126 = 2;
		}
		else
		{
			if ((func_89() && iLocal_126 != 2) || (iLocal_126 == 1 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (func_86())
				{
					GlobalFunc_878(&uLocal_130, 4, iLocal_102[iLocal_124], "DRUGFARMGOON", 0, 1);
					GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_126 = 2;
			}
			switch (iLocal_126)
			{
				case 0:
					if (!iLocal_89[iLocal_124])
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID(), 15f, 15f, 40f, 0, 1, 0) && PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_102[iLocal_124])) || PED::CAN_PED_SEE_HATED_PED(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_72, Local_75, fLocal_78, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2205.918f, 5633.455f, 55.7472f, 15f, 15f, 40f, 0, 1, 0))
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
									GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_102)
								{
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_102[iLocal_124]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_102[iVar0], uLocal_123);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
									PED::SET_PED_USING_ACTION_MODE(iLocal_102[iVar0], 1, -1, 0);
									iVar0++;
								}
								iLocal_89[iLocal_124] = 1;
								iLocal_129 = MISC::GET_GAME_TIMER();
								iLocal_126 = 1;
							}
						}
					}
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_102)
					{
						if (!iLocal_89[iVar1])
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_102[iLocal_124]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_102[iVar1], uLocal_123);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
							PED::SET_PED_USING_ACTION_MODE(iLocal_102[iVar1], 1, -1, 0);
							iLocal_89[iVar1] = 1;
						}
						iVar1++;
					}
					if (!PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID(), 50f))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_PED_KEEP_TASK(iLocal_102[iLocal_124], 1);
						}
					}
					if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_127 == 0)
						{
							iLocal_127 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_128 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_128 = 0;
						iLocal_127 = 0;
					}
					if (iLocal_89[iLocal_124] && !iLocal_96)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_129) > 6000)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_96 = 1;
							}
						}
					}
					if (iLocal_89[iLocal_124] && !iLocal_97)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_129) > 12000)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_97 = 1;
							}
						}
					}
					if (iLocal_89[iLocal_124])
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_129) > 18000 || (iLocal_128 - iLocal_127) > 5000) || PED::IS_PED_IN_COMBAT(iLocal_102[iLocal_124], 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_72, Local_75, fLocal_78, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID(), 15f, 15f, 5f, 0, 1, 0))
							{
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								if (func_86())
								{
									GlobalFunc_878(&uLocal_130, 4, iLocal_102[iLocal_124], "DRUGFARMGOON", 0, 1);
									GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
									GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_126 = 2;
							}
							else
							{
								if (!PED::IS_PED_IN_COMBAT(iLocal_102[iLocal_124], 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_102[iLocal_124]);
									if (!PED::IS_PED_INJURED(iLocal_102[0]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.627f, 55.0029f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.951f, 5593.625f, 52.9483f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_102[0], uLocal_123);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[0], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_102[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.498f, 5560.702f, 52.8606f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_102[1], uLocal_123);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[1], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_102[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.646f, 5593.576f, 52.8312f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.916f, 5599.589f, 53.2311f, 12000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_102[2], uLocal_123);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[2], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_102[3]) && !PED::IS_PED_INJURED(iLocal_102[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_102[4], -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_102[4], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_102[3], uLocal_123);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[3], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_102[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_102[3], -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_102[3], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_102[4], uLocal_123);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[4], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_102[5]))
									{
										TASK::TASK_GUARD_CURRENT_POSITION(iLocal_102[5], 0f, 3f, 1);
										PED::SET_PED_USING_ACTION_MODE(iLocal_102[5], 0, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_89)
								{
									iLocal_89[iVar1] = 0;
									iVar1++;
								}
								iLocal_89[iLocal_124] = 0;
								iLocal_126 = 0;
							}
						}
					}
					break;
				
				case 2:
					func_66();
					iLocal_124 = 0;
					while (iLocal_124 < 6)
					{
						if (!PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
						{
							if (!PED::IS_PED_IN_COMBAT(iLocal_102[iLocal_124], 0))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_102[iLocal_124]);
								TASK::TASK_COMBAT_PED(iLocal_102[iLocal_124], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_102[iLocal_124], 1);
								if (!HUD::DOES_BLIP_EXIST(uLocal_115[iLocal_124]))
								{
									uLocal_115[iLocal_124] = GlobalFunc_7502(iLocal_102[iLocal_124], 1, 145);
								}
							}
						}
						if (!iLocal_98)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
								GlobalFunc_10643(&uLocal_130, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_98 = 1;
							}
						}
						iLocal_124++;
					}
					break;
				}
		}
		iLocal_124++;
	}
}
















bool func_86()//Position - 0x366A
{
	return Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_DRUGFARMATTACKED;
}



int func_89()//Position - 0x36AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_109)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_109[iVar0], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_109[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_102)
	{
		if (!PED::IS_PED_INJURED(iLocal_102[iVar0]))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_102[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_102[iVar0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_102[iVar0]))
				{
					return 1;
				}
			}
			if ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1), 5f, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_102[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_102[iVar0])) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_102[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_72, Local_75, fLocal_78))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_72, Local_75, fLocal_78, 0, 1, 0))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, 0, 1, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_90()//Position - 0x391F
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("prop_cash_case_01"));
	if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_case_01")))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_47 - Vector(20f, 50f, 50f), Local_47 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		iLocal_109[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109[0], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_109[0]);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_109[0], 1, 1);
		iLocal_109[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_109[1], 1, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_109[1], 1, 0);
		iVar0 = 0;
		MISC::SET_BIT(&iVar0, 1);
		uLocal_112 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_50, -1.368082f, 0.230633f, 176.8749f, iVar0, MISC::GET_RANDOM_INT_IN_RANGE(40000, 100000), 2, 1, joaat("prop_cash_case_01"));
		Local_53[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_79[0] = 352.2203f;
		Local_53[1 /*3*/] = { 2210.584f, 5580.684f, 52.8132f };
		fLocal_79[1] = 300.5012f;
		Local_53[2 /*3*/] = { 2201.302f, 5589.279f, 52.9354f };
		fLocal_79[2] = 53.1602f;
		Local_53[3 /*3*/] = { 2202.535f, 5613.367f, 52.6781f };
		fLocal_79[3] = 70f;
		Local_53[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_79[4] = 53f;
		Local_53[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_79[5] = 338.8346f;
		PED::ADD_RELATIONSHIP_GROUP("DrugCult", &iLocal_122);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_122, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("COP"), iLocal_122);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_122, 1862763509);
		iLocal_124 = 0;
		while (iLocal_124 < 6)
		{
			iLocal_102[iLocal_124] = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), Local_53[iLocal_124 /*3*/], fLocal_79[iLocal_124], 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_102[iLocal_124], 1);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_102[iLocal_124], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_102[iLocal_124], 50, 1);
			PED::SET_PED_COMBAT_RANGE(iLocal_102[iLocal_124], 0);
			PED::SET_PED_ACCURACY(iLocal_102[iLocal_124], 13);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_102[iLocal_124], iLocal_122);
			iLocal_125 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iLocal_125 == 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_102[iLocal_124], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			}
			else if (iLocal_125 == 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_102[iLocal_124], joaat("weapon_microsmg"), -1, 1, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_102[iLocal_124], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_102[iLocal_124], 42, 1);
			GlobalFunc_878(&uLocal_130, 3, iLocal_102[iLocal_124], "SalvadorGang", 0, 1);
			iLocal_124++;
		}
		if (!PED::IS_PED_INJURED(iLocal_102[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_102[0], uLocal_123);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_102[0], "piDrugCult[0]");
		if (!PED::IS_PED_INJURED(iLocal_102[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_102[1], uLocal_123);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_102[1], "piDrugCult[1]");
		if (!PED::IS_PED_INJURED(iLocal_102[2]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_123, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_102[2], uLocal_123);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_102[2], "piDrugCult[2]");
		if (!PED::IS_PED_INJURED(iLocal_102[3]) && !PED::IS_PED_INJURED(iLocal_102[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_102[4], -1, 2f, 1f, 1073741824, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_102[4], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_102[3], uLocal_123);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_102[3], "piDrugCult[3]");
		if (!PED::IS_PED_INJURED(iLocal_102[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_123);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_102[3], -1, 2f, 1f, 1073741824, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_102[3], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_123);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_102[4], uLocal_123);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_123);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_102[4], "piDrugCult[4]");
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_102[5], 0f, 3f, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_102[5], "piDrugCult[5]");
		uLocal_113 = GlobalFunc_5104(Local_50, 0);
		HUD::SET_BLIP_SPRITE(uLocal_113, 140);
		GlobalFunc_159("DRUG_BLIP_START", -1);
		iLocal_45 = 1;
	}
}


int func_92()//Position - 0x3F7D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9560(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

















int func_109(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5C70
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_2663())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_9560(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_6509(GlobalFunc_8354()) == 4 || GlobalFunc_6509(GlobalFunc_8354()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (!GlobalFunc_9561(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10590())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_9547(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8354() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}



























void func_136()//Position - 0x6F5A
{
	if (iLocal_87)
	{
		if (!iLocal_86)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_23(0);
			}
			iLocal_124 = 0;
			while (iLocal_124 < 6)
			{
				if (!PED::IS_PED_INJURED(iLocal_102[iLocal_124]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_115[iLocal_124]))
					{
						HUD::REMOVE_BLIP(&(uLocal_115[iLocal_124]));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_102[iLocal_124]));
				}
				iLocal_124++;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			if (bLocal_88)
			{
				GlobalFunc_9558(18, 7, 0);
			}
			else
			{
				GlobalFunc_9558(18, 1, 0);
			}
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}







