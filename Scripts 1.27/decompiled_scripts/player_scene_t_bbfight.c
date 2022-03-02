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
	int iLocal_27 = 0;
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
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 10;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 16;
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
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_278[2] = { 0, 0 };
	int iLocal_281[2] = { 0, 0 };
	int iLocal_284 = 0;
	var uLocal_285[2] = { 0, 0 };
	int iLocal_288[2] = { 0, 0 };
	int iLocal_291[2] = { 0, 0 };
	struct<3> Local_294 = { 0, 0, 0 } ;
	float fLocal_297 = 0f;
	struct<3> Local_298[2];
	float fLocal_305[2] = { 0f, 0f };
	struct<3> Local_308[1];
	struct<3> Local_312[1];
	float fLocal_316[1] = { 0f };
	char* sLocal_318 = NULL;
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
	char[] cLocal_334[8] = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	char[] cLocal_350[8] = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	char cLocal_366[64] = "";
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	struct<16> Local_382[2];
	struct<16> Local_415[2];
	struct<16> Local_448[2];
	int iLocal_481[2] = { 0, 0 };
	struct<2> Local_484 = { 0, 0 } ;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	struct<2> Local_488 = { 0, 0 } ;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	struct<2> Local_492 = { 0, 0 } ;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	float fLocal_496 = 0f;
	int iLocal_497 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	iLocal_108 = 318;
	iLocal_274 = 1;
	StringCopy(&Local_484, "", 16);
	StringCopy(&Local_488, "", 16);
	StringCopy(&Local_492, "", 16);
	fLocal_496 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_59();
	}
	SYSTEM::WAIT(0);
	func_48();
	func_47();
	GlobalFunc_576();
	while (iLocal_274 && GlobalFunc_9548(5, 0))
	{
		if (func_40())
		{
			func_59();
		}
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_108 == 258 && GlobalFunc_466(13) == 2)
			{
				func_59();
			}
		}
		SYSTEM::WAIT(0);
		switch (iLocal_107)
		{
			case 0:
				if (func_37())
				{
					iLocal_107 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_107 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_59();
}

void func_1()//Position - 0x142
{
	iLocal_274 = 0;
}

int func_2()//Position - 0x14E
{
	float fVar0;
	int iVar1;
	
	func_22(&iLocal_275, &iLocal_278);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
		iVar1 = GlobalFunc_8354();
		if (GlobalFunc_42(iVar1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_492))
			{
				if (!iLocal_497)
				{
					if (fVar0 < fLocal_496)
					{
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_484))
						{
							GlobalFunc_878(&uLocal_109, GlobalFunc_8354(), PLAYER::PLAYER_PED_ID(), &Local_484, 0, 1);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_488))
						{
							GlobalFunc_878(&uLocal_109, 4, iLocal_275[0], &Local_488, 0, 1);
						}
						if (GlobalFunc_10643(&uLocal_109, "PRSAUD", &Local_492, 3, 0, 0, 0))
						{
							iLocal_497 = 1;
						}
					}
				}
			}
		}
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_294) > 100f)
	{
		return 1;
	}
	return 0;
}




















