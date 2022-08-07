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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char* sLocal_145 = NULL;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 16;
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
	var uLocal_316 = 0;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	float fLocal_323 = 0f;
	int iLocal_324 = 0;
	bool bLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(60);
	uLocal_80 = GlobalFunc_4946(14);
	sLocal_145 = "red_epsilon_truck";
	iLocal_147 = joaat("cs_tom");
	iLocal_148 = joaat("bison");
	sLocal_150 = "DEFAULT";
	sLocal_151 = "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@STANDARD";
	Local_317 = { 1971.714f, 2870.046f, 48.9397f };
	Local_320 = { 1975.87f, 2865.398f, 49.1545f };
	fLocal_323 = 15f;
	Local_82 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_82);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (AUDIO::PREPARE_MUSIC_EVENT("EPS1_FAIL"))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("EPS1_FAIL"))
			{
			}
		}
		GlobalFunc_9624(1);
		func_310();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_304(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_82.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_82.f_35[0], 1);
	}
	GlobalFunc_9623("EP_1_RCM_Concat", 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_287(Local_82.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_143)
		{
			case 0:
				func_280();
				break;
			
			case 1:
				func_279();
				break;
			
			case 2:
				func_242();
				break;
			
			case 3:
				func_241();
				break;
			
			case 4:
				func_212();
				break;
			
			case 5:
				func_5();
				break;
			
			case 6:
				func_1();
				break;
		}
		RECORDING::_0x208784099002BC30("SF_Epsilonism1", 0);
	}
}

void func_1()//Position - 0x1CB
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
	switch (iLocal_144)
	{
		case 0:
			if (AUDIO::PREPARE_MUSIC_EVENT("EPS1_FAIL"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("EPS1_FAIL"))
				{
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_150, "DEFAULT"))
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sLocal_150, 1);
			}
			iLocal_144 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_310();
			}
			break;
	}
}




void func_5()//Position - 0x2B3
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 334, 1);
	}
	if (AUDIO::PREPARE_MUSIC_EVENT("EPS1_STOP"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("EPS1_STOP"))
		{
		}
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	}
	func_17(73, 1);
	while (!GlobalFunc_7022(-1504002834, 6, 1, 60, 15000, 10000, -1, 0, -1, 0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 334, 1);
		}
		SYSTEM::WAIT(0);
	}
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment = 0;
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 2)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 2, 1);
		GlobalFunc_4(23, 2);
	}
	func_310();
}












void func_17(int iParam0, bool bParam1)//Position - 0x7DD
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
	GlobalFunc_2832(&uVar1, GlobalFunc_8310());
	func_43();
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


























