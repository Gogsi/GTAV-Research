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
	var uLocal_45 = 0;
	struct<20> Local_46[2];
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115[2] = { 0, 0 };
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131[2];
	float fLocal_138[2] = { 0f, 0f };
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	char[] cLocal_150[8] = 0;
	var uLocal_151 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
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
	float fVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_12 = 3;
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
	iLocal_96 = -1;
	iLocal_97 = -1;
	iLocal_121 = joaat("p_amb_phone_01");
	Local_125 = { -35.607f, -1110.046f, 26.4364f };
	Local_128 = { -126.1154f, -1129.347f, 23.4329f };
	iLocal_142 = -1;
	iLocal_143 = -1;
	iLocal_144 = -1;
	iLocal_145 = -1;
	cLocal_150 = "REYE_AU";
	func_167(ScriptParam_0.f_1[0 /*3*/]);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(27))
	{
		func_166();
	}
	if (func_139(ScriptParam_0.f_1[0 /*3*/], 30, 0, 0, 0))
	{
		GlobalFunc_6828(30);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_124();
	while (true)
	{
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10589())
			{
				func_94();
			}
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", 0);
			}
		}
		fVar0 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 20f);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_98) < (fVar0 * fVar0))
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_102) < (fVar0 * fVar0))
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				func_91(iVar1);
				iVar1++;
			}
			switch (iLocal_87)
			{
				case 0:
					func_73();
					break;
				
				case 1:
					func_55();
					break;
				
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_119)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 2)
			{
				func_91(iVar2);
				iVar2++;
			}
			switch (iLocal_87)
			{
				case 0:
					func_73();
					break;
				
				case 1:
					func_55();
					break;
				
				case 2:
					func_3();
					break;
			}
			if (GlobalFunc_847(uLocal_89))
			{
				if (GlobalFunc_850(uLocal_89, PLAYER::PLAYER_PED_ID(), 1) > 120f)
				{
					func_94();
				}
			}
		}
		else
		{
			func_94();
		}
		SYSTEM::WAIT(0);
	}
}



void func_3()//Position - 0x2BB
{
	switch (iLocal_88)
	{
		case 0:
			if (func_54())
			{
				iLocal_88 = 1;
			}
			func_53();
			break;
		
		case 1:
			func_53();
			if (GlobalFunc_847(uLocal_89))
			{
				if (func_52())
				{
					if (!iLocal_111)
					{
						iLocal_112 = 1;
						iLocal_107 = 1;
						TASK::CLEAR_PED_TASKS(uLocal_89);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_93))
						{
							OBJECT::DELETE_OBJECT(&uLocal_93);
						}
						if (!bLocal_109)
						{
							if (!bLocal_110)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
							}
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89, uLocal_146);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
							iLocal_111 = 1;
						}
						else
						{
							if (!bLocal_110)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (GlobalFunc_850(uLocal_89, PLAYER::PLAYER_PED_ID(), 1) <= 4f)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
								}
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
							}
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89, uLocal_146);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
							iLocal_111 = 1;
						}
					}
					else
					{
						func_35();
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_89, 2f);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 3f))
						{
							PED::DELETE_PED(&uLocal_89);
						}
						if (Local_46[0 /*20*/].f_18 >= 5 && Local_46[1 /*20*/].f_18 >= 5)
						{
							func_4();
						}
					}
				}
				else
				{
					func_35();
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_89, 2f);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 3f))
					{
						PED::DELETE_PED(&uLocal_89);
					}
					if (Local_46[0 /*20*/].f_18 >= 5 && Local_46[1 /*20*/].f_18 >= 5)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
					if (GlobalFunc_847(uLocal_89))
					{
						PED::SET_PED_RESET_FLAG(uLocal_89, 60, 1);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_92))
				{
					HUD::REMOVE_BLIP(&uLocal_92);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_89))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_89))
					{
						if (!iLocal_120)
						{
							iLocal_120 = 1;
						}
					}
				}
				iLocal_112 = 1;
				if (Local_46[0 /*20*/].f_18 >= 5 && Local_46[1 /*20*/].f_18 >= 5)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()//Position - 0x5B9
{
	GlobalFunc_132(&uLocal_89, 1, 0, 1);
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(-1, 0);
	GlobalFunc_7068();
	func_94();
}