int func_22(int iParam0, int iParam1)//Position - 0xADD
{
	int iVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	char* sVar4;
	char* sVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	struct<3> Var18;
	struct<3> Var21;
	float fVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			switch ((*iParam1)[iVar0])
			{
				case 100:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696))
					{
						TASK::TASK_SYNCHRONIZED_SCENE((*iParam0)[iVar0], Global_87696, &cLocal_366, &(Local_382[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
						(*iParam1)[iVar0] = 101;
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
					{
						PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_87697);
						(*iParam1)[iVar0] = 101;
					}
					break;
				
				case 101:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
					{
						TASK::TASK_SYNCHRONIZED_SCENE((*iParam0)[iVar0], Global_87697, &cLocal_366, &(Local_415[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
						STREAMING::REQUEST_ANIM_DICT(&cLocal_366);
						(*iParam1)[iVar0] = 102;
					}
					break;
				
				case 102:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_366) && ENTITY::IS_ENTITY_PLAYING_ANIM((*iParam0)[iVar0], &cLocal_366, &(Local_415[iVar0 /*16*/]), 2))
					{
						sVar1 = "victim_fall";
						fVar2 = -1f;
						fVar3 = -1f;
						if (ENTITY::FIND_ANIM_EVENT_PHASE(&cLocal_366, &(Local_415[iVar0 /*16*/]), sVar1, &fVar2, &fVar3))
						{
							if (fVar2 < PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697))
							{
								if (!PED::IS_PED_RUNNING_RAGDOLL_TASK((*iParam0)[iVar0]))
								{
									TASK::CLEAR_PED_TASKS((*iParam0)[iVar0]);
									PED::SET_PED_TO_RAGDOLL_WITH_FALL((*iParam0)[iVar0], 1000, 3000, 4, ENTITY::GET_ENTITY_FORWARD_VECTOR((*iParam0)[iVar0]), 100f, 0f, 0f, 0f, 0f, 0f, 0f);
									PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 137, 1);
								}
							}
						}
						if (iLocal_108 == 165)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_448[iVar0 /*16*/])))
							{
								sVar4 = "AMB@WORLD_HUMAN_CLIPBOARD@MALE@BASE";
								STREAMING::REQUEST_ANIM_DICT(sVar4);
								if (0.95f < PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697))
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE((*iParam0)[iVar0], &(Local_448[iVar0 /*16*/]), 0, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE((*iParam0)[iVar0], 0, 0);
										SYSTEM::WAIT(0);
										iLocal_481[iVar0] = -1;
										(*iParam1)[iVar0] = 5;
										break;
									}
								}
							}
						}
						if (iLocal_108 == 259)
						{
							if (0.95f < PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697))
							{
								TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE((*iParam0)[iVar0], PLAYER::PLAYER_PED_ID(), 0f, -1f, 0f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE((*iParam0)[iVar0], 0, 0);
								SYSTEM::WAIT(0);
								(*iParam1)[iVar0] = 10;
								break;
							}
						}
						if (iLocal_108 == 246 && iVar0 == 0)
						{
							if (0.95f < PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697))
							{
								TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE((*iParam0)[iVar0], PLAYER::PLAYER_PED_ID(), 0f, -1f, 0f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE((*iParam0)[iVar0], 0, 0);
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
								{
									TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(PLAYER::PLAYER_PED_ID(), (*iParam0)[iVar0], 0f, -1f, 0f, 0);
									SYSTEM::WAIT(0);
								}
								(*iParam1)[iVar0] = 10;
								break;
							}
						}
					}
					else
					{
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 200:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696))
					{
						TASK::TASK_PLAY_ANIM((*iParam0)[iVar0], &cLocal_366, &(Local_382[iVar0 /*16*/]), 8f, -1000f, -1, 0, 0, 0, 0, 0);
						(*iParam1)[iVar0] = 201;
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
					{
						(*iParam1)[iVar0] = 201;
					}
					break;
				
				case 201:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
					{
						TASK::TASK_PLAY_ANIM((*iParam0)[iVar0], &cLocal_366, &(Local_415[iVar0 /*16*/]), 8f, -1.5f, -1, 32768, 0, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY((*iParam0)[iVar0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						STREAMING::REQUEST_ANIM_DICT(&cLocal_366);
						(*iParam1)[iVar0] = 202;
					}
					break;
				
				case 202:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_366) && ENTITY::IS_ENTITY_PLAYING_ANIM((*iParam0)[iVar0], &cLocal_366, &(Local_415[iVar0 /*16*/]), 1))
					{
						sVar5 = "victim_fall";
						fVar6 = -1f;
						fVar7 = -1f;
						if (ENTITY::FIND_ANIM_EVENT_PHASE(&cLocal_366, &(Local_415[iVar0 /*16*/]), sVar5, &fVar6, &fVar7))
						{
							if (fVar6 < ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*iParam0)[iVar0], &cLocal_366, &(Local_415[iVar0 /*16*/])))
							{
								if (!PED::IS_PED_RUNNING_RAGDOLL_TASK((*iParam0)[iVar0]))
								{
									TASK::CLEAR_PED_TASKS((*iParam0)[iVar0]);
									PED::SET_PED_TO_RAGDOLL_WITH_FALL((*iParam0)[iVar0], 1000, 3000, 4, ENTITY::GET_ENTITY_FORWARD_VECTOR((*iParam0)[iVar0]), 100f, 0f, 0f, 0f, 0f, 0f, 0f);
									PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 137, 1);
								}
							}
						}
						if (iLocal_108 == 108 || iLocal_108 == 109)
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*iParam0)[iVar0], &cLocal_366, &(Local_415[iVar0 /*16*/])) > 0.954f)
							{
								if (iLocal_108 == 108)
								{
									Local_298[iVar0 /*3*/] = { Vector(224.5948f, 1213.466f, 199.6328f) - Local_294 };
								}
								else if (iLocal_108 == 109)
								{
									Local_298[iVar0 /*3*/] = { Vector(5.9049f, -717.1404f, -1908.287f) - Local_294 };
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*iParam0)[iVar0], Local_294 + Local_298[iVar0 /*3*/], 1f, -1, 1048576000, 0, 1193033728);
								PED::FORCE_PED_MOTION_STATE((*iParam0)[iVar0], -668482597, 0, 0, 0);
								TASK::TASK_CLEAR_LOOK_AT((*iParam0)[iVar0]);
								SYSTEM::WAIT(0);
								(*iParam1)[iVar0] = 1;
							}
						}
					}
					else
					{
						if (iLocal_108 == 108)
						{
							Local_298[iVar0 /*3*/] = { Vector(224.5948f, 1213.466f, 199.6328f) - Local_294 };
						}
						else if (iLocal_108 == 109)
						{
							Local_298[iVar0 /*3*/] = { Vector(5.9049f, -717.1404f, -1908.287f) - Local_294 };
						}
						TASK::TASK_CLEAR_LOOK_AT((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 0:
					Var8 = { ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1) };
					Var11 = { Local_294 + Local_298[iVar0 /*3*/] + Vector(1f, 0f, 0f) };
					fVar14 = SYSTEM::VDIST(Var8, Var11);
					if (func_26((*iParam0)[iVar0]))
					{
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (fVar14 >= 1f)
					{
						(*iParam1)[iVar0] = 1;
						break;
					}
					fVar15 = ENTITY::GET_ENTITY_HEADING((*iParam0)[iVar0]);
					fVar16 = (fLocal_297 + fLocal_305[iVar0]);
					if (fVar16 < 0f)
					{
						fVar16 = (fVar16 + 360f);
					}
					else if (fVar16 > 360f)
					{
						fVar16 = (fVar16 - 360f);
					}
					fVar17 = MISC::ABSF((fVar15 - fVar16));
					if (fVar17 > 45f)
					{
						if (!TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0], 1920390111) == 1)
						{
							TASK::TASK_ACHIEVE_HEADING((*iParam0)[iVar0], fVar16, 0);
						}
						break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_448[iVar0 /*16*/])))
					{
						iLocal_481[iVar0] = -1;
						(*iParam1)[iVar0] = 5;
						break;
					}
					break;
				
				case 1:
					Var18 = { ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1) };
					Var21 = { Local_294 + Local_298[iVar0 /*3*/] + Vector(1f, 0f, 0f) };
					fVar24 = SYSTEM::VDIST(Var18, Var21);
					if (fVar24 <= 0.5f)
					{
						(*iParam1)[iVar0] = 0;
						break;
					}
					if (func_26((*iParam0)[iVar0]))
					{
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (!TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0], 713668775) == 1 && !TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0], 713668775) == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*iParam0)[iVar0], Var21, 0.5f, -1, 1048576000, 0, 1193033728);
						break;
					}
					break;
				
				case 10:
					if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0], -71340211) == 7 || TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0], -71340211) == 1)
					{
						iVar25 = 0;
						while (iVar25 < *iParam0)
						{
							if (iVar0 != iVar25)
							{
								if ((*iParam1)[iVar25] < 10)
								{
									(*iParam1)[iVar25] = 10;
								}
							}
							iVar25++;
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_284, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_284);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED((*iParam0)[iVar0], 25f, -1, 0);
						PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 11;
					}
					break;
				
				case 11:
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_294) > 50f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1)) > 50f)
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_284, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_284);
						TASK::CLEAR_PED_TASKS((*iParam0)[iVar0]);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*iParam0)[iVar0], Local_294 + Local_298[iVar0 /*3*/], 0.5f, -1, 1048576000, 0, 1193033728);
						(*iParam1)[iVar0] = 1;
					}
					if (func_23((*iParam0)[iVar0], 15f))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_284, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_284);
						TASK::CLEAR_PED_TASKS((*iParam0)[iVar0]);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*iParam0)[iVar0], Local_294 + Local_298[iVar0 /*3*/], 0.5f, -1, 1048576000, 0, 1193033728);
						(*iParam1)[iVar0] = 1;
					}
					break;
				
				case 5:
					if (func_26((*iParam0)[iVar0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_285[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_285[iVar0]));
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_285[iVar0]));
						}
						TASK::CLEAR_PED_TASKS((*iParam0)[iVar0]);
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*iParam0)[iVar0]);
						(*iParam1)[iVar0] = 10;
						break;
					}
					if (!TASK::PED_HAS_USE_SCENARIO_TASK((*iParam0)[iVar0]))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Local_448[iVar0 /*16*/]), "any"))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_294 + Local_298[iVar0 /*3*/], 20f, 1))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD((*iParam0)[iVar0], Local_294 + Local_298[iVar0 /*3*/], 20f, 0);
								iLocal_481[iVar0] = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iVar26 = 1;
							if (iLocal_108 == 165)
							{
								iVar26 = 0;
							}
							TASK::TASK_START_SCENARIO_IN_PLACE((*iParam0)[iVar0], &(Local_448[iVar0 /*16*/]), 0, iVar26);
							iLocal_481[iVar0] = MISC::GET_GAME_TIMER();
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_285[iVar0]))
					{
						if (iLocal_481[iVar0] > 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_481[iVar0] + 1000)
							{
								OBJECT::DELETE_OBJECT(&(uLocal_285[iVar0]));
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_285[iVar0]));
							}
						}
					}
					break;
				
				default:
					break;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if ((*iParam1)[iVar0] != -1)
			{
				iVar27 = 0;
				while (iVar27 < *iParam0)
				{
					if (iVar0 != iVar27)
					{
						if ((*iParam1)[iVar27] != -1 && (*iParam1)[iVar27] < 10)
						{
							(*iParam1)[iVar27] = 10;
						}
					}
					iVar27++;
				}
				(*iParam1)[iVar0] = -1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_285[iVar0]))
			{
				if (iLocal_481[iVar0] > 0)
				{
					OBJECT::DELETE_OBJECT(&(uLocal_285[iVar0]));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_285[iVar0]));
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(var uParam0, float fParam1)//Position - 0x155F
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < 262)
	{
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 0))
		{
			if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 9)
			{
			}
			else
			{
				Var1 = { GlobalFunc_2247(iVar0, 0) };
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), Var1) < (fParam1 * fParam1))
				{
					return 1;
				}
				if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 19))
				{
					iVar5 = 3;
					iVar4 = 0;
					while (iVar4 < iVar5)
					{
						Var6 = { GlobalFunc_2247(iVar0, iVar4) };
						if (!GlobalFunc_105(Var6))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), Var6) < (fParam1 * fParam1))
							{
								return 1;
							}
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}



