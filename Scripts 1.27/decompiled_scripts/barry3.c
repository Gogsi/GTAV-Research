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
	char* sLocal_141 = NULL;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char* sLocal_144 = NULL;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148[2] = { 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	bool bLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = 0;
	int iLocal_161 = 0;
	bool bLocal_162[4] = { 0, 0, 0, 0 };
	bool bLocal_167 = 0;
	bool bLocal_168 = 0;
	int iLocal_169 = 0;
	bool bLocal_170 = 0;
	int iLocal_171 = 0;
	char* sLocal_172[4] = { NULL, NULL, NULL, NULL };
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343[3] = { 0, 0, 0 };
	struct<3> Local_347 = { 0, 0, 0 } ;
	struct<3> Local_350 = { 0, 0, 0 } ;
	struct<3> Local_353 = { 0, 0, 0 } ;
	struct<3> Local_356 = { 0, 0, 0 } ;
	struct<3> Local_359 = { 0, 0, 0 } ;
	float fLocal_362 = 0f;
	float fLocal_363 = 0f;
	float fLocal_364 = 0f;
	float fLocal_365 = 0f;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	var uLocal_370 = 0;
	struct<3> Local_371 = { 0, 0, 0 } ;
	struct<3> Local_374 = { 0, 0, 0 } ;
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
	uLocal_79 = GlobalFunc_4946(49);
	sLocal_141 = "DEFAULT";
	sLocal_144 = "rcm_barry3";
	iLocal_152 = joaat("police");
	iLocal_153 = joaat("s_f_y_cop_01");
	iLocal_154 = joaat("prop_sh_joint_01");
	iLocal_159 = 1;
	Local_347 = { 415.6973f, -767.4496f, 28.3675f };
	Local_350 = { 417.77f, -765.71f, 29.42f };
	Local_353 = { 442.4225f, -674.2079f, 27.6901f };
	Local_356 = { 446.563f, -821.9631f, 27.1615f };
	Local_359 = { 408.4366f, -763.0913f, 28.2794f };
	fLocal_362 = 311.6763f;
	fLocal_363 = 87.3f;
	fLocal_364 = 92.7329f;
	fLocal_365 = 99.709f;
	sLocal_368 = "FRANKLIN";
	sLocal_369 = "BARRY";
	Local_371 = { 417.533f, -765.23f, 28.41f };
	Local_374 = { 0f, 0f, 12.96f };
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_405();
	}
	if (GlobalFunc_199() == 1)
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_394(&Local_80))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_10698(&iVar0, 410.74f, -778.37f, 28.87f, 359.2f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
		Global_68490 = 0;
	}
	if (GlobalFunc_115(Local_80.f_28[0]))
	{
		GlobalFunc_128(&iLocal_146, &(Local_80.f_28[0]));
	}
	func_331(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_GRF", 0);
		func_315(Local_80.f_9, 0, 0, 0, 0, 0);
		if (iLocal_142 == 5)
		{
			func_309();
		}
		else if (!func_290())
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(392.7562f, -842.7891f, 511.9787f, -669.2035f);
			switch (iLocal_142)
			{
				case 0:
					func_281();
					break;
				
				case -1:
					func_272();
					break;
				
				case 1:
					func_237();
					break;
				
				case -2:
					func_235();
					break;
				
				case 2:
					func_226();
					break;
				
				case 3:
					func_203();
					break;
				
				case 4:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x288
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	}
	GlobalFunc_9621(49, 1, 1);
	func_2(322, 1);
	func_405();
}

void func_2(int iParam0, bool bParam1)//Position - 0x2B7
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_30();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}




