void func_43()//Position - 0x1B06
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
				if (GlobalFunc_10939(iVar1, 14, iVar2))
				{
					func_44(iVar1, 14, iVar2);
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

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1BC7
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
	Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10939(iParam0, iParam1, iParam2))
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
				func_44(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_44(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11058(iParam0, iVar0, &iVar46, 0))
	{
		func_47(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11054(iParam0, iVar0, &iVar46))
	{
		func_47(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1E47
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
		Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_77(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							func_77(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11228(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_47(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_77(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11228(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_47(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iVar0, GlobalFunc_11056(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11058(iParam0, iVar10, &iVar4, 1))
							{
								func_47(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_47(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10856(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_47(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_47(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_47(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_47(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_47(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			func_77(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11228(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_47(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		func_77(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11228(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_47(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11228(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_47(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11055(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11058(iParam0, iVar10, &iVar4, 0))
		{
			func_47(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11054(iParam0, iVar10, &iVar4))
		{
			func_47(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






























void func_77(int iParam0)//Position - 0x5D58
{
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		GlobalFunc_31(iParam0, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 2, Global_68106[1 /*14*/].f_1, 1, 0);
	}
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_78(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_78(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_78(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_78(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x5E10
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68104;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (GlobalFunc_30(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = GlobalFunc_6709(iVar2, iVar0, 0);
		MISC::SET_BIT(&uVar3, iVar1);
		GlobalFunc_6670(iVar2, uVar3, iVar0, 1);
	}
}






































































































































void func_212()//Position - 0x24E80
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 334, 1);
	}
	switch (iLocal_144)
	{
		case 0:
			iLocal_328 = 0;
			GlobalFunc_7632(1);
			func_235();
			func_47(PLAYER::PLAYER_PED_ID(), 12, 6, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_317, 201.2074f, 0, 1);
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_317, 100f, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_149))
			{
				iLocal_149 = VEHICLE::CREATE_VEHICLE(iLocal_148, 1970.362f, 2859.594f, 49.2307f, 151.6095f, 1, 1);
			}
			if (GlobalFunc_115(iLocal_146))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_146, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_146, 1862763509);
				PED::SET_PED_KEEP_TASK(iLocal_146, 1);
				if (GlobalFunc_115(iLocal_149))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_149, 0, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_149, 0, 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_149);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_149, 0);
					TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_146, iLocal_149, -1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_149, 3);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_149, 1, 1);
				}
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_151, "back_armsdown", 1000f, -8f, -1, 1, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
			{
				GlobalFunc_173(&uLocal_152, 4, iLocal_146, "CRIS", 0, 1);
			}
			bLocal_325 = false;
			iLocal_144 = 1;
			break;
		
		case 1:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					uLocal_329 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1966.059f, 2861.493f, 50.10657f, 5.965983f, 0f, -30.2506f, 50f, 0, 2);
					CAM::SET_CAM_ACTIVE(uLocal_329, 1);
					uLocal_330 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1970.629f, 2872.505f, 49.44081f, 5.712656f, 0f, -160.9523f, 50f, 0, 2);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
			}
			else if (GlobalFunc_115(iLocal_146))
			{
				if (GlobalFunc_115(iLocal_149))
				{
					if (GlobalFunc_1533(iLocal_146, iLocal_149, -1))
					{
						if (iLocal_328)
						{
							if (!bLocal_325)
							{
								bLocal_325 = GlobalFunc_10607(&uLocal_152, "EPS1AU", "EPS1_CAR", 8, 0, 0, 0);
							}
							else if (!GlobalFunc_111())
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_146, iLocal_149, fLocal_323, 786599);
								GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), 30000, 0);
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
								CAM::SET_CAM_ACTIVE(uLocal_330, 0);
								GlobalFunc_7632(0);
								iLocal_144 = 2;
							}
							else if (SYSTEM::TIMERA() > 10000)
							{
								if (!CAM::IS_CAM_ACTIVE(uLocal_330))
								{
									CAM::SET_CAM_ACTIVE(uLocal_330, 1);
									CAM::SET_CAM_ACTIVE(uLocal_329, 0);
									CAM::SET_CAM_PARAMS(uLocal_330, 1970.766f, 2872.221f, 49.47233f, 5.712656f, 0f, -160.9523f, 50f, 5000, 3, 3, 2);
								}
							}
						}
						else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 1)
							{
								PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 16000, 16000, 0, 1, 1, 0);
								ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, 0f, -5f, 2f, 0f, 0.5f, 0f, 3, 1, 1, 1, 0, 1);
								iLocal_328 = 1;
								SYSTEM::WAIT(1000);
								SYSTEM::SETTIMERA(0);
								GlobalFunc_79(2000, 0);
								CAM::SET_CAM_PARAMS(uLocal_329, 1966.352f, 2861.772f, 50.31656f, 4.433831f, 0f, -30.38087f, 50f, 10000, 0, 0, 2);
							}
						}
					}
					else
					{
						TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_146, iLocal_149, -1);
					}
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(10f, 0f, 0);
			func_213(5);
			break;
	}
}

void func_213(int iParam0)//Position - 0x251F4
{
	iLocal_143 = iParam0;
	iLocal_144 = 0;
}






















void func_235()//Position - 0x25B87
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		iLocal_146 = PED::CREATE_PED(26, iLocal_147, Local_320, 0, 1, 1);
	}
	if (GlobalFunc_115(iLocal_146))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_146, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_146, 1);
		PED::SET_PED_KEEP_TASK(iLocal_146, 1);
	}
}






void func_241()//Position - 0x25D93
{
	switch (iLocal_144)
	{
		case 0:
			func_235();
			bLocal_325 = false;
			iLocal_144 = 1;
			break;
		
		case 1:
			iLocal_144 = 2;
			break;
		
		case 2:
			func_213(4);
			break;
	}
}

void func_242()//Position - 0x25DD0
{
	GlobalFunc_8320();
	switch (iLocal_144)
	{
		case 0:
			iLocal_324 = 0;
			iLocal_326 = 0;
			if (GlobalFunc_7638(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_82.f_35[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_82.f_35[0], sLocal_145, 0, joaat("bison"), 0);
				}
				GlobalFunc_8954();
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(0);
				GlobalFunc_10064(-1612.513f, 4201.784f, 82.2147f, -1634.402f, 4205.392f, 83.02481f, 12f, -1652.085f, 4207.49f, 83.1525f, 231.8747f, 1, 1, 1, 0, 0);
				func_257(-1630.38f, 4200.79f, 83.01f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(-1630.38f, 4200.79f, 83.01f, 70f, 0, 0, 0, 0, 0);
				iLocal_144 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_144 = 2;
				}
			}
			else
			{
				if (!iLocal_326)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("EPS1_START"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("EPS1_START"))
						{
							iLocal_326 = 1;
						}
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 25500)
				{
					if (!iLocal_324)
					{
						GlobalFunc_2350(500, 1);
						iLocal_324 = 1;
					}
				}
				else if (GlobalFunc_4926(1000))
				{
					func_244(0, 0, 0);
					iLocal_144 = 2;
				}
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_4923(&Local_82, 0, 1);
			func_213(3);
			break;
	}
}


void func_244(bool bParam0, int iParam1, int iParam2)//Position - 0x26041
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
			func_245(iParam1, iParam2, 1, 1);
		}
	}
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x260A0
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
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












void func_257(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26418
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
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_47(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_47(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_47(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_47(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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






















void func_279()//Position - 0x273AC
{
	GlobalFunc_8320();
	switch (iLocal_144)
	{
		case 0:
			bLocal_327 = false;
			iLocal_144 = 1;
			break;
		
		case 1:
			if (!bLocal_327)
			{
				bLocal_327 = GlobalFunc_10607(&uLocal_152, "EPS1AU", "EPS1_TRUCK", 8, 0, 0, 0);
			}
			else if (!GlobalFunc_111())
			{
				if (SYSTEM::TIMERB() > 1000)
				{
					iLocal_144 = 2;
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 2:
			func_213(2);
			break;
	}
}

void func_280()//Position - 0x27423
{
	STREAMING::REQUEST_MODEL(iLocal_148);
	STREAMING::REQUEST_MODEL(iLocal_147);
	HUD::REQUEST_ADDITIONAL_TEXT("EPS1", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_151);
	while (((!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_151) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !STREAMING::HAS_MODEL_LOADED(iLocal_148)) || !STREAMING::HAS_MODEL_LOADED(iLocal_147))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	OBJECT::_0xF92099527DB8E2A7(128, 0);
	GlobalFunc_173(&uLocal_152, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	}
	func_213(1);
}







void func_287(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2840A
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

















int func_304(var uParam0)//Position - 0x28E3B
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = joaat("bison");
	switch (iLocal_78)
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
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_78 = 2;
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
				iLocal_78 = 3;
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






void func_310()//Position - 0x290EF
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		GlobalFunc_132(&iLocal_146, 1, 0, 1);
		GlobalFunc_131(&iLocal_149);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_148);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_147);
		OBJECT::_0x762DB2D380B48D04(128);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			GlobalFunc_8021(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		if (GlobalFunc_115(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
		}
	}
	func_245(1, 1, 1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_132(&iLocal_146, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(sLocal_151);
	GlobalFunc_9165(&Local_82, 1, 0, 0);
	GlobalFunc_7632(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}









