int func_26(int iParam0)//Position - 0x1689
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_29(iParam0, 1, 0, 0, 0))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 15f))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam0, 72))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_275)
	{
		if (iParam0 != iLocal_275[iVar0])
		{
			if (iLocal_278[iVar0] < 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!GlobalFunc_100(Local_312[iVar1 /*3*/], 0f, 0f, 0f))
		{
			if (func_27(PLAYER::PLAYER_PED_ID(), Local_294 + Local_308[iVar1 /*3*/], Local_312[iVar1 /*3*/], (fLocal_297 + fLocal_316[iVar1]), 0, 1, 0))
			{
				fVar2 = 50f;
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_27(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10)//Position - 0x17AE
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0.x = (Param1.x - (SYSTEM::COS(fParam7) * Param4.x));
	Var0.f_1 = (Param1.f_1 - (SYSTEM::SIN(fParam7) * Param4.x));
	Var0.f_2 = (Param1.f_2 - Param4.f_2);
	Var3.x = (Param1.x + (SYSTEM::COS(fParam7) * Param4.x));
	Var3.f_1 = (Param1.f_1 + (SYSTEM::SIN(fParam7) * Param4.x));
	Var3.f_2 = (Param1.f_2 + Param4.f_2);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Var0, Var3, (Param4.f_1 * 2f), iParam8, iParam9, iParam10))
	{
		return 1;
	}
	return 0;
}


int func_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x185B
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
	if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()) && GlobalFunc_847(uParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_35(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (GlobalFunc_8055(uParam0, fVar1, bParam3, bParam4))
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
				if (func_35(iParam0, bParam1, fVar0, fVar1))
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






int func_35(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x1BE5
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
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}


int func_37()//Position - 0x1C4D
{
	func_22(&iLocal_275, &iLocal_278);
	if (!GlobalFunc_2927())
	{
		return 1;
	}
	return 0;
}



int func_40()//Position - 0x1CD5
{
	var uVar0;
	
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2))
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !GlobalFunc_488())
		{
			return 1;
		}
	}
	if (GlobalFunc_153(8, -1))
	{
		return 1;
	}
	if (Global_2422140.f_72)
	{
		return 1;
	}
	if (Global_87845.f_44 == 1)
	{
		if (Global_87845.f_46 == 0)
		{
			return 1;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}







void func_47()//Position - 0x1F50
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_275)
		{
			if (iLocal_281[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_281[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_281[iVar0]))
				{
					bVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_281[iVar0]);
				}
			}
			if (iLocal_288[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_288[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_288[iVar0]))
				{
					bVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_288[iVar0]);
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	PED::ADD_RELATIONSHIP_GROUP("FIGHTERS", &iLocal_284);
	iVar0 = 0;
	while (iVar0 < iLocal_275)
	{
		if (iLocal_281[iVar0] != 0)
		{
			iLocal_275[iVar0] = PED::CREATE_PED(26, iLocal_281[iVar0], Local_294 + Local_298[iVar0 /*3*/], 0, 1, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_275[iVar0], (fLocal_297 + fLocal_305[iVar0]));
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_275[iVar0], 0);
			if (iLocal_281[iVar0] == joaat("s_m_y_baywatch_01"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iLocal_275[iVar0], 3) == 0)
				{
					if (PED::GET_PED_DRAWABLE_VARIATION(iLocal_275[iVar0], 10) != 1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_275[iVar0], 10, 1, 0, 0);
					}
				}
				else if (PED::GET_PED_DRAWABLE_VARIATION(iLocal_275[iVar0], 10) == 1)
				{
					if (PED::GET_PED_DRAWABLE_VARIATION(iLocal_275[iVar0], 10) != 0)
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_275[iVar0], 10, 0, 0, 0);
					}
				}
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_275[iVar0], iLocal_284);
			TASK::TASK_STAND_STILL(iLocal_275[iVar0], -1);
			if (iLocal_108 == 285)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_275[iVar0], 105);
				ENTITY::SET_ENTITY_HEALTH(iLocal_275[iVar0], 105);
			}
		}
		if (iLocal_288[iVar0] != 0)
		{
			uLocal_285[iVar0] = OBJECT::CREATE_OBJECT(iLocal_288[iVar0], Local_294 + Local_298[iVar0 /*3*/], 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(uLocal_285[iVar0], (fLocal_297 + fLocal_305[iVar0]));
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_285[iVar0], iLocal_275[iVar0], PED::GET_PED_BONE_INDEX(iLocal_275[iVar0], iLocal_291[iVar0]), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_284, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_284);
}