void func_30()//Position - 0x165C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_146(iVar1, 14, iVar2))
				{
					func_31(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x171D
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_146(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_31(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_31(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (func_72(iParam0, iVar0, &iVar46, 0))
	{
		func_34(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_32(iParam0, iVar0, &iVar46))
	{
		func_34(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x18D6
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_146(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x199D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7062(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7062(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_42(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_42(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_40(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_72(iParam0, iVar10, &iVar4, 1))
							{
								func_34(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_34(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_34(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_34(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_34(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_34(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_34(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_42(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_42(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_42(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_34(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_72(iParam0, iVar10, &iVar4, 0))
		{
			func_34(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_32(iParam0, iVar10, &iVar4))
		{
			func_34(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x29B0
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_146(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_146(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7062(iParam0, iParam1);
		}
	}
	return -99;
}


int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2D58
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_7062(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7062(iParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7938(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7938(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7938(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7938(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7938(iParam0, 3, 176, 191) && !GlobalFunc_7938(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_7062(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7062(iParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7062(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_7062(iParam0, 8);
								iVar8 = GlobalFunc_7062(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_7062(iParam0, 11);
								iVar0 = GlobalFunc_11156(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}






























int func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7050
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_146(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}










































































int func_146(int iParam0, int iParam1, int iParam2)//Position - 0x1D641
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_146(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_146(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_146(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7062(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_146(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

























































void func_203()//Position - 0x24E2A
{
	switch (iLocal_143)
	{
		case 0:
			if (func_224())
			{
				iLocal_156 = 1;
				func_223(0);
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				PED::SET_CREATE_RANDOM_COPS(1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
				GlobalFunc_164("LOSE_WANTED_LVL", 7500, 1);
				if (!bLocal_162[3] && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 15f))
				{
					bLocal_162[3] = GlobalFunc_10618(&uLocal_178, "BARR3AU", sLocal_172[3], 7, 1, 0, 0);
				}
				if (!bLocal_158)
				{
					func_210(1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_146, uLocal_145);
					if (PED::IS_PED_HEADTRACKING_PED(iLocal_146, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_146);
					}
				}
				if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_146))
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
				iLocal_143 = 1;
			}
			break;
		
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
			{
				iLocal_143 = 2;
			}
			if (GlobalFunc_115(uLocal_148[0]) && GlobalFunc_115(uLocal_148[1]))
			{
				if ((GlobalFunc_775(uLocal_148[0], Local_359, 30f) || GlobalFunc_4958(uLocal_148[0], PLAYER::PLAYER_PED_ID(), 1126825984, 0)) || GlobalFunc_4958(uLocal_148[1], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
				{
					GlobalFunc_132(&(uLocal_148[0]), 1, 0, 1);
					GlobalFunc_132(&(uLocal_148[1]), 1, 0, 1);
					GlobalFunc_190(&iLocal_147);
				}
			}
			break;
		
		case 2:
			iLocal_142 = 4;
			iLocal_143 = 0;
			break;
	}
}







void func_210(bool bParam0)//Position - 0x25129
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_147))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_145);
			TASK::TASK_PLAY_ANIM(0, sLocal_144, "barry_get_up", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_147, 0), 200f, -1, 0, 0);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_145);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_145);
			TASK::TASK_PLAY_ANIM(0, sLocal_144, "barry_get_up", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_145);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_145);
		TASK::TASK_PLAY_ANIM(0, sLocal_144, "barry_get_up", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_145);
	}
}













void func_223(bool bParam0)//Position - 0x25819
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
	{
		if (bParam0)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_80.f_41[0]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_80.f_41[0], iLocal_146, PED::GET_PED_BONE_INDEX(iLocal_146, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_ATTACHED(Local_80.f_41[0]))
		{
			ENTITY::DETACH_ENTITY(Local_80.f_41[0], 1, 1);
			ENTITY::SET_ENTITY_HAS_GRAVITY(Local_80.f_41[0], 1);
		}
	}
}

int func_224()//Position - 0x25890
{
	struct<3> Var0;
	float fVar3;
	
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_147) && STREAMING::HAS_MODEL_LOADED(iLocal_152)) && STREAMING::HAS_MODEL_LOADED(iLocal_153))
	{
		Var0 = { Local_353 };
		fVar3 = fLocal_364;
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_353, 1) < GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_356, 1))
		{
			Var0 = { Local_356 };
			fVar3 = fLocal_365;
		}
		iLocal_147 = VEHICLE::CREATE_VEHICLE(iLocal_152, Var0, fVar3, 1, 1);
		uLocal_148[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_147, 6, iLocal_153, -1, 1, 1);
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uLocal_148[0], joaat("weapon_pistol"), -1, 1);
		WEAPON::SET_PED_INFINITE_AMMO(uLocal_148[0], 1, joaat("weapon_pistol"));
		uLocal_148[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_147, 6, iLocal_153, 0, 1, 1);
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uLocal_148[1], joaat("weapon_pistol"), -1, 1);
		WEAPON::SET_PED_INFINITE_AMMO(uLocal_148[1], 1, joaat("weapon_pistol"));
		VEHICLE::SET_VEHICLE_SIREN(iLocal_147, 1);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_147, 20f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_148[0], iLocal_147, Local_359, 20f, 1, iLocal_152, 786603, 5f, 5f);
		return 1;
	}
	return 0;
}


void func_226()//Position - 0x259D2
{
	switch (iLocal_143)
	{
		case 0:
			func_331(0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(iLocal_146, 1), 1000f, 0);
				uLocal_367 = PED::CREATE_SYNCHRONIZED_SCENE(Local_371, Local_374, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_367, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_146, uLocal_367, sLocal_144, "barry_3_sit_loop", 1000f, -8f, 1, 16, 1148846080, 0);
			}
			PED::SET_CREATE_RANDOM_COPS(0);
			GlobalFunc_4923(&Local_80, 0, 1);
			if (!GlobalFunc_2236())
			{
				GlobalFunc_79(500, 1);
			}
			iLocal_155 = MISC::GET_GAME_TIMER();
			iLocal_177 = MISC::GET_GAME_TIMER();
			iLocal_143 = 1;
			break;
		
		case 1:
			if (!func_231())
			{
				func_230();
				if (iLocal_161 < 3)
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 15f))
					{
						if (!bLocal_162[iLocal_161])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_177) > iLocal_343[iLocal_161])
							{
								bLocal_162[iLocal_161] = GlobalFunc_10618(&uLocal_178, "BARR3AU", sLocal_172[iLocal_161], 7, 0, 0, 0);
							}
						}
						else
						{
							iLocal_161++;
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
				}
			}
			else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 15f))
			{
				if (!bLocal_168)
				{
					bLocal_168 = GlobalFunc_10618(&uLocal_178, "BARR3AU", "BARRY3_TRICK", 7, 0, 0, 0);
				}
			}
			if (!iLocal_156)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_155) > 40000 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					iLocal_156 = 1;
					iLocal_143 = 2;
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 100f))
				{
					iLocal_143 = 2;
				}
			}
			break;
		
		case 2:
			if (!iLocal_156)
			{
				iLocal_142 = 4;
			}
			else
			{
				iLocal_142 = 3;
			}
			iLocal_143 = 0;
			break;
	}
}




void func_230()//Position - 0x25BD4
{
	if (GlobalFunc_155(iLocal_146, PLAYER::PLAYER_PED_ID(), 7f))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_146, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_146, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
	else if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_146))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_146, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_146, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(iLocal_146, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_146);
	}
	if (GlobalFunc_155(iLocal_146, PLAYER::PLAYER_PED_ID(), 6f))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_146))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_146, -1, 0, 2);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_146))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
}

bool func_231()//Position - 0x25C87
{
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_159 && !bLocal_158)
		{
			if (GlobalFunc_155(iLocal_146, PLAYER::PLAYER_PED_ID(), 40f))
			{
				bLocal_157 = true;
			}
			else
			{
				bLocal_157 = false;
			}
			iLocal_159 = 0;
		}
		if (!bLocal_158 && !bLocal_157)
		{
			if (GlobalFunc_155(iLocal_146, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 15f))
			{
				bLocal_158 = true;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				func_210(0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_146, uLocal_145);
				if (PED::IS_PED_HEADTRACKING_PED(iLocal_146, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_146);
				}
			}
		}
	}
	else
	{
		iLocal_159 = 1;
	}
	return bLocal_158;
}




void func_235()//Position - 0x25E5F
{
	switch (iLocal_143)
	{
		case 0:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_366))
			{
				if (GlobalFunc_115(iLocal_146))
				{
					uLocal_366 = PED::CREATE_SYNCHRONIZED_SCENE(417.533f, -765.23f, 28.41f, 0f, 0f, 12.96f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_146, uLocal_366, sLocal_144, "lead_out", 1000f, -8f, 1, 16, 1148846080, 0);
				}
			}
			func_223(1);
			iLocal_171 = 0;
			iLocal_143 = 1;
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_366))
			{
				if (iLocal_171 == 0)
				{
					if (GlobalFunc_10618(&uLocal_178, "BARR3AU", "BAR_3_INT_LO", 8, 0, 0, 0))
					{
						iLocal_171 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_366) > 0.99f)
				{
					iLocal_143 = 2;
				}
			}
			else
			{
				iLocal_143 = 2;
			}
			break;
		
		case 2:
			func_223(0);
			func_236(2);
			break;
	}
}

