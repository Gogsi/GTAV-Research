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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<61> Local_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148[2] = { 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	char* sLocal_155 = NULL;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	char* sLocal_158 = NULL;
	char* sLocal_159 = NULL;
	char* sLocal_160 = NULL;
	char* sLocal_161 = NULL;
	var uLocal_162 = 16;
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
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	bool bLocal_327 = 0;
	bool bLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	var uLocal_338 = 0;
	struct<3> Local_339 = { 0, 0, 0 } ;
	char* sLocal_342 = NULL;
	char* sLocal_343 = NULL;
	int iLocal_344 = 0;
	char* sLocal_345 = NULL;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	uLocal_79 = GlobalFunc_4946(50);
	iLocal_80 = joaat("pcj");
	iLocal_82 = -2;
	iLocal_151 = joaat("prop_cs_dumpster_lidl");
	iLocal_152 = joaat("prop_cs_dumpster_lidr");
	iLocal_153 = joaat("prop_cs_dumpster_01a");
	iLocal_154 = joaat("prop_dumpster_02a");
	sLocal_155 = "Dumpster_Lid_L";
	sLocal_156 = "Dumpster_Lid_R";
	sLocal_157 = "PAP_Dumpster";
	sLocal_158 = "PAP_Dumpster_blue";
	sLocal_159 = "Franklin";
	sLocal_160 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	sLocal_161 = "Beverley";
	Local_332 = { -260.614f, 292.106f, 91.127f };
	Local_335 = { 7.2E-05f, -2.500116f, 89.63998f };
	Local_339 = { 0.07f, -0.13f, 0.07f };
	sLocal_342 = "Distant_Camera_Flash";
	sLocal_343 = "PAPARAZZO_01_SOUNDSET";
	sLocal_345 = "DEFAULT";
	Local_84 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_84);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_387();
	}
	if (GlobalFunc_199())
	{
		iLocal_78 = 0;
		Global_68490 = 1;
		while (!func_380(&Local_84))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_10698(&iVar0, -257.08f, 285.27f, 90.43f, 12.52f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
		GlobalFunc_4923(&Local_84, 0, 1);
		Global_68490 = 0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_PTP", 0);
		func_303(Local_84.f_9, 0, 0, 0, 0, 0);
		if (iLocal_82 == 2)
		{
			func_299();
		}
		else if (!func_297())
		{
			switch (iLocal_82)
			{
				case -2:
					func_287();
					break;
				
				case -1:
					func_278();
					break;
				
				case 0:
					func_238();
					break;
				
				case 1:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1F6
{
	func_237();
	if (!func_218(Local_84.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
	{
		switch (iLocal_83)
		{
			case 0:
				if (GlobalFunc_4950(Local_84.f_28[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_84.f_28[0], 1);
				}
				iLocal_83 = 1;
				break;
			
			case 1:
				if (!bLocal_328)
				{
					bLocal_328 = GlobalFunc_10607(&uLocal_162, "PAP3AU", "PAP3_RCM_LO", 8, 0, 0, 0);
				}
				else if (!GlobalFunc_111())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) >= 1f)
						{
							iLocal_83 = 2;
						}
					}
					else
					{
						iLocal_83 = 2;
					}
				}
				break;
			
			case 2:
				func_2();
				break;
		}
	}
	else
	{
		iLocal_82 = 2;
		iLocal_83 = 0;
		sLocal_345 = "P3BEVSCARED";
	}
}

void func_2()//Position - 0x2B7
{
	GlobalFunc_9621(50, 1, 0);
	GlobalFunc_881(&(Local_84.f_28[0]));
	GlobalFunc_11328(322, 1);
	func_387();
}
























































































































































































































int func_218(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x254AA
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
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
		else if (func_219(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, float fParam1)//Position - 0x25565
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_220(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_220(int iParam0, float fParam1)//Position - 0x255DB
{
	return func_221(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_221(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x255F3
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_229(iParam0, iParam1);
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
		iVar4 = func_224();
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



int func_224()//Position - 0x258A5
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





int func_229(int iParam0, int iParam1)//Position - 0x259FB
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








void func_237()//Position - 0x25E1B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && GlobalFunc_115(Local_84.f_28[0]))
	{
		PED::SET_IK_TARGET(Local_84.f_28[0], 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
		PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_84.f_28[0], 31086, 0f, 0f, 0f, 0, -1, -1);
	}
}

void func_238()//Position - 0x25E70
{
	switch (iLocal_83)
	{
		case 0:
			func_277();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					func_271(sLocal_159, PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			if (GlobalFunc_7638(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_84.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_84.f_28[0], sLocal_161, 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_159, 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148[0], sLocal_155, 0, iLocal_151, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148[0], sLocal_155, 2, iLocal_151, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148[1], sLocal_156, 0, iLocal_152, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_148[1], sLocal_156, 2, iLocal_152, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_146, sLocal_158, 0, iLocal_154, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_146, sLocal_158, 2, iLocal_154, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_147))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_147, sLocal_157, 0, iLocal_153, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_147, sLocal_157, 2, iLocal_153, 0);
				}
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				GlobalFunc_8954();
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				if (func_262())
				{
					GlobalFunc_9628(-262.0816f, 292.33f, 90f, -254.652f, 292.335f, 93.5f, 5f, -257.08f, 285.27f, 90.43f, 12.52f, 1, 1, 1, 0, 0);
				}
				else
				{
					GlobalFunc_9628(-254.8715f, 316.4631f, 88.6055f, -255.2926f, 270.6087f, 103.2327f, 30f, -239.7607f, 267.4757f, 91.0999f, 86.5f, 1, 1, 1, 0, 0);
				}
				func_250(-259.3334f, 291.8268f, 90.5229f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				GlobalFunc_130(&(Local_84.f_41[3]));
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_1720())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_161, 0))
			{
				uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(Local_332, Local_335, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_28[0], uLocal_331, sLocal_160, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_84.f_28[0], 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_159, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -258.8661f, 292.7882f, 90.5764f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.0417f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_147))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_157, iLocal_153)))
				{
					iLocal_147 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_157, iLocal_153));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_157, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_147, Local_332, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_147, Local_335, 2, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_147, uLocal_331, "leadout_pap_3_rcm_dumpster", sLocal_160, 1000f, -8f, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_147);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_155, 0)))
				{
					iLocal_148[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_155, iLocal_151));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_155, 0))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[0], uLocal_331, "leadout_pap_3_rcm_lid_l", sLocal_160, 1000f, -8f, 1, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148[0]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, 0)))
				{
					iLocal_148[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_156, iLocal_152));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_156, 0))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[1], uLocal_331, "leadout_pap_3_rcm_lid_r", sLocal_160, 1000f, -8f, 1, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148[1]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_158, 0)))
				{
					iLocal_146 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_158, iLocal_154));
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_158, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_146, -261.1132f, 294.1956f, 90.68612f, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_146, -0.604164f, -2.332095f, 89.8831f, 2, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_146);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 5f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				HUD::DISPLAY_RADAR(1);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				iLocal_83 = 2;
			}
			break;
	}
	if (iLocal_83 == 2)
	{
		func_240(1, 1, 1, 1);
		GlobalFunc_4923(&Local_84, 0, 1);
		func_239(1);
	}
}

