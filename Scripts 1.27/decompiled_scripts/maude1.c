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
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
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
	int iLocal_327 = 0;
	struct<3> Local_328 = { 0, 0, 0 } ;
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
	iLocal_143 = 2;
	iLocal_146 = -1;
	iLocal_148 = -1;
	iLocal_149 = -1;
	iLocal_150 = 4;
	sLocal_158 = "Trevor";
	sLocal_159 = "Maude";
	sLocal_160 = "maude_chair";
	sLocal_161 = "maude_laptop";
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_80.f_59))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(Local_80.f_59);
		iLocal_146 = Local_80.f_59;
	}
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_400();
	}
	func_398();
	if (GlobalFunc_Is_Mission_Retry())
	{
		func_345();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_Maude", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_141 == 0)
			{
				func_254();
			}
			else if (iLocal_141 == 1)
			{
				func_27();
			}
			else if (iLocal_141 == 2)
			{
				func_1();
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x11C
{
	char* sVar0;
	
	sVar0 = 0;
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_21(0);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_154, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 0);
			}
			if (iLocal_143 == 1)
			{
				STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
				{
					GlobalFunc_200(&uLocal_162, 3);
					GlobalFunc_7090(iLocal_157, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_157))
					{
						if (GlobalFunc_775(iLocal_157, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 35f))
						{
							AUDIO::STOP_PED_SPEAKING(iLocal_157, 0);
							GlobalFunc_5653(iLocal_157, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (func_10())
				{
					iLocal_145 = 1;
				}
				sVar0 = "MAUDE_F1";
			}
			else if (iLocal_143 == 0)
			{
				sVar0 = "MAUDE_F2";
			}
			if (iLocal_143 == 2)
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
				func_3(1);
				func_400();
			}
			else if (iLocal_143 == 1)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
				{
					if (!iLocal_145)
					{
						STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
						if (func_10())
						{
							iLocal_145 = 1;
						}
					}
					else if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
					{
						if (!GlobalFunc_6964(iLocal_157, 1805844857))
						{
							if (!PED::IS_PED_FLEEING(iLocal_157))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_157, "special_ped@maude@exit_flee", "female_Flee_Table_Left_Maude", 3))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 2, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 64, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 128, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 8, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 1, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_157, 32, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_157, 5, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_157, 17, 1);
									TASK::TASK_SMART_FLEE_PED(iLocal_157, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_157, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}


void func_3(bool bParam0)//Position - 0x30D
{
	GlobalFunc_69(&iLocal_157);
	GlobalFunc_129(&iLocal_155, 0);
	GlobalFunc_129(&iLocal_156, 0);
	if (bParam0)
	{
		GlobalFunc_130(&iLocal_153);
		GlobalFunc_130(&iLocal_154);
	}
	else
	{
		GlobalFunc_129(&iLocal_153, 0);
		GlobalFunc_129(&iLocal_154, 0);
	}
}







int func_10()//Position - 0x470
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_157, "special_ped@maude@base", "base", 3))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_157) || TASK::IS_PED_GETTING_UP(iLocal_157))
			{
				STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
				if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@exit_flee"))
				{
					iLocal_149 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_149, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_149, 0);
					if (GlobalFunc_6964(iLocal_157, 1785177548))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_157, -1000f, 1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_157, iLocal_149, "special_ped@maude@exit_flee", "female_Flee_Table_Left_Maude", 1000f, -4f, 4626, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_157, 0, 0);
					if (GlobalFunc_115(iLocal_153))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_153, "special_ped@maude@base", "base_chair", 3))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_153, iLocal_149, "Female_Flee_Table_Left_Maude_Chair", "special_ped@maude@exit_flee", 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}











void func_21(bool bParam0)//Position - 0x923
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "MAUDE_loiter"))
		{
			if (bParam0)
			{
				GlobalFunc_5105();
			}
			else
			{
				GlobalFunc_4956();
			}
		}
	}
}