void func_8(int iParam0, int iParam1)//Position - 0x680
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



























void func_35()//Position - 0x1C18
{
	if (iLocal_113 == 0)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_847(Local_46[0 /*20*/].f_1))
			{
				GlobalFunc_878(&uLocal_151, 5, Local_46[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (GlobalFunc_847(Local_46[1 /*20*/].f_1))
			{
				GlobalFunc_878(&uLocal_151, 5, Local_46[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_113 = 1;
				iLocal_114 = 1;
			}
			if (iLocal_113 == 0)
			{
				if (GlobalFunc_8354() == 0)
				{
					if (GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETA_MIKE", 7, 0, 0, 0))
					{
						iLocal_113 = 1;
					}
				}
				else if (GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETA_FRAN", 7, 0, 0, 0))
				{
					iLocal_113 = 1;
				}
			}
		}
	}
	else if (iLocal_114 == 0)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_847(Local_46[0 /*20*/].f_1))
			{
				GlobalFunc_5122(Local_46[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_114 = 1;
			}
			else if (GlobalFunc_847(Local_46[1 /*20*/].f_1))
			{
				GlobalFunc_5122(Local_46[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_114 = 1;
			}
			else
			{
				iLocal_114 = 1;
			}
		}
	}
}

















int func_52()//Position - 0x266F
{
	if (GlobalFunc_847(uLocal_89))
	{
		if (!bLocal_109)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) <= 7f || TASK::GET_SCRIPT_TASK_STATUS(uLocal_89, 242628503) == 7)
			{
				if (!iLocal_111)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) <= 7f)
					{
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89, 242628503) == 7)
					{
					}
				}
				return 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) <= 4.5f || TASK::GET_SCRIPT_TASK_STATUS(uLocal_89, 242628503) == 7)
		{
			if (!iLocal_111)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_89, 0), 1) <= 4.5f)
				{
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89, 242628503) == 7)
				{
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_53()//Position - 0x2759
{
	if (GlobalFunc_847(uLocal_89))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89, "cellphone@", "cellphone_call_out", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_93))
				{
					OBJECT::DELETE_OBJECT(&uLocal_93);
				}
			}
		}
	}
}

int func_54()//Position - 0x27A2
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_46[0 /*20*/].f_10);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
	if (INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_55()//Position - 0x27CD
{
	switch (iLocal_88)
	{
		case 0:
			iLocal_88 = 1;
			break;
		
		case 1:
			if (func_54())
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1831288286))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-1831288286, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
				}
				else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1831288286) < 1f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1831288286, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1831288286, 1, 0, 1);
				}
			}
			func_53();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_847(uLocal_90) || GlobalFunc_847(uLocal_91))
				{
					if (func_59())
					{
						if (iLocal_118 == 0)
						{
							if (bLocal_108)
							{
								TASK::CLEAR_PED_TASKS(uLocal_89);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_89, uLocal_146);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(uLocal_89);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_89, uLocal_146);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
							}
							bLocal_119 = true;
							iLocal_118 = 1;
						}
						if (!bLocal_109 && !bLocal_108)
						{
							if (iLocal_96 == -1)
							{
								iLocal_96 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_97 == -1)
							{
								iLocal_97 = 4000;
							}
						}
						else
						{
							if (iLocal_96 == -1)
							{
								iLocal_96 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_97 == -1)
							{
								iLocal_97 = 1000;
							}
						}
						if (iLocal_96 != -1 && iLocal_97 != 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_96) >= iLocal_97)
							{
								func_56();
								AUDIO::TRIGGER_MUSIC_EVENT("RE9_SPOTTED");
								iLocal_106 = 1;
								iLocal_88 = 2;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_92))
					{
						HUD::REMOVE_BLIP(&uLocal_92);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_89))
					{
						if (ENTITY::IS_ENTITY_DEAD(uLocal_89))
						{
							if (!iLocal_120)
							{
								iLocal_120 = 1;
							}
						}
					}
					iLocal_112 = 1;
					if (Local_46[0 /*20*/].f_18 >= 5 && Local_46[1 /*20*/].f_18 >= 5)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.62395f, -1087.37f, 24.59833f, -11.27861f, -1108.28f, 34.17205f, 47.5f, 0, 1, 0))
						{
							func_4();
						}
					}
				}
			}
			break;
		
		case 2:
			iLocal_87 = 2;
			iLocal_88 = 0;
			break;
	}
}