void func_239(int iParam0)//Position - 0x26328
{
	iLocal_82 = iParam0;
	iLocal_83 = 0;
}

void func_240(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26337
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










void func_250(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26625
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}












int func_262()//Position - 0x271F7
{
	struct<3> Var0[2];
	struct<3> Var7;
	int iVar10;
	
	iVar10 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar10), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var7 = { GlobalFunc_625() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var7.x)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var7.f_1)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var7.f_2)
		{
			return 0;
		}
	}
	return 1;
}









void func_271(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x275BE
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_272(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_272(int iParam0, var uParam1, int iParam2)//Position - 0x27679
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8358(iParam0, &Var2, 0);
	GlobalFunc_8358(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10828(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}





void func_277()//Position - 0x28247
{
	if (GlobalFunc_1720())
	{
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_84.f_28[0], 0f, 0f, 0f, 1, -1, 1500, 2000, 0);
	}
}

void func_278()//Position - 0x2826D
{
	GlobalFunc_8320();
	func_237();
	switch (iLocal_83)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_03_SCENE");
			}
			iLocal_344 = 0;
			GlobalFunc_9623("PAP_3_RCM", 0);
			if (GlobalFunc_4950(Local_84.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_147))
			{
				uLocal_329 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_147, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_147, 2), 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_28[0], uLocal_329, sLocal_160, "leadin_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1148846080, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_147))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_147, uLocal_329, "leadin_pap_3_rcm_dumpster", sLocal_160, 1000f, -8f, 0, 1148846080);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[0], uLocal_329, "leadin_pap_3_rcm_lid_l", sLocal_160, 1000f, -8f, 0, 1148846080);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[1], uLocal_329, "leadin_pap_3_rcm_lid_r", sLocal_160, 1000f, -8f, 0, 1148846080);
				}
				func_240(1, 1, 1, 1);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4950(Local_84.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_147))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_329))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_329) > 0.99f)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_330))
						{
							uLocal_330 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_147, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_147, 2), 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_28[0], uLocal_330, sLocal_160, "idle_01_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_84.f_28[0], 0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_147))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_147, uLocal_330, "idle_01_pap_3_rcm_dumpster", sLocal_160, 1000f, -8f, 0, 1148846080);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_147);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[0], uLocal_330, "idle_01_pap_3_rcm_lid_l", sLocal_160, 1000f, -8f, 0, 1148846080);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148[0]);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[1], uLocal_330, "idle_01_pap_3_rcm_lid_r", sLocal_160, 1000f, -8f, 0, 1148846080);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_148[1]);
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_329) > 0.3f)
					{
						if (!bLocal_327)
						{
							bLocal_327 = GlobalFunc_10607(&uLocal_162, "PAP3AU", "PAP3_RCM_LI", 8, 0, 0, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_329) > 0.3f)
					{
						func_279();
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_329) > 0.05f)
					{
						func_277();
					}
				}
				else
				{
					func_277();
					iLocal_83 = 2;
				}
				if (bLocal_327)
				{
					if (!GlobalFunc_111())
					{
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_277();
			func_239(0);
			break;
	}
}