void func_236(int iParam0)//Position - 0x25F34
{
	iLocal_142 = iParam0;
	iLocal_143 = 0;
}

void func_237()//Position - 0x25F43
{
	switch (iLocal_143)
	{
		case 0:
			MISC::CLEAR_AREA_OF_COPS(417.78f, -765.71f, 29.39f, 40f, 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					func_266(sLocal_368, PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_369, 1, 0, 0, 0);
			}
			if (GlobalFunc_7961(1, 1093140480, 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_146, sLocal_369, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_368, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
				{
					func_223(0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_80.f_41[0], "Barrys_Clipboard", 0, 0, 0);
				}
				GlobalFunc_8954();
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				GlobalFunc_9628(416.8295f, -762.7533f, 27.396f, 416.6834f, -767.3608f, 34.4159f, 6f, 411.6f, -773.5004f, 27.9818f, 4.0678f, 1, 1, 1, 0, 0);
				func_248(417.78f, -765.71f, 29.39f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_143 = 1;
			}
			break;
		
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_368, 0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_369, 0))
			{
				if (GlobalFunc_115(iLocal_146))
				{
					uLocal_366 = PED::CREATE_SYNCHRONIZED_SCENE(417.533f, -765.23f, 28.41f, 0f, 0f, 12.96f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_146, uLocal_366, sLocal_144, "lead_out", 1000f, -8f, 1, 16, 1148846080, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Barrys_Clipboard", 0))
				{
					func_223(1);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_247();
				func_238(1, 1, 1, 1);
				iLocal_143 = 2;
			}
			break;
		
		case 2:
			func_236(-2);
			break;
	}
}

void func_238(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2612C
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_247()//Position - 0x263F6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		iLocal_151 = OBJECT::CREATE_OBJECT(iLocal_154, 416.3885f, -764.8415f, 28.3848f, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_151, 0f, 0f, 20f, 2, 1);
	}
}

void func_248(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2643A
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
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
					if (func_146(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_146(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_146(PLAYER::PLAYER_PED_ID(), 8, 1) || func_146(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_146(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_34(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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


















void func_266(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x272FC
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_267(iParam1, &Var0, iParam3);
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

void func_267(int iParam0, var uParam1, int iParam2)//Position - 0x273B7
{
	int iVar0;
	var uVar1;
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
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5668(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &uVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5668(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &uVar1))
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
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
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
		iVar84 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10828(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}





void func_272()//Position - 0x27F84
{
	GlobalFunc_8535();
	func_274();
	if (iLocal_143 == 0)
	{
		iLocal_169 = 0;
		bLocal_170 = false;
		func_223(1);
		func_238(1, 1, 1, 1);
		if (!GlobalFunc_199())
		{
			if (GlobalFunc_115(iLocal_146))
			{
				TASK::TASK_PLAY_ANIM(iLocal_146, sLocal_144, "lead_in", 8f, -8f, -1, 2, 0, 0, 0, 0);
				iLocal_143 = 1;
			}
		}
		else
		{
			func_236(1);
		}
	}
	else if (iLocal_143 == 1)
	{
		if (GlobalFunc_4924(iLocal_146))
		{
			if (!bLocal_160 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 415.4781f, -771.7041f, 27.85562f, 415.5606f, -759.9372f, 31.36162f, 7.25f, 0, 1, 0) || GlobalFunc_1720()))
			{
				bLocal_160 = true;
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 5f))
				{
					bLocal_170 = true;
				}
			}
			if (bLocal_160)
			{
				if (!bLocal_170)
				{
					if (GlobalFunc_1720())
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_146, 0f, 0f, 0.5f, 1, 5000, 2000, 2000, 0);
					}
					else
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_146, 0.5f, 0f, 0.5f, 1, 5000, 2000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOV(35f);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.2f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.01f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
					}
				}
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 2.5f))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_146, 0);
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_146, sLocal_144, "lead_in", 3))
			{
				if (iLocal_169 == 0)
				{
					if (GlobalFunc_10618(&uLocal_178, "BARR3AU", "BAR_3_INT_LI", 8, 0, 0, 0))
					{
						iLocal_169 = 1;
					}
				}
				else if (!GlobalFunc_111())
				{
					iLocal_143 = 2;
				}
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_146, sLocal_144, "lead_in") > 0.9f)
				{
					iLocal_143 = 2;
				}
			}
			else
			{
				iLocal_143 = 2;
			}
		}
	}
	if (iLocal_143 == 2)
	{
		STREAMING::REQUEST_MODEL(iLocal_152);
		STREAMING::REQUEST_MODEL(iLocal_153);
		func_236(1);
	}
}