void func_56()//Position - 0x2A24
{
	if (GlobalFunc_8354() == 1)
	{
		GlobalFunc_878(&uLocal_151, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		GlobalFunc_878(&uLocal_151, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	GlobalFunc_878(&uLocal_151, 4, uLocal_89, "SIMEON", 0, 1);
	if (bLocal_110)
	{
		GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
	else if (bLocal_108)
	{
		GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETA_EXT", 7, 1, 0, 0);
	}
	else if (func_57())
	{
		if (GlobalFunc_8354() == 0)
		{
			GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETAM", 7, 0, 0, 0);
		}
		else if (GlobalFunc_8354() == 1)
		{
			GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETAF", 7, 0, 0, 0);
		}
	}
	else
	{
		GlobalFunc_10643(&uLocal_151, cLocal_150, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
}

int func_57()//Position - 0x2AEA
{
	if ((((((((GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("object")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_knife")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_nightstick")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_hammer")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_bat")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_crowbar")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_golfclub")) && GlobalFunc_916(PLAYER::PLAYER_PED_ID()) != joaat("weapon_bottle"))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	return 1;
}


int func_59()//Position - 0x2BD3
{
	if (!PED::IS_COP_PED_IN_AREA_3D(Local_125, Local_128) && !(MISC::IS_POSITION_OCCUPIED(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && MISC::IS_POSITION_OCCUPIED(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			if (!GlobalFunc_6827())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.19015f, -1104.137f, 24.42232f, -33.7943f, -1107.183f, 28.67232f, 8.5f, 0, 1, 0))
				{
					bLocal_109 = true;
					func_71(0);
				}
				else
				{
					bLocal_109 = false;
					func_71(1);
				}
				GlobalFunc_9034(1);
			}
			return 1;
		}
	}
	else if (PED::IS_COP_PED_IN_AREA_3D(Local_125, Local_128) || (MISC::IS_POSITION_OCCUPIED(-61.01321f, -1093.393f, 25.75297f, 2f, 0, 1, 0, 0, 0, 0, 0) && MISC::IS_POSITION_OCCUPIED(-38.59683f, -1109.284f, 25.68742f, 2f, 0, 1, 0, 0, 0, 0, 0)))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			GlobalFunc_132(&(Local_46[0 /*20*/].f_1), 1, 0, 1);
			GlobalFunc_132(&(Local_46[1 /*20*/].f_1), 1, 0, 1);
			GlobalFunc_881(&uLocal_91);
			GlobalFunc_881(&uLocal_90);
			func_94();
		}
	}
	return 0;
}












void func_71(bool bParam0)//Position - 0x32C5
{
	if (bParam0)
	{
		if (GlobalFunc_847(uLocal_91))
		{
			ENTITY::SET_ENTITY_VISIBLE(uLocal_91, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_91, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_91, 1);
			uLocal_89 = uLocal_91;
			uLocal_93 = uLocal_95;
			GlobalFunc_881(&uLocal_90);
			GlobalFunc_130(&uLocal_94);
		}
	}
	else if (GlobalFunc_847(uLocal_90))
	{
		ENTITY::SET_ENTITY_VISIBLE(uLocal_90, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_90, 0);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_90, 1);
		uLocal_89 = uLocal_90;
		uLocal_93 = uLocal_94;
		GlobalFunc_881(&uLocal_91);
		GlobalFunc_130(&uLocal_95);
	}
}


void func_73()//Position - 0x3364
{
	switch (iLocal_88)
	{
		case 0:
			if (func_90())
			{
				iLocal_88 = 1;
			}
			else if (func_78())
			{
				func_94();
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-53.57574f, -1095.356f, 24.17232f, -46.52551f, -1094.587f, 27.42232f, 3.75f, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			if (!GlobalFunc_847(uLocal_90) || !GlobalFunc_847(uLocal_91))
			{
				GlobalFunc_6808(&uLocal_90, 18, Local_98, fLocal_101, 1);
				if (GlobalFunc_847(uLocal_90))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_90, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_90, 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_90, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_90, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_90, iLocal_149);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_90, 1);
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_90, joaat("weapon_pistol"), 999, 0, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(uLocal_90, 0, iLocal_147);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_147, 1862763509);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_90, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_90, 104, 1);
					uLocal_94 = OBJECT::CREATE_OBJECT(iLocal_121, ENTITY::GET_ENTITY_COORDS(uLocal_90, 1), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_94, uLocal_90, PED::GET_PED_BONE_INDEX(uLocal_90, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_146, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_90, uLocal_146);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_90, 1);
				}
				GlobalFunc_6808(&uLocal_91, 18, Local_102, fLocal_105, 1);
				if (GlobalFunc_847(uLocal_91))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_91, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_91, 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_91, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_91, iLocal_149);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_91, 1);
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_91, joaat("weapon_pistol"), 999, 0, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(uLocal_91, 0, iLocal_147);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_147, 1862763509);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_91, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_91, 104, 1);
					uLocal_95 = OBJECT::CREATE_OBJECT(iLocal_121, ENTITY::GET_ENTITY_COORDS(uLocal_91, 1), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_95, uLocal_91, PED::GET_PED_BONE_INDEX(uLocal_91, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_146, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91, uLocal_146);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_90, 1);
				}
			}
			else
			{
				func_74();
				uLocal_122 = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -46.2722f, -1097.466f, 25.42f, 112.5363f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_122, 7);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(uLocal_122, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_122, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_122, 0);
				uLocal_123 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -41.07354f, -1099.567f, 25.42f, 138.4292f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_123, 12);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_123, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_123, 0);
				uLocal_124 = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.74456f, -1101.583f, 25.42f, 155.1573f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_124, 4);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(uLocal_124, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_124, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_124, 0);
				iLocal_88 = 2;
			}
			break;
		
		case 2:
			iLocal_87 = 1;
			iLocal_88 = 0;
			break;
	}
}