void func_27()//Position - 0x9E0
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (iLocal_142)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2727.4f, 4145.56f, 43.68f, 10f, joaat("prop_table_03b"), 0))
				{
					iLocal_155 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2727.4f, 4145.56f, 43.68f, 10f, joaat("prop_table_03b"), 1, 0, 1);
					if (GlobalFunc_115(iLocal_155))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_155, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_155, -92.17f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 1);
					}
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_157, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_157, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				PED::SET_PED_KEEP_TASK(iLocal_157, 1);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("MAUDE1", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				GlobalFunc_164("MAUDE_01", 7500, 0);
				iLocal_151 = MISC::GET_GAME_TIMER();
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_157, 0) };
				if (!func_235(0))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) > 14400f)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Var0, 2.5f) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_157))
						{
							iLocal_142 = 2;
						}
					}
					else
					{
						func_231(Var0, Var3, 18000, 1101004800);
					}
				}
				else
				{
					iLocal_143 = 1;
					iLocal_141 = 2;
					iLocal_142 = 0;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
			{
				iLocal_143 = 0;
				iLocal_141 = 2;
				iLocal_142 = 0;
			}
			break;
		
		case 2:
			func_21(0);
			if (GlobalFunc_663("MAUDE_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("MAUDE_01");
			}
			GlobalFunc_69(&iLocal_157);
			func_28();
			break;
	}
}

void func_28()//Position - 0xBA0
{
	GlobalFunc_6677("BBONDS_UNLOCK", 1, 0, -1, 10000, 4, 0, 0, 1);
	GlobalFunc_9621(62, 2, 1);
	func_29(107, 1);
	func_400();
}

void func_29(int iParam0, bool bParam1)//Position - 0xBCD
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_57();
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




























void func_57()//Position - 0x1F74
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
				if (GlobalFunc_10995(iVar1, 14, iVar2))
				{
					func_58(iVar1, 14, iVar2);
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

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x2035
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
	if (!GlobalFunc_10995(iParam0, iParam1, iParam2))
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
				func_58(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_58(iParam0, 14, uVar20[iVar18]))
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
	if (GlobalFunc_11115(iParam0, iVar0, &iVar46, 0))
	{
		func_61(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11114(iParam0, iVar0, &iVar46))
	{
		func_61(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x22B5
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
				iVar5 = GlobalFunc_7247(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7247(iParam0, 9);
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
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11241(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_67(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 1))
							{
								func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_61(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_61(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_61(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_61(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_61(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_61(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 0))
		{
			func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11114(iParam0, iVar10, &iVar4))
		{
			func_61(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x32C8
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
				if (GlobalFunc_10995(iParam0, iParam1, iVar0))
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
				if (GlobalFunc_10995(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7247(iParam0, iParam1);
		}
	}
	return -99;
}




































































































































































int func_231(struct<3> Param0, struct<3> Param3, int iParam6, float fParam7)//Position - 0x2579F
{
	if (iLocal_152 < iLocal_150)
	{
		if (!GlobalFunc_111())
		{
			if (SYSTEM::VDIST2(Param3, Param0) < (fParam7 * fParam7))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_151) > (iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					GlobalFunc_173(&uLocal_162, 3, iLocal_157, "MAUDE", 0, 1);
					GlobalFunc_5157(&uLocal_162, "MAUDEAU", "MAUDE_loiter", 7, 0, 0);
					iLocal_151 = MISC::GET_GAME_TIMER();
					iLocal_152++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_151 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}




int func_235(bool bParam0)//Position - 0x25945
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_157) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_157)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_157))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_157))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_154))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_157, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_157))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_157, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_157, 50))
		{
			return 1;
		}
		if (func_243(iLocal_157, 1126825984))
		{
			return 1;
		}
		if (GlobalFunc_8324(iLocal_157, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_157, 1), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_157, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}








int func_243(int iParam0, float fParam1)//Position - 0x25E5C
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
				if (func_244(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_244(int iParam0, float fParam1)//Position - 0x25ED2
{
	return func_245(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_245(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x25EEA
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_251(iParam0, iParam1);
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
		iVar4 = func_248();
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



int func_248()//Position - 0x2619C
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



int func_251(int iParam0, int iParam1)//Position - 0x26292
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



void func_254()//Position - 0x26312
{
	int iVar0;
	
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_9623("MAUDE_MCS_1", 0);
			if (GlobalFunc_115(iLocal_157))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_159, iLocal_157, 0);
				}
			}
			GlobalFunc_8535();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_335())
				{
					if (GlobalFunc_7961(1, 1093140480, 0))
					{
						GlobalFunc_4923(&Local_80, 0, 1);
						GlobalFunc_2372(&iLocal_157, &(Local_80.f_28[0]));
						GlobalFunc_128(&iLocal_153, &(Local_80.f_41[0]));
						GlobalFunc_128(&iLocal_154, &(Local_80.f_41[1]));
						func_327();
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_158, 0, 0, 0);
						if (GlobalFunc_115(iLocal_157))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_157, sLocal_159, 0, 0, 0);
						}
						if (GlobalFunc_115(iLocal_153))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_153, sLocal_160, 0, 0, 0);
						}
						if (GlobalFunc_115(iLocal_154))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_154, sLocal_161, 0, 0, 0);
						}
						RECORDING::_0x48621C9FCA3EBD28(4);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						GlobalFunc_8954();
						func_322(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						func_267();
						func_266(31, 1, 0);
						func_265();
						bLocal_144 = false;
						iLocal_142 = 1;
					}
				}
				else
				{
					GlobalFunc_8316(1, 1, 1, 0);
				}
			}
			else
			{
				GlobalFunc_8316(1, 1, 1, 0);
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_153))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_157))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_159, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_160, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base"))
						{
							iLocal_146 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_146, 1);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_146, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_157, iLocal_146, "special_ped@maude@base", "base", 1000f, -8f, 4688, 0, 1148846080, 0);
							iVar0 = 0;
							iVar0 = 16;
							iVar0 = 64;
							iVar0 = 512;
							iVar0 = 4096;
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_153, iLocal_146, "base_chair", "special_ped@maude@base", 1000f, -8f, iVar0, 1148846080);
							PED::SET_PED_KEEP_TASK(iLocal_157, 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_158, 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				bLocal_144 = true;
			}
			if (!bLocal_144)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_142 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				func_256(1, 1, 1, 1);
				func_255();
				iLocal_141 = 1;
				iLocal_142 = 0;
			}
			break;
	}
}