void func_274()//Position - 0x2817A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && GlobalFunc_115(iLocal_146))
	{
		PED::SET_IK_TARGET(iLocal_146, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
		PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_146, 31086, 0f, 0f, 0f, 0, -1, -1);
	}
}







void func_281()//Position - 0x28391
{
	int iVar0;
	
	if (iLocal_143 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bLocal_162[iVar0] = 0;
			iVar0++;
		}
		sLocal_172[0] = "BARRY3_C1";
		sLocal_172[1] = "BARRY3_C2";
		sLocal_172[2] = "BARRY3_C3";
		sLocal_172[3] = "BARRY3_COPS";
		iLocal_343[0] = 0;
		iLocal_343[1] = 20000;
		iLocal_343[2] = 7000;
		uLocal_370 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_146, uLocal_370);
		PED::SET_PED_CONFIG_FLAG(iLocal_146, 132, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_146, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_146, 185, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_146, 0);
		GlobalFunc_173(&uLocal_178, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		GlobalFunc_173(&uLocal_178, 3, iLocal_146, "BARRY", 0, 1);
		HUD::REQUEST_ADDITIONAL_TEXT("BARY3", 0);
		STREAMING::REQUEST_MODEL(iLocal_154);
		STREAMING::REQUEST_ANIM_DICT(sLocal_144);
		iLocal_143 = 1;
	}
	if (iLocal_143 == 1)
	{
		if ((HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && STREAMING::HAS_MODEL_LOADED(iLocal_154)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_144))
		{
			if (GlobalFunc_199())
			{
				switch (GlobalFunc_198())
				{
					case 0:
						STREAMING::REQUEST_MODEL(iLocal_152);
						STREAMING::REQUEST_MODEL(iLocal_153);
						GlobalFunc_2350(0, 0);
						GlobalFunc_5705(iLocal_146, Local_350, fLocal_363, 1, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (GlobalFunc_115(iLocal_146))
						{
							uLocal_367 = PED::CREATE_SYNCHRONIZED_SCENE(Local_371, Local_374, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_367, 1);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_146, uLocal_367, sLocal_144, "barry_3_sit_loop", 1000f, -8f, 0, 0, 1148846080, 0);
						}
						func_247();
						GlobalFunc_4972(Local_347, fLocal_362, 1, 0);
						GlobalFunc_4967(0, -1, 1);
						func_236(2);
						break;
					
					default:
						break;
				}
			}
			else
			{
				GlobalFunc_9623("BAR_5_RCM_p2", 0);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						func_266(sLocal_368, PLAYER::PLAYER_PED_ID(), 0, 2);
					}
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_369, 1, 0, 0, 0);
				}
				PED::SET_CREATE_RANDOM_COPS(0);
				GlobalFunc_79(500, 1);
				func_236(-1);
			}
		}
	}
}









