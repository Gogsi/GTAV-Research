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
	struct<61> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	var uLocal_150 = 16;
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
	char* sLocal_315 = NULL;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3> Local_330[2];
	float fLocal_337 = 0f;
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
	uLocal_79 = GlobalFunc_4946(69);
	fLocal_148 = 100f;
	fLocal_149 = 20f;
	sLocal_315 = "Omega";
	uLocal_316 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_digiscanner"));
	iLocal_317 = joaat("prop_cs_walkie_talkie");
	Local_319 = { 0.1f, 0.08f, 0f };
	Local_322 = { 162.72f, 5.4f, 1.8f };
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_378();
	}
	func_377();
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		GlobalFunc_10698(&iVar0, 2455.886f, 3432.445f, 49.2697f, 189.77f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
		func_313(iVar0);
		while (!func_305(&Local_80))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_80, 0, 1);
		Global_68490 = 0;
	}
	func_303(1, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_Omega1", 0);
		func_287(Local_80.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_141)
		{
			case 0:
				func_285();
				break;
			
			case 1:
				func_277();
				break;
			
			case 2:
				func_247();
				break;
			
			case 3:
				func_244();
				break;
			
			case 4:
				func_5();
				break;
			
			case 5:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1C0
{
	char* sVar0;
	
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			switch (iLocal_143)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "O1_FAILKILL";
					break;
				
				case 2:
					sVar0 = "O1_FAILHURT";
					break;
				
				case 3:
					sVar0 = "O1_FAILSCARE";
					break;
			}
			if (iLocal_143 == 0)
			{
				GlobalFunc_10544(1);
			}
			else
			{
				GlobalFunc_10816(sVar0, 1);
			}
			iLocal_142 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_378();
			}
			break;
	}
}




void func_5()//Position - 0x2C2
{
	if (func_221())
	{
		switch (iLocal_142)
		{
			case 0:
				bLocal_144 = false;
				bLocal_145 = false;
				iLocal_146 = 0;
				bLocal_147 = false;
				iLocal_142 = 1;
				break;
			
			case 1:
				if (GlobalFunc_115(Local_80.f_28[0]))
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						if (!iLocal_146)
						{
							if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0]) > fLocal_149)
							{
								GlobalFunc_5105();
								iLocal_146 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_329) > 7500)
							{
								if (!bLocal_144)
								{
									bLocal_144 = GlobalFunc_10607(&uLocal_150, "SCRAPAU", "SCRAP_1_AMB2", 7, 0, 0, 0);
								}
								else if (!bLocal_145)
								{
									bLocal_145 = GlobalFunc_10607(&uLocal_150, "SCRAPAU", "SCRAP_1_HANG", 7, 0, 0, 0);
								}
							}
						}
						else if (!bLocal_147 && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0]) > 50f)
						{
							bLocal_147 = GlobalFunc_10607(&uLocal_150, "SCRAPAU", "SCRAP_WALK", 7, 0, 0, 0);
						}
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0]) > fLocal_148)
						{
							iLocal_142 = 2;
						}
					}
				}
				break;
			
			case 2:
				func_6();
				break;
			}
	}
}