void func_255()//Position - 0x265CC
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!GlobalFunc_115(iVar0))
	{
		iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_328, 10f, 0, 16390);
		if (!GlobalFunc_115(iVar0))
		{
			return;
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1);
}

void func_256(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2660D
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









int func_265()//Position - 0x268DE
{
	STREAMING::REQUEST_ANIM_DICT("special_ped@maude@base");
	HUD::REQUEST_ADDITIONAL_TEXT("MAUDE1", 0);
	if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base") && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_266(int iParam0, bool bParam1, bool bParam2)//Position - 0x2690F
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var3 = { 2739.981f, 4155.221f, 50.28859f };
	switch (iParam0)
	{
		case 31:
			if (bParam1)
			{
				uLocal_79 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
				PATHFIND::SET_ROADS_IN_AREA(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 0, 1);
				if (bParam2)
				{
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var3);
					MISC::CLEAR_AREA(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
				}
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_79, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 1, 1);
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
			}
			break;
	}
}

void func_267()//Position - 0x26A0E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { 2728.995f, 4143.165f, 41.02986f };
	Var3 = { 2719.126f, 4144.691f, 47.88543f };
	fVar9 = 13f;
	Var6 = { 3f, 11f, 6f };
	if (GlobalFunc_7091(Var6, 0))
	{
		GlobalFunc_9628(Var0, Var3, fVar9, 2719.87f, 4143.46f, 43.46f, 261.91f, 1, 1, 1, 0, 0);
		GlobalFunc_10606(2719.87f, 4143.46f, 43.46f, 261.91f, 0, 145);
		Local_328 = { 2719.87f, 4143.46f, 43.46f };
	}
	else
	{
		GlobalFunc_9628(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
		GlobalFunc_10606(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
		Local_328 = { 2710.665f, 4149.075f, 42.7026f };
	}
}























































void func_322(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2A697
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
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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





void func_327()//Position - 0x2A8F8
{
	struct<3> Var0;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		Var0 = { 2727.29f, 4145.9f, 44.16f };
		iVar3 = joaat("prop_radio_01");
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var0, 150f))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, iVar3, 0))
			{
				iLocal_156 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, iVar3, 1, 0, 1);
			}
		}
	}
}








int func_335()//Position - 0x2AD40
{
	if ((GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) || GlobalFunc_188())
	{
		return 1;
	}
	if (iLocal_147 == 0)
	{
		if (GlobalFunc_115(Local_80.f_28[0]))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 7f))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_80.f_28[0], 0f, 0f, 0f, 1, -1, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.8f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 0f, 1.2f, 0f, 1f, -1, 1036831949, 1);
				}
				iLocal_148 = MISC::GET_GAME_TIMER();
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 0);
				}
				iLocal_148 = -1;
			}
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 4000, 0, 2);
		}
		iLocal_147++;
	}
	else if (iLocal_147 == 1)
	{
		if ((iLocal_148 == -1 || (MISC::GET_GAME_TIMER() - iLocal_148) > 3000) || (GlobalFunc_115(Local_80.f_28[0]) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_80.f_28[0], 4.5f)))
		{
			return 1;
		}
	}
	return 0;
}