int func_290()//Position - 0x2884F
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_146))
		{
			func_223(0);
			func_308("B3BARRYDEAD");
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_146, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), iLocal_146, 1))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_146, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			func_223(0);
			func_308("B3BARRYHURT");
			return 1;
		}
		else if (func_291(iLocal_146, 1, 1116471296, 1126825984, 0, 0, 0, 0) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), iLocal_146, 1))
		{
			if (!iLocal_156)
			{
				if ((iLocal_142 == -2 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_366)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_366) < 0.82f)
				{
				}
				else
				{
					func_210(0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_146, uLocal_145);
				}
				func_223(0);
				func_308("B3BARRYSCARE");
				return 1;
			}
		}
	}
	return 0;
}

int func_291(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2894D
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
		else if (func_292(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, float fParam1)//Position - 0x28A08
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
				if (func_293(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_293(int iParam0, float fParam1)//Position - 0x28A7E
{
	return func_294(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_294(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28A96
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_299(iParam0, iParam1);
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
		iVar4 = func_297();
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



int func_297()//Position - 0x28D48
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


int func_299(int iParam0, int iParam1)//Position - 0x28DAD
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









void func_308(char* sParam0)//Position - 0x29218
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
	if (iLocal_142 != 5)
	{
		sLocal_141 = sParam0;
		func_236(5);
	}
}

void func_309()//Position - 0x29239
{
	switch (iLocal_143)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_141, "DEFAULT"))
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sLocal_141, 1);
			}
			iLocal_143 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_405();
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_141))
			{
				if (GlobalFunc_4924(iLocal_146))
				{
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_146, 15f))
					{
						func_310();
					}
				}
			}
			break;
	}
}