void func_48()//Position - 0x21B2
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	
	iLocal_108 = Global_89502;
	GlobalFunc_8273(iLocal_108, &Local_294, &fLocal_297, &cVar0);
	GlobalFunc_5930(iLocal_108, &sLocal_318, &cLocal_334, &cLocal_350, &uVar8, &uVar9);
	Local_308[0 /*3*/] = { 0f, 0f, 0f };
	Local_312[0 /*3*/] = { 0f, 0f, 0f };
	fLocal_316[0] = 0f;
	switch (iLocal_108)
	{
		case 108:
			Local_298[0 /*3*/] = { -0.88f, 0.8016f, -1f };
			fLocal_305[0] = -150f;
			iLocal_281[0] = joaat("s_m_y_ranger_01");
			iLocal_278[0] = 200;
			StringCopy(&cLocal_366, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(&(Local_382[0 /*16*/]), "Ranger_Nervous_Loop", 64);
			StringCopy(&(Local_415[0 /*16*/]), "PARKBENCH_SMOKE_RANGER_EXIT_RANGER", 64);
			StringCopy(&(Local_448[0 /*16*/]), "any", 64);
			break;
		
		case 109:
			Local_298[0 /*3*/] = { -1.1832f, -0.3745f, -1f };
			fLocal_305[0] = -147f;
			iLocal_281[0] = joaat("s_m_y_baywatch_01");
			iLocal_278[0] = 200;
			StringCopy(&cLocal_366, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(&(Local_382[0 /*16*/]), "Ranger_Nervous_Loop", 64);
			StringCopy(&(Local_415[0 /*16*/]), "PARKBENCH_SMOKE_RANGER_EXIT_RANGER", 64);
			StringCopy(&(Local_448[0 /*16*/]), "any", 64);
			break;
		
		case 157:
			Local_298[0 /*3*/] = { -0.8296f, 1.1365f, -0.9999f };
			fLocal_305[0] = -176.3014f;
			iLocal_281[0] = joaat("s_m_m_bouncer_01");
			iLocal_278[0] = 100;
			StringCopy(&cLocal_366, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_BOUNCER", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_BOUNCER", 64);
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 166:
			Local_298[0 /*3*/] = { Vector(36.037f, -476.663f, -1050.724f) - Local_294 };
			fLocal_305[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_281[0] = joaat("s_m_m_security_01");
			iLocal_278[0] = 100;
			StringCopy(&cLocal_366, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_GUARD", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_GUARD", 64);
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_CLIPBOARD", 64);
			break;
		
		case 165:
			Local_298[0 /*3*/] = { 0.1366f, -1.2192f, -1f };
			fLocal_305[0] = 85.6329f;
			iLocal_281[0] = joaat("s_m_y_grip_01");
			iLocal_278[0] = 100;
			StringCopy(&cLocal_366, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_STAFF", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_STAFF", 64);
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_CLIPBOARD", 64);
			iLocal_288[0] = joaat("p_cs_clipboard");
			iLocal_291[0] = 60309;
			StringCopy(&Local_484, "MICHAEL", 16);
			StringCopy(&Local_488, "PREMPLOYEE", 16);
			Local_492 = { GlobalFunc_2924("MICS3_IG_2", 3) };
			fLocal_496 = 0.2f;
			break;
		
		case 246:
			Local_298[0 /*3*/] = { Vector(4.6f, -1570.924f, -1194.77f) - Local_294 + Vector(-1f, 0f, 0f) };
			fLocal_305[0] = (0.61f - fLocal_297);
			Local_298[1 /*3*/] = { -1.3617f, 6.7273f, -1f };
			fLocal_305[1] = -3.6142f;
			iLocal_281[0] = joaat("a_m_y_musclbeac_01");
			iLocal_281[1] = joaat("a_m_y_musclbeac_01");
			iLocal_278[0] = 100;
			iLocal_278[1] = 100;
			StringCopy(&cLocal_366, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_BB1", 64);
			StringCopy(&(Local_382[1 /*16*/]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_BB2", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_BB1", 64);
			StringCopy(&(Local_415[1 /*16*/]), "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_BB2", 64);
			StringCopy(&(Local_448[0 /*16*/]), "any", 64);
			StringCopy(&(Local_448[1 /*16*/]), "WORLD_HUMAN_MUSCLE_FREE_WEIGHTS", 64);
			break;
		
		case 256:
			Local_298[0 /*3*/] = { -4.7f, -0.2f, 0f };
			fLocal_305[0] = 143f;
			iLocal_281[0] = joaat("a_m_m_business_01");
			iLocal_278[0] = 0;
			iLocal_278[1] = 0;
			Local_308[0 /*3*/] = { -3.65f, -1.2f, 1.5f };
			Local_312[0 /*3*/] = { 2.5f, 1.25f, 2f };
			fLocal_316[0] = -12f;
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 257:
			Local_298[0 /*3*/] = { Vector(7.1578f, -978.6192f, -1666.374f) - Local_294 };
			fLocal_305[0] = -149.0587f;
			iLocal_281[0] = joaat("a_m_m_business_01");
			iLocal_278[0] = 0;
			iLocal_278[1] = 0;
			Local_308[0 /*3*/] = { 0.4f, -4.1f, 1.8f };
			Local_312[0 /*3*/] = { 2.5f, 1.5f, 2f };
			fLocal_316[0] = 57f;
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 258:
			Local_298[0 /*3*/] = { 1.5f, 5.7035f, 0f };
			Local_298[1 /*3*/] = { 4.2393f, 4.1781f, 0f };
			fLocal_305[0] = 145.8f;
			fLocal_305[1] = 130.32f;
			iLocal_281[0] = joaat("a_m_m_salton_01");
			iLocal_281[1] = joaat("a_m_m_salton_01");
			iLocal_278[0] = 0;
			iLocal_278[1] = 0;
			Local_308[0 /*3*/] = { 2.1f, 4.3f, 2f };
			Local_312[0 /*3*/] = { 2.5f, 1.75f, 2f };
			fLocal_316[0] = 33f;
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			StringCopy(&(Local_448[1 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		case 259:
			Local_298[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_298[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			fLocal_305[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_305[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_281[0] = joaat("a_m_m_malibu_01");
			iLocal_278[0] = 100;
			iLocal_278[1] = 100;
			StringCopy(&cLocal_366, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_DMAN1", 64);
			StringCopy(&(Local_382[1 /*16*/]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_DMAN2", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_DMAN1", 64);
			StringCopy(&(Local_415[1 /*16*/]), "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_DMAN2", 64);
			StringCopy(&(Local_448[0 /*16*/]), "", 64);
			StringCopy(&(Local_448[1 /*16*/]), "", 64);
			break;
		
		case 285:
			Local_298[0 /*3*/] = { -3.264f, -3.7895f, 14.1815f };
			fLocal_305[0] = 0f;
			iLocal_281[0] = joaat("g_m_y_lost_01");
			iLocal_278[0] = 100;
			StringCopy(&cLocal_366, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(&(Local_382[0 /*16*/]), "HOLD_LOOP_victim", 64);
			StringCopy(&(Local_415[0 /*16*/]), "THROW_EXIT_victim", 64);
			StringCopy(&(Local_448[0 /*16*/]), "", 64);
			StringCopy(&Local_484, "TREVOR", 16);
			StringCopy(&Local_488, "DropGuy", 16);
			StringCopy(&Local_492, "TRVS_IG_29G", 16);
			fLocal_496 = 0.75f;
			break;
		
		case 260:
			Local_298[0 /*3*/] = { 0.219f, 5.8091f, 0.6f };
			Local_298[1 /*3*/] = { 2.4f, 4.6336f, 0.6f };
			fLocal_305[0] = -164.16f;
			fLocal_305[1] = 166.32f;
			iLocal_281[0] = joaat("a_m_m_business_01");
			iLocal_281[1] = joaat("a_m_m_business_01");
			iLocal_278[0] = 0;
			iLocal_278[1] = 0;
			Local_308[0 /*3*/] = { 4f, 8f, 2f };
			Local_312[0 /*3*/] = { 10.5f, 5.5f, 2f };
			fLocal_316[0] = 0f;
			break;
		
		case 261:
			Local_298[0 /*3*/] = { 3.2998f, -1.8338f, 0.1366f };
			Local_298[1 /*3*/] = { 2.0737f, -3.6041f, 0.1348f };
			fLocal_305[0] = -169.9514f;
			fLocal_305[1] = 156.719f;
			iLocal_278[0] = 0;
			iLocal_278[1] = 0;
			iLocal_281[0] = joaat("s_m_m_bouncer_01");
			iLocal_281[1] = joaat("s_m_m_bouncer_01");
			Local_308[0 /*3*/] = { 3f, -3f, 2f };
			Local_312[0 /*3*/] = { 4.5f, 2.5f, 2f };
			fLocal_316[0] = 9f;
			break;
		
		case 239:
			Local_298[0 /*3*/] = { Vector(113.05f, 354.39f, -52.2f) - Local_294 + Vector(-1f, 0f, 0f) };
			Local_298[1 /*3*/] = { Vector(113.05f, 354.08f, -53.18f) - Local_294 + Vector(-1f, 0f, 0f) };
			fLocal_305[0] = -100f;
			fLocal_305[1] = -100f;
			iLocal_281[0] = joaat("a_m_m_business_01");
			iLocal_281[1] = joaat("a_m_m_business_01");
			Local_308[0 /*3*/] = { 1.6187f, -0.82f, 1f };
			Local_312[0 /*3*/] = { (2.5f + 0.5f), 8f, 2f };
			fLocal_316[0] = 6f;
			iLocal_278[0] = 100;
			iLocal_278[1] = 100;
			StringCopy(&cLocal_366, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(&(Local_382[0 /*16*/]), "001215_02_TRVS_12_ESCORTED_OUT_IDLE_GUARD1", 64);
			StringCopy(&(Local_382[1 /*16*/]), "001215_02_TRVS_12_ESCORTED_OUT_IDLE_GUARD2", 64);
			StringCopy(&(Local_415[0 /*16*/]), "001215_02_TRVS_12_ESCORTED_OUT_EXIT_GUARD1", 64);
			StringCopy(&(Local_415[1 /*16*/]), "001215_02_TRVS_12_ESCORTED_OUT_EXIT_GUARD2", 64);
			StringCopy(&(Local_448[0 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			StringCopy(&(Local_448[1 /*16*/]), "WORLD_HUMAN_GUARD_STAND", 64);
			break;
		
		default:
			Local_298[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_298[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			fLocal_305[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_305[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_281[0] = joaat("a_m_y_musclbeac_01");
			iLocal_281[1] = joaat("a_m_y_musclbeac_01");
			Local_308[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_312[0 /*3*/] = { 1f, 1f, 1f };
			fLocal_316[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			break;
	}
}











void func_59()//Position - 0x9334
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_281)
	{
		if (iLocal_281[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_281[iVar0]);
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_284);
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