void func_345()//Position - 0x2B0AE
{
	if (Global_84544)
	{
		GlobalFunc_10698(&iLocal_327, 2662.644f, 4284.535f, 43.5787f, 19.8376f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145);
		GlobalFunc_4972(2672.462f, 4288.777f, 43.607f, 78.1133f, 0, 0);
		func_356(1, 1);
		SYSTEM::WAIT(500);
		GlobalFunc_4967(0, -1, 1);
		func_354(1, 1, 1);
		iLocal_141 = 1;
		iLocal_142 = 2;
		GlobalFunc_79(500, 1);
	}
	else
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_347(&Local_80))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_80, 0, 1);
		GlobalFunc_4945(&Local_80);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_80.f_59))
		{
			PED::_DISPOSE_SYNCHRONIZED_SCENE(Local_80.f_59);
			iLocal_146 = Local_80.f_59;
		}
		Global_68490 = 0;
		GlobalFunc_2372(&iLocal_157, &(Local_80.f_28[0]));
		GlobalFunc_128(&iLocal_153, &(Local_80.f_41[0]));
		GlobalFunc_128(&iLocal_154, &(Local_80.f_41[1]));
		if (!ENTITY::DOES_ENTITY_EXIST(GlobalFunc_2251()))
		{
			GlobalFunc_10698(&iLocal_327, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
		}
		GlobalFunc_4972(2718.649f, 4147.208f, 42.7043f, 76.7892f, 0, 0);
		func_356(1, 1);
		func_267();
		func_266(31, 1, 0);
		SYSTEM::WAIT(0);
		while (!func_265())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(0, -1, 1);
		func_354(1, 1, 1);
		iLocal_141 = 1;
		iLocal_142 = 0;
	}
}


int func_347(var uParam0)//Position - 0x2B232
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	iVar0[0] = GlobalFunc_4946(62);
	iVar0[1] = joaat("prop_table_03_chr");
	iVar0[2] = joaat("prop_laptop_01a");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2729.092f, 4143.17f, 41.36332f };
			uParam0->f_17[1 /*3*/] = { 2714.735f, 4145.382f, 45.30732f };
			uParam0->f_24 = 12.8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "MAUDE_MCS_1", 24);
			func_266(31, 1, 1);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			STREAMING::REQUEST_ANIM_DICT("special_ped@maude@base");
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base"))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[1], 2728.35f, 4145.59f, 43.3f, -91.28f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[2], 2727.686f, 4145.715f, 44.08f, 71f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_8025(&(uParam0->f_28[0]), 62, 2728.33f, 4145.6f, 43.89f, 89.19f, "RC MAUDE 1", 1))
				{
					bVar5 = false;
				}
			}
			if (bVar5)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_IsPedNotInjuredOrDead(uParam0->f_28[0]) && GlobalFunc_115(uParam0->f_41[0]))
			{
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, "special_ped@maude@base", "base", 1000f, -4f, 4688, 0, 1148846080, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				iVar6 = 0;
				iVar6 += 16;
				iVar6 += 64;
				iVar6 += 512;
				iVar6 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], uParam0->f_59, "base_chair", "special_ped@maude@base", 1000f, -8f, iVar6, 1148846080);
			}
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







void func_354(int iParam0, int iParam1, int iParam2)//Position - 0x2B676
{
	func_256(0, 0, iParam2, 1);
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


void func_356(bool bParam0, bool bParam1)//Position - 0x2B76E
{
	if (bParam0)
	{
		func_357(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_322(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_357(bool bParam0, int iParam1, int iParam2)//Position - 0x2B7A1
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
			func_256(iParam1, iParam2, 1, 1);
		}
	}
}









































void func_398()//Position - 0x3014D
{
	iLocal_141 = 0;
	iLocal_142 = 0;
	iLocal_146 = -1;
	iLocal_147 = 0;
	iLocal_148 = -1;
	iLocal_149 = -1;
	iLocal_150 = 4;
	iLocal_151 = 0;
	iLocal_152 = 0;
	iLocal_145 = 0;
	bLocal_144 = false;
	GlobalFunc_3041();
}


void func_400()//Position - 0x30187
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		func_412();
	}
	GlobalFunc_8956(&Local_80, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}












void func_412()//Position - 0x30409
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	func_266(31, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("special_ped@maude@base");
	func_3(0);
}
