int func_310()//Position - 0x292BC
{
	int iVar0;
	
	iVar0 = 0;
	if (!bLocal_167)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4935();
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar0 == 0)
			{
				bLocal_167 = GlobalFunc_10630(&uLocal_178, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_1", 9, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bLocal_167 = GlobalFunc_10630(&uLocal_178, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_2", 9, 1, 0);
			}
			else
			{
				bLocal_167 = GlobalFunc_10630(&uLocal_178, "BARR3AU", "BARRY3_EEP", "BARRY3_EEP_3", 9, 1, 0);
			}
		}
	}
	if (bLocal_167)
	{
		return 1;
	}
	return 0;
}





void func_315(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2941B
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
















void func_331(int iParam0)//Position - 0x29E36
{
	PATHFIND::DISABLE_NAVMESH_IN_AREA(437.6351f, -747.0594f, 28.4126f, 397.6351f, -787.0594f, 28.4126f, iParam0);
}































































int func_394(var uParam0)//Position - 0x30EFF
{
	int iVar0[2];
	struct<3> Var3;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	Var3 = { 417.78f, -765.71f, 29.39f };
	fVar6 = 87.3f;
	iVar0[0] = uLocal_79;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 415.4587f, -773.3615f, 27.8549f };
			uParam0->f_17[1 /*3*/] = { 415.5205f, -758.5715f, 31.34455f };
			uParam0->f_24 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_25 = 1;
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar7]);
				iVar7++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
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
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 49, Var3, fVar6, "RC LAUNCHER: BARRY 3", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], Var3 + Vector(0f, 0f, 5f), -115.18f);
				if (GlobalFunc_115(uParam0->f_41[0]) && GlobalFunc_115(uParam0->f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (bVar8)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar7]);
				iVar7++;
			}
			return 1;
			break;
	}
	return 0;
}











void func_405()//Position - 0x31355
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	GlobalFunc_200(&uLocal_178, 1);
	GlobalFunc_200(&uLocal_178, 3);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154);
	GlobalFunc_132(&iLocal_146, 1, 0, 1);
	GlobalFunc_129(&iLocal_151, 0);
	func_416(1);
	func_331(0);
	PED::SET_CREATE_RANDOM_COPS(1);
	func_406(&Local_80, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_406(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x313DC
{
	GlobalFunc_7101(uParam0, iParam1);
	func_409(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}



void func_409(var uParam0, bool bParam1)//Position - 0x3144C
{
	func_410(&(uParam0->f_35), bParam1);
}

void func_410(var uParam0, bool bParam1)//Position - 0x3145E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			GlobalFunc_7107(uParam0[iVar0]);
		}
		else
		{
			GlobalFunc_190(uParam0[iVar0]);
		}
		iVar0++;
	}
}






void func_416(bool bParam0)//Position - 0x315F3
{
	if (bParam0)
	{
		GlobalFunc_132(&(uLocal_148[0]), 1, 0, 1);
		GlobalFunc_132(&(uLocal_148[1]), 1, 0, 1);
		GlobalFunc_190(&iLocal_147);
	}
	else
	{
		GlobalFunc_881(&(uLocal_148[0]));
		GlobalFunc_881(&(uLocal_148[1]));
		GlobalFunc_7107(&iLocal_147);
	}
}



