void func_279()//Position - 0x28546
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_84.f_41[3]) && !iLocal_344)
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_rcpap1_camera", PED::GET_PED_BONE_COORDS(Local_84.f_28[0], 28422, Local_339), ENTITY::GET_ENTITY_ROTATION(Local_84.f_41[3], 2), 1065353216, 0, 0, 0);
		if (!AUDIO::HAS_SOUND_FINISHED(uLocal_338))
		{
			AUDIO::STOP_SOUND(uLocal_338);
		}
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_342, 0))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(uLocal_338, "CAMERA", PED::GET_PED_BONE_COORDS(Local_84.f_28[0], 28422, Local_339), sLocal_343, 0, 0, 0);
			iLocal_344 = 1;
		}
	}
}








void func_287()//Position - 0x287C1
{
	bLocal_327 = false;
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		uLocal_145 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_4950(Local_84.f_28[0]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_84.f_28[0], uLocal_145);
		PED::SET_PED_CONFIG_FLAG(Local_84.f_28[0], 132, 1);
		PED::SET_PED_KEEP_TASK(Local_84.f_28[0], 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_84.f_28[0], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		iLocal_146 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.19f, 292.22f, 90.79f, 10f, iLocal_154, 1, 0, 1);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_146, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_147))
	{
		GlobalFunc_128(&iLocal_147, &(Local_84.f_41[0]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
	{
		GlobalFunc_128(&(iLocal_148[0]), &(Local_84.f_41[1]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
	{
		GlobalFunc_128(&(iLocal_148[1]), &(Local_84.f_41[2]));
	}
	GlobalFunc_1286(&uLocal_162, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_1286(&uLocal_162, 3, Local_84.f_28[0], "BEVERLY", 0, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_160);
	STREAMING::REQUEST_PTFX_ASSET();
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_160) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		GlobalFunc_8320();
		SYSTEM::WAIT(0);
	}
	uLocal_338 = AUDIO::GET_SOUND_ID();
	if (GlobalFunc_199())
	{
		switch (GlobalFunc_198())
		{
			case 0:
				func_288();
				break;
			
			default:
				break;
		}
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_271(sLocal_159, PLAYER::PLAYER_PED_ID(), 0, 2);
			}
		}
		func_239(-1);
	}
}

void func_288()//Position - 0x2894A
{
	func_292(1, 1);
	func_291();
	func_239(1);
	GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -258.8661f, 292.7882f, 90.5764f, 153.0393f, 0, 1);
	func_289(1, 1, 1);
}

void func_289(int iParam0, int iParam1, int iParam2)//Position - 0x28987
{
	func_240(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}


void func_291()//Position - 0x28A15
{
	if (GlobalFunc_115(Local_84.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_147))
	{
		uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(Local_332, Local_335, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_28[0], uLocal_331, sLocal_160, "leadout_pap_3_rcm_beverly", 1000f, -8f, 4, 32, 1148846080, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_147))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_147, uLocal_331, "leadout_pap_3_rcm_dumpster", sLocal_160, 1000f, -8f, 0, 1148846080);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[0], uLocal_331, "leadout_pap_3_rcm_lid_l", sLocal_160, 1000f, -8f, 1, 1148846080);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_148[1], uLocal_331, "leadout_pap_3_rcm_lid_r", sLocal_160, 1000f, -8f, 1, 1148846080);
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_331, 0.02f);
	}
	bLocal_328 = false;
}