void func_74()//Position - 0x3756
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_46[iVar0 /*20*/].f_18 = 1;
		iVar0++;
	}
}




int func_78()//Position - 0x387B
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












int func_90()//Position - 0x5462
{
	if (((((((((((STREAMING::HAS_MODEL_LOADED(Local_46[0 /*20*/]) && STREAMING::HAS_MODEL_LOADED(Local_46[1 /*20*/])) && WEAPON::HAS_WEAPON_ASSET_LOADED(Local_46[0 /*20*/].f_17)) && WEAPON::HAS_WEAPON_ASSET_LOADED(Local_46[1 /*20*/].f_17)) && func_54()) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@")) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@str")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("reyetarian_simeonoffice")) && STREAMING::HAS_MODEL_LOADED(iLocal_121)) && STREAMING::HAS_MODEL_LOADED(joaat("bjxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
	{
		return 1;
	}
	return 0;
}

void func_91(int iParam0)//Position - 0x550E
{
	switch (Local_46[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
		
		case 1:
			if (!Local_46[iParam0 /*20*/].f_19)
			{
				if (!GlobalFunc_847(Local_46[iParam0 /*20*/].f_1))
				{
					Local_46[iParam0 /*20*/].f_1 = PED::CREATE_PED(22, Local_46[iParam0 /*20*/], Local_46[iParam0 /*20*/].f_10, Local_46[iParam0 /*20*/].f_13, 1, 1);
					if (GlobalFunc_847(Local_46[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_START_SCENARIO_AT_POSITION(Local_46[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", Local_131[iParam0 /*3*/], fLocal_138[iParam0], 0, 0, 1);
							PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Local_46[iParam0 /*20*/].f_1);
							PED::_0x425AECF167663F48(Local_46[iParam0 /*20*/].f_1, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_46[iParam0 /*20*/].f_1, -37.34785f, -1102.022f, 25.42232f, 3f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_46[iParam0 /*20*/].f_1, 37, 1);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_46[iParam0 /*20*/].f_1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_46[iParam0 /*20*/].f_1, iLocal_147);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_46[iParam0 /*20*/].f_1, 0, iLocal_147);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_46[iParam0 /*20*/].f_1, 23, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_46[iParam0 /*20*/].f_1, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_46[iParam0 /*20*/].f_1, 28, 1);
						WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_46[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_115[iParam0] = 0;
						if (GlobalFunc_8354() == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_46[iParam0 /*20*/].f_1, Local_46[iParam0 /*20*/].f_17, -1, 1, 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_46[iParam0 /*20*/]);
						Local_46[iParam0 /*20*/].f_19 = 1;
						Local_46[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_847(Local_46[iParam0 /*20*/].f_1))
			{
				if (iLocal_112)
				{
					func_93(Local_46[iParam0 /*20*/].f_1, &(Local_46[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0);
					TASK::CLEAR_PED_TASKS(Local_46[iParam0 /*20*/].f_1);
					PED::SET_PED_USING_ACTION_MODE(Local_46[iParam0 /*20*/].f_1, 1, -1, "DEFAULT_ACTION");
					TASK::OPEN_SEQUENCE_TASK(&uLocal_146);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_46[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_146);
					TASK::TASK_PERFORM_SEQUENCE(Local_46[iParam0 /*20*/].f_1, uLocal_146);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_146);
					Local_46[iParam0 /*20*/].f_18 = 3;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_46[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_46[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_46[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 3:
			if (GlobalFunc_847(Local_46[iParam0 /*20*/].f_1))
			{
				func_93(Local_46[iParam0 /*20*/].f_1, &(Local_46[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_46[iParam0 /*20*/].f_1, 242628503) == 7 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_46[iParam0 /*20*/].f_1, 0), 1) <= 5f)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_46[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_COMBAT_PED(Local_46[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_ALERTNESS(Local_46[iParam0 /*20*/].f_1, 3);
					PED::SET_PED_KEEP_TASK(Local_46[iParam0 /*20*/].f_1, 1);
					Local_46[iParam0 /*20*/].f_18 = 4;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_46[iParam0 /*20*/].f_1, 0), 1) >= 250f)
				{
					Local_46[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_46[iParam0 /*20*/].f_18 = 5;
			}
			break;
		
		case 4:
			func_93(Local_46[iParam0 /*20*/].f_1, &(Local_46[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0);
			if (!GlobalFunc_847(Local_46[iParam0 /*20*/].f_1))
			{
				Local_46[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (iLocal_115[iParam0] == 0)
				{
					if (!func_57() || GlobalFunc_8354() == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_46[iParam0 /*20*/].f_1, Local_46[iParam0 /*20*/].f_17, -1, 0, 1);
						iLocal_115[iParam0] = 1;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_46[iParam0 /*20*/].f_1, 780511057) == 7)
				{
					TASK::TASK_COMBAT_PED(Local_46[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_46[iParam0 /*20*/].f_1, 0), 1) >= 75f)
				{
					Local_46[iParam0 /*20*/].f_18 = 5;
				}
			}
			break;
		
		case 5:
			GlobalFunc_589(&(Local_46[iParam0 /*20*/].f_2));
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iParam0 /*20*/].f_1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_46[iParam0 /*20*/].f_1));
			}
			Local_46[iParam0 /*20*/].f_18 = 6;
			break;
		
		case 6:
			break;
	}
}


int func_93(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x5A05
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(uParam0, 1);
			uParam1->f_7 = uParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(uParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(uParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(uParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(uParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x5B24
{
	int iVar0;
	
	if (GlobalFunc_6827())
	{
		GlobalFunc_54(&Global_24503);
	}
	else
	{
		GlobalFunc_54(&Global_24503);
	}
	GlobalFunc_10823(-1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_147);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_148);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_149);
	if (iLocal_106 == 0)
	{
		AUDIO::CANCEL_MUSIC_EVENT("RE9_SPOTTED");
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_89))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_89);
		if (HUD::DOES_BLIP_EXIST(uLocal_92))
		{
			HUD::REMOVE_BLIP(&uLocal_92);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_46[iVar0 /*20*/].f_18 = 5;
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_141, 0);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (iLocal_142 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_142);
	}
	if (iLocal_143 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_143);
	}
	if (iLocal_144 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_144);
	}
	if (iLocal_145 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_145);
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", 1);
		}
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 1, 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}






























void func_124()//Position - 0x67CE
{
	Local_98 = { -45.97f, -1095.58f, 25.42f };
	fLocal_101 = 105.42f;
	Local_102 = { -33.39f, -1101.79f, 25.42f };
	fLocal_105 = 184.5161f;
	Local_46[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	Local_46[0 /*20*/].f_13 = 58.7988f;
	Local_46[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	Local_46[0 /*20*/] = joaat("g_m_m_armgoon_01");
	Local_46[0 /*20*/].f_17 = joaat("weapon_pistol");
	Local_131[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_138[0] = 177.22f;
	Local_46[1 /*20*/].f_10 = { -36.8032f, -1090.619f, 25.4223f };
	Local_46[1 /*20*/].f_13 = 257.6675f;
	Local_46[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	Local_46[1 /*20*/] = joaat("g_m_y_armgoon_02");
	Local_46[1 /*20*/].f_17 = joaat("weapon_pistol");
	Local_131[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_138[1] = 136.57f;
	PED::ADD_RELATIONSHIP_GROUP("GoonGroup", &iLocal_147);
	PED::ADD_RELATIONSHIP_GROUP("PlayerGroup", &iLocal_148);
	PED::ADD_RELATIONSHIP_GROUP("YetarianGroup", &iLocal_149);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_149, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_149);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_147, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_147);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.685f, 25.2975f, -29.9812f, -1094.079f, 27.5686f, 0, 1);
	uLocal_141 = PED::ADD_SCENARIO_BLOCKING_AREA(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, 0, 1, 1, 1);
	TASK::ADD_COVER_BLOCKING_AREA(-34.2476f, -1107.283f, 24.9621f, -24.7924f, -1102.557f, 29.8287f, 1, 1, 1, 0);
	if (iLocal_145 == -1)
	{
		iLocal_145 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, 0, 7);
	}
	func_125(196, 0);
	func_125(197, 0);
	func_125(194, 0);
	func_125(195, 0);
	STREAMING::REQUEST_MODEL(Local_46[0 /*20*/]);
	STREAMING::REQUEST_MODEL(Local_46[1 /*20*/]);
	STREAMING::REQUEST_MODEL(iLocal_121);
	STREAMING::REQUEST_MODEL(joaat("bjxl"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	STREAMING::REQUEST_MODEL(joaat("baller2"));
	WEAPON::REQUEST_WEAPON_ASSET(Local_46[0 /*20*/].f_17, 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(Local_46[1 /*20*/].f_17, 31, 0);
	STREAMING::REQUEST_ANIM_DICT("cellphone@");
	STREAMING::REQUEST_ANIM_DICT("cellphone@str");
	TASK::REQUEST_WAYPOINT_RECORDING("reyetarian_simeonoffice");
	AUDIO::PREPARE_MUSIC_EVENT("RE9_SPOTTED");
}

void func_125(int iParam0, int iParam1)//Position - 0x6A66
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_127(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_127(int iParam0)//Position - 0x6BAD
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		GlobalFunc_8505(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9041(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_9040())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}












int func_139(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xAA2D
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
		if (GlobalFunc_2(0))
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



























void func_166()//Position - 0xBD17
{
	func_94();
}

void func_167(struct<3> Param0)//Position - 0xBD23
{
	if (SYSTEM::VDIST(Param0, Param0) > 1f)
	{
	}
}