void func_6()//Position - 0x3D2
{
	GlobalFunc_6677("SSHIP_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
	GlobalFunc_11328(66, 1);
	func_378();
}























































































































































































































int func_221()//Position - 0x252A1
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_115(Local_80.f_28[0]))
		{
			iLocal_143 = 1;
			func_243(5);
			return 0;
		}
		else if (PED::IS_PED_INJURED(Local_80.f_28[0]))
		{
			iLocal_143 = 2;
			func_243(5);
			return 0;
		}
		else if (func_224(Local_80.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			TASK::TASK_SMART_FLEE_PED(Local_80.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			iLocal_143 = 3;
			func_243(5);
			return 0;
		}
		else if (func_222(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 1))
		{
			TASK::TASK_SMART_FLEE_PED(Local_80.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			iLocal_143 = 3;
			func_243(5);
			return 0;
		}
		else if (PED::IS_PED_RAGDOLL(Local_80.f_28[0]))
		{
			iLocal_143 = 3;
			func_243(5);
			return 0;
		}
	}
	return 1;
}

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x25386
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(uParam1))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam1, iParam0))
			{
				if (bParam2)
				{
					if (PED::IS_PED_RAGDOLL(uParam1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_224(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x253F1
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
		else if (func_225(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, float fParam1)//Position - 0x254AC
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
				if (func_226(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_226(int iParam0, float fParam1)//Position - 0x25522
{
	return func_227(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_227(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2553A
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_235(iParam0, iParam1);
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
		iVar4 = func_230();
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



int func_230()//Position - 0x257EC
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





int func_235(int iParam0, int iParam1)//Position - 0x25942
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








void func_243(int iParam0)//Position - 0x25D62
{
	iLocal_141 = iParam0;
	iLocal_142 = 0;
}

void func_244()//Position - 0x25D71
{
	if (func_221())
	{
		switch (iLocal_142)
		{
			case 0:
				if (GlobalFunc_115(Local_80.f_28[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(Local_80.f_28[0], uLocal_325);
				}
				GlobalFunc_164("O1_LEAVEAREA", 7500, 1);
				iLocal_329 = MISC::GET_GAME_TIMER();
				iLocal_327 = MISC::GET_GAME_TIMER();
				iLocal_142 = 1;
				break;
			
			case 1:
				if (GlobalFunc_115(Local_80.f_28[0]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_327) > 3000)
					{
						iLocal_142 = 2;
					}
				}
				break;
			
			case 2:
				func_245(4);
				break;
			}
	}
}

void func_245(int iParam0)//Position - 0x25DFF
{
	iLocal_141 = iParam0;
	iLocal_142 = 0;
}


void func_247()//Position - 0x25E27
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_10364("SCRAP_1_RCM", 0);
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_80.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_80.f_28[0], sLocal_315, 0, 0, 0);
				}
				GlobalFunc_8954();
				GlobalFunc_702(1, 0, 1);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				SYSTEM::WAIT(0);
				func_313(0);
				func_266();
				func_258(Local_330[0 /*3*/], Local_330[1 /*3*/], fLocal_337, 2455.886f, 3432.445f, 49.2697f, 189.77f, 1, 1, 1, 0, 0);
				func_248(2468.51f, 3437.39f, 49.9f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_80.f_41[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_80.f_41[1]));
				}
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_303(1, 1, 1, 1);
				GlobalFunc_4923(&Local_80, 0, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
				{
					Local_80.f_41[0] = OBJECT::CREATE_OBJECT(uLocal_316, 2468.51f, 3437.39f, 55f, 1, 1, 0);
				}
				iLocal_318 = OBJECT::CREATE_OBJECT(iLocal_317, 2472.3f, 3437.3f, 49.3f, 1, 1, 0);
				if (GlobalFunc_115(Local_80.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_80.f_41[0], Local_80.f_28[0], PED::GET_PED_BONE_INDEX(Local_80.f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, 0, 0, 0, 0, 2, 1);
				}
				if (GlobalFunc_115(Local_80.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_318))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_318, Local_80.f_28[0], PED::GET_PED_BONE_INDEX(Local_80.f_28[0], 64729), Local_319, Local_322, 0, 0, 0, 0, 2, 1);
				}
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_142 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_702(0, 0, 1);
			if (GlobalFunc_115(Local_80.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_80.f_41[0], Local_80.f_28[0]))
				{
					func_245(3);
				}
			}
			break;
	}
}

void func_248(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2608B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9249(0);
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










void func_258(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x2649E
{
	func_259(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_259(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x264C7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				GlobalFunc_108(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (GlobalFunc_4966(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (GlobalFunc_4929(iVar0, GlobalFunc_8315(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!GlobalFunc_105(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}







void func_266()//Position - 0x26E2F
{
	int iVar0;
	var uVar1[16];
	
	PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (GlobalFunc_115(uVar1[iVar0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar1[iVar0], Local_330[0 /*3*/], Local_330[1 /*3*/], fLocal_337, 0, 1, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(uVar1[iVar0]) == joaat("taxi"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1[iVar0], -1)))
				{
					ENTITY::SET_ENTITY_HEADING(uVar1[iVar0], 217.679f);
					ENTITY::SET_ENTITY_COORDS(uVar1[iVar0], 2479.249f, 3401.234f, 48.9551f, 1, 0, 0, 1);
					return;
				}
			}
		}
		iVar0++;
	}
}











void func_277()//Position - 0x27275
{
	GlobalFunc_8535();
	if (func_221())
	{
		if (MISC::GET_GAME_TIMER() < iLocal_326 && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 4f))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_80.f_28[0], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(35f);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.02f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.05f);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 2000, 0, 2);
		}
		else
		{
			func_245(2);
		}
	}
}








void func_285()//Position - 0x274FB
{
	GlobalFunc_8535();
	STREAMING::REQUEST_ANIM_DICT("rcmrc_omega_1leadinoutscrap_1_rcm");
	STREAMING::REQUEST_ANIM_DICT("rcmrc_omega_1");
	HUD::REQUEST_ADDITIONAL_TEXT("OMEGA1", 0);
	STREAMING::REQUEST_MODEL(iLocal_316);
	STREAMING::REQUEST_MODEL(iLocal_317);
	if (func_221())
	{
		if ((((STREAMING::HAS_ANIM_DICT_LOADED("rcmrc_omega_1leadinoutscrap_1_rcm") && STREAMING::HAS_ANIM_DICT_LOADED("rcmrc_omega_1")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_316)) && STREAMING::HAS_MODEL_LOADED(iLocal_317))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_325);
			TASK::TASK_PLAY_ANIM(0, "rcmrc_omega_1leadinoutscrap_1_rcm", "leadout_scrap_1_rcm_omega", 8f, -8f, -1, 262144, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmrc_omega_1", "omega_idle_geiger_counter", 8f, -8f, -1, 262145, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_325);
			if (GlobalFunc_115(Local_80.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_80.f_28[0], 1);
				PED::SET_PED_KEEP_TASK(Local_80.f_28[0], 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_80.f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(Local_80.f_28[0], 185, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(Local_80.f_28[0]))
			{
				uLocal_328 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_80.f_28[0], uLocal_328);
				PED::SET_PED_CONFIG_FLAG(Local_80.f_28[0], 132, 1);
				GlobalFunc_173(&uLocal_150, 3, Local_80.f_28[0], "OMEGA", 0, 1);
				GlobalFunc_173(&uLocal_150, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			iLocal_326 = MISC::GET_GAME_TIMER() + 3500;
			func_245(1);
		}
	}
}


void func_287(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2770E
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
















void func_303(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28129
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


int func_305(var uParam0)//Position - 0x282C4
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_digiscanner"));
	iVar0[2] = joaat("prop_cs_walkie_talkie");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2463.225f, 3444.113f, 48.59399f };
			uParam0->f_17[1 /*3*/] = { 2475.22f, 3428.098f, 50.99095f };
			uParam0->f_24 = 17f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_1_RCM", 24);
			uParam0->f_25 = 1;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmrc_omega_1", "omega_idle_geiger_counter", 0);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 69, 2468.51f, 3437.39f, 49.9f, 180f, "OMEGA LAUNCHER RC", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], 2468.51f, 3437.39f, 55f, 1, 1, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], 2468.51f, 3437.39f, 57f, 1, 1, 0);
			}
			if ((GlobalFunc_115(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0])) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, 0, 0, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 64729), 0.1f, 0.08f, 0f, 162.72f, 5.4f, 1.8f, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				bVar5 = false;
			}
			if (bVar5)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
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








void func_313(int iParam0)//Position - 0x28731
{
	struct<3> Var0[3];
	struct<3> Var10;
	bool bVar13;
	int iVar14;
	
	if (!GlobalFunc_115(iParam0))
	{
		iParam0 = GlobalFunc_2251();
	}
	bVar13 = false;
	if (GlobalFunc_115(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_330[0 /*3*/], Local_330[1 /*3*/], fLocal_337, 0, 1, 0))
		{
			iVar14 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (STREAMING::IS_MODEL_VALID(iVar14))
			{
				MISC::GET_MODEL_DIMENSIONS(iVar14, &(Var0[1 /*3*/]), &(Var0[2 /*3*/]));
				Var0[0 /*3*/] = { (Var0[2 /*3*/] - Var0[1 /*3*/]), (Var0[2 /*3*/].f_1 - Var0[1 /*3*/].f_1), (Var0[2 /*3*/].f_2 - Var0[1 /*3*/].f_2) };
				Var10 = { GlobalFunc_625() };
				if (Var0[0 /*3*/] > Var10.x)
				{
					bVar13 = true;
				}
				else if (Var0[0 /*3*/].f_1 > Var10.f_1)
				{
					bVar13 = true;
				}
				else if (Var0[0 /*3*/].f_2 > Var10.f_2)
				{
					bVar13 = true;
				}
				if (bVar13)
				{
					ENTITY::SET_ENTITY_HEADING(iParam0, 248.4908f);
					ENTITY::SET_ENTITY_COORDS(iParam0, 2531.08f, 3357.171f, 50.9746f, 1, 0, 0, 1);
				}
			}
		}
	}
}
































































void func_377()//Position - 0x2F8F5
{
	Local_330[0 /*3*/] = { 2453.513f, 3424.646f, 48.44232f };
	Local_330[1 /*3*/] = { 2490.06f, 3434.195f, 58.26103f };
	fLocal_337 = 32.75f;
}

void func_378()//Position - 0x2F933
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	GlobalFunc_619(0);
	GlobalFunc_200(&uLocal_150, 1);
	GlobalFunc_200(&uLocal_150, 3);
	GlobalFunc_132(&(Local_80.f_28[0]), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_80.f_41[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_80.f_41[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_316);
	GlobalFunc_9165(&Local_80, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}









