void func_292(bool bParam0, bool bParam1)//Position - 0x28B06
{
	if (bParam0)
	{
		func_293(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_250(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_293(bool bParam0, int iParam1, int iParam2)//Position - 0x28B39
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_240(iParam1, iParam2, 1, 1);
		}
	}
}




int func_297()//Position - 0x28C6F
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_84.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_84.f_28[0]))
		{
			func_298("P3BEVDEAD");
			return 1;
		}
		else if (PED::GET_PED_MAX_HEALTH(Local_84.f_28[0]) > ENTITY::GET_ENTITY_HEALTH(Local_84.f_28[0]))
		{
			func_298("P3BEVHURT");
			return 1;
		}
	}
	return 0;
}

void func_298(char* sParam0)//Position - 0x28CDB
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
	if (iLocal_82 != 2)
	{
		sLocal_345 = sParam0;
		func_239(2);
	}
}

void func_299()//Position - 0x28CFD
{
	switch (iLocal_83)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_345, "DEFAULT"))
			{
				GlobalFunc_10544(1);
			}
			else
			{
				GlobalFunc_10816(sLocal_345, 1);
			}
			iLocal_83 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_387();
			}
			break;
	}
}




void func_303(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x28DC9
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}













































































int func_380(var uParam0)//Position - 0x30945
{
	int iVar0[5];
	var uVar6[3];
	struct<3> Var10[3];
	struct<3> Var20[3];
	char* sVar30;
	int iVar31;
	bool bVar32;
	
	sVar30 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	iVar0[0] = uLocal_79;
	iVar0[1] = joaat("prop_pap_camera_01");
	iVar0[2] = joaat("prop_cs_dumpster_01a");
	iVar0[3] = joaat("prop_cs_dumpster_lidl");
	iVar0[4] = joaat("prop_cs_dumpster_lidr");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -258.5052f, 287.5976f, 90.17828f };
			uParam0->f_17[1 /*3*/] = { -258.5263f, 298.0905f, 93.69456f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_3_RCM", 24);
			iVar31 = 0;
			while (iVar31 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar31]);
				iVar31++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar30);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar30))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar32 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -261f, 292.22f, 90.89f, 10.53f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				}
				else
				{
					bVar32 = false;
				}
			}
			if (GlobalFunc_4950(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
				{
					GlobalFunc_5742(&(uParam0->f_41[3]), iVar0[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (GlobalFunc_115(uParam0->f_41[3]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[3], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[1]);
					}
					else
					{
						bVar32 = false;
					}
				}
				else
				{
					bVar32 = false;
				}
			}
			if (bVar32)
			{
				uVar6[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-260.62f, 292.1391f, 90.604f, 10f, joaat("prop_cs_dumpster_01a"), 1, 0, 1);
				Var10[0 /*3*/] = { -260.614f, 292.106f, 91.127f };
				Var20[0 /*3*/] = { 7.2E-05f, -2.500116f, 89.63998f };
				uVar6[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidl"), 1, 0, 1);
				Var10[1 /*3*/] = { -261.108f, 292.5062f, 92.03645f };
				Var20[1 /*3*/] = { -0.656039f, -2.50018f, 89.6114f };
				uVar6[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.5835f, 291.6671f, 92.066f, 10f, joaat("prop_cs_dumpster_lidr"), 1, 0, 1);
				Var10[2 /*3*/] = { -261.1135f, 291.6249f, 91.99765f };
				Var20[2 /*3*/] = { -0.281056f, -2.500049f, 89.62769f };
				iVar31 = 0;
				while (iVar31 <= 2)
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uVar6[iVar31]));
					iVar31++;
				}
				ENTITY::CREATE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), 1);
				ENTITY::CREATE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), 1);
				ENTITY::CREATE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), 1);
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_01a"), Var10[0 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], Var20[0 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], 0);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidl"), Var10[1 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], Var20[1 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[1], 0);
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidr"), Var10[2 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], Var20[2 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[2], 0);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				uLocal_81 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_41[0], 1), ENTITY::GET_ENTITY_ROTATION(uParam0->f_41[0], 2), 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], uLocal_81, "idle_closed_pap_3_rcm_dumpster", sVar30, 8f, -8f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_81, 1);
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_81, sVar30, "idle_closed_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[1], uLocal_81, "idle_closed_pap_3_rcm_lid_l", sVar30, 8f, -8f, 0, 1148846080);
				}
				if (GlobalFunc_115(uParam0->f_41[2]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[2], uLocal_81, "idle_closed_pap_3_rcm_lid_r", sVar30, 8f, -8f, 0, 1148846080);
				}
			}
			iVar31 = 0;
			while (iVar31 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar31]);
				iVar31++;
			}
			STREAMING::REMOVE_ANIM_DICT(sVar30);
			return 1;
			break;
	}
	return 0;
}







void func_387()//Position - 0x3102E
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_03_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_03_SCENE");
	}
	AUDIO::RELEASE_SOUND_ID(uLocal_338);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_148[0], 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_148[1], 1);
	}
	GlobalFunc_129(&(iLocal_148[0]), 0);
	GlobalFunc_129(&(iLocal_148[1]), 0);
	GlobalFunc_129(&iLocal_146, 0);
	GlobalFunc_129(&iLocal_147, 0);
	STREAMING::REMOVE_ANIM_DICT(sLocal_160);
	STREAMING::REMOVE_PTFX_ASSET();
	GlobalFunc_200(&uLocal_162, 1);
	GlobalFunc_200(&uLocal_162, 3);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_132(&(Local_84.f_28[0]), 1, 0, 1);
	GlobalFunc_9165(&Local_84, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






































